int ls;
int cs;
int lmt1 = 5;
int lmt2 = 3;
int rmt1 = 6;
int rmt2 = 11;
void setup() {
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(lmt1, OUTPUT);
  pinMode(lmt2, OUTPUT);
  pinMode(rmt1, OUTPUT);
  pinMode(rmt2, OUTPUT);
}

void loop() {
  ls = digitalRead(7);
  cs = digitalRead(8);
  if (ls == LOW && cs == LOW)
  {
    stpleft();
  }
  else if (ls == HIGH && cs == LOW)
  {
    stpright();
  }
  else if (ls == LOW && cs == HIGH)
  {
    right();
    delay(300);
  }
  else if (ls == HIGH && cs == HIGH)
  {
    right();
    delay(300);
  }
}
void forward()
{
  digitalWrite(lmt1, HIGH);
  digitalWrite(lmt2, LOW);
  digitalWrite(rmt1, HIGH);
  digitalWrite(rmt2, LOW);
  delay(1000);
}
void reverse()
{
  digitalWrite(lmt1, LOW);
  digitalWrite(lmt2, HIGH);
  digitalWrite(rmt1, LOW);
  digitalWrite(rmt2, HIGH);
}
void left()
{
  digitalWrite(lmt1, LOW);
  digitalWrite(lmt2, HIGH);
  digitalWrite(rmt1, HIGH);
  digitalWrite(rmt2, LOW);
}
void right()
{
  digitalWrite(lmt1, HIGH);
  digitalWrite(lmt2, LOW);
  digitalWrite(rmt1, LOW);
  digitalWrite(rmt2, HIGH);
}
void stp()
{
  digitalWrite(lmt1, LOW);
  digitalWrite(lmt2, LOW);
  digitalWrite(rmt1, LOW);
  digitalWrite(rmt2, LOW);
}
void stpleft()
{
  digitalWrite(lmt1, LOW);
  digitalWrite(lmt2, LOW);
  digitalWrite(rmt1, HIGH);
  digitalWrite(rmt2, LOW);
}
void stpright()
{
  digitalWrite(lmt1, HIGH);
  digitalWrite(lmt2, LOW);
  digitalWrite(rmt1, LOW);
  digitalWrite(rmt2, LOW);
}


