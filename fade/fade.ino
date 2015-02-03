const int LED_PIN = 9;
int STEP = 5;

int brightness = 0;
int sign = 1;

void setup()  { 
  pinMode(LED_PIN, OUTPUT);
} 

void loop()  { 
  analogWrite(LED_PIN, brightness);    

  brightness = brightness + sign * STEP;

  if (brightness == 0 || brightness == 255) {
    sign *= -1; 
  }     

  delay(30);                            
}

