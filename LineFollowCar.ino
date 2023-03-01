const int IRsensor1=7;
const int IRsensor2=13;
const int Motor2Direction1=12;
const int Motor2Direction2=11;
const int Motor2Speed=9;

void setup() {
pinMode(IRsensor1,INPUT);
pinMode(IRsensor2,INPUT);
pinMode(Motor1Direction1,OUTPUT);
pinMode(Motor1Direction2,OUTPUT);
pinMode(Motor1Speed,OUTPUT);
pinMode(Motor2Direction1,OUTPUT);
pinMode(Motor2Direction2,OUTPUT);
pinMode(Motor2Speed,OUTPUT);
}

void loop() {
  if(digitalRead(7)==1)
  {
    analogWrite(Motor1Speed,0);
    
  }
  else{
    analogWrite(Motor1Speed,90);
  }
  if(digitalRead(13)==1)
  {
    analogWrite(Motor2Speed,0);
    
  }
  else{
    analogWrite(Motor2Speed,90); 
  }
  
digitalWrite(Motor1Direction1,LOW);
digitalWrite(Motor1Direction2,HIGH);

digitalWrite(Motor2Direction1,LOW);
digitalWrite(Motor2Direction2,HIGH);
}
