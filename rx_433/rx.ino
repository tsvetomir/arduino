#include <RemoteReceiver.h>

/*
* Demo for RF remote switch receiver.
* For details, see RemoteReceiver.h!
*
* This sketch shows the received signals on the serial port.
* Connect the receiver to digital pin 2.
*/

void showCode(unsigned long receivedCode, unsigned int period) {
  //Note: interrupts are disabled. You can re-enable them if needed.

  Serial.print("Code: ");
  Serial.print(receivedCode);
  Serial.print(", period duration: ");
  Serial.print(period);
  Serial.println("us.");
}

void setup() {
  Serial.begin(9600);

  // Initialize receiver on interrupt 0 (= digital pin 2)
  // Calls the callback "showCode" after 3 identical codes have been received
  RemoteReceiver::init(0, 3, showCode);
}

void loop() {
}
