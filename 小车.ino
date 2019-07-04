//f 前进 b后退 l左转 r右转 s停止

void setup()
{
 Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
  {
  income=Serial.read();
  }
  switch(income)
  {
    case 'f':forward();break;
    case 'b':backward();break;
    case 'l':left();break;
    case 'r':right();break;
    case 's':stop();break;
    default:break;
   
  }
}
void forward()
{
digitalWrite(9,1);
  digitalWrite(6,1);
digitalWrite(10,0);
  digitalWrite(5,0);
}
void backward()
{
digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(6,LOW);
}
void left()
{
digitalWrite(9,LOW);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);

}
void right()
{
digitalWrite(9,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(5,LOW);

}
void stop()
{
digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

}
