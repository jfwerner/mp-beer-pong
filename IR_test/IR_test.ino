//Pin: G2

int val = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(2);
  if (val = 0){
    Serial.print("object");
    //flash lights
  }
  else
  
  
  Serial.println(val);
  delay(10);
}
