/* Beerpong bot proof of concept
 *  
 *  Johannes Werner
 *  Jonas Hauptmann
 *  
 *  Creative Commons Zero v1.0 Universal Licence
 * 
 */
  
  //Pin: G2
#define pin = 2;

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
    for (i = 0; i < 15; i++){
      Serial.print("object");
      Serial.print("OOOOOO");
      delay(100);
      Serial.print("IIIIII");
      delay(100);
      //flash lights
    }
  }
  else
  
  Serial.println(val);
  delay(10);
}
