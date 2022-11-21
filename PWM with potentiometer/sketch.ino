void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int nilai_output = analogRead(A0);
 int nilai_PWM = map (nilai_output ,0,1023,0,255);
 Serial.println("nilai pwm :  " );
 Serial.print(nilai_PWM);
 Serial.println(" ");
 analogWrite(5, nilai_PWM);
 analogWrite(6, nilai_PWM);
}
