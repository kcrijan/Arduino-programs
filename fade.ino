// Program used for fading of light bulb
int pwmPin = 12;


void setup() {
 pinMode(pwmPin, OUTPUT); 
}

void loop() {
for(int value = 0; value <= 255; value++){
  analogWrite(pwmPin, value);
  delay(30);
}
for(int value = 255;value >= 0;value--){
  analogWrite(pwmPin,value);
  delay(20);
}

}
