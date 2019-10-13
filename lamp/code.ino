int inPin = 2;  
int val = 0;   

void setup() {
  pinMode(2,OUTPUT);  
  pinMode(inPin, INPUT);    
}

void loop(){
  val = digitalRead(inPin);  
  if (val == HIGH) 
  {     
    digitalWrite(4, HIGH); 
  } else {
    digitalWrite(4, LOW);
  }
}
