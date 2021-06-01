int distance = 0;
int limitswitch = 13;
int value;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); //dir -ve controls the direction
  pinMode(9, OUTPUT); //pul -ve controls the power to the motor

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  Serial.begin(9600);

  pinMode(limitswitch, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = digitalRead(limitswitch);
  //  Serial.println(value);
  if (value == 0)
  {
    digitalWrite(9, HIGH);
    delayMicroseconds(100);
    digitalWrite(9, LOW);
    delayMicroseconds(100);


    //    distance++;

  }
}
