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

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool val = digitalRead(2);
  
  if (val == 0){
    for (int i = 0; i < 30; i++) {
    Serial.println("IIIIIII\n");
    delay(50);
    Serial.println("OOOOOOO\n");
    delay(50);
    }
  }
}
