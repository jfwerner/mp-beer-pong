/* Beerpong bot proof of concept (multi sensor)
 *  
 *  Johannes Werner
 *  Jonas Hauptmann
 *  
 *  Creative Commons Zero v1.0 Universal Licence
 * 
 */

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cup1 = digitalRead(2);
  int cup2 = digitalRead(3);
  int cup3 = digitalRead(4);

  int val = (cup1 + cup2 + cup3);
  
  if (val < 3){
    for (int i = 0; i < 30; i++) {    // i < 30 -> number of times the LED will blink
    Serial.println("IIIIIII\n");            // Replace by LED on
    delay(50);      // delay between blinks
    Serial.println("OOOOOOO\n");            // Replace by LED off
    delay(50);
    }
  }
}
