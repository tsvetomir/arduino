const int LED_PIN = 9;
int STEP = 5;

int brightness = 0;
int sign = 1;

void setup()  { 
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
} 

void loop()  { 
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  brightness = (1023 - sensorValue) / 4;
  analogWrite(LED_PIN, brightness);    

  delay(10);                            
}

