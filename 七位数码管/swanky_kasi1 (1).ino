//f 前进 b后退 l左转 r右转 s停止

void setup()
{
 Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
 
}

void loop()
{

  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);//D
  digitalWrite(5,0);
  digitalWrite(6,0);
 
  int income;
  if(Serial.available()>0)
  {
  income=Serial.read()-'0';
    if((income&1)==1)
      digitalWrite(2,1);
    if((income>>1&1)==1)
      digitalWrite(3,1);
     if((income>>2&1)==1)
      digitalWrite(4,1);
     if((income>>3&1)==1)
      digitalWrite(5,1);
     delay(1500);
  }
}
