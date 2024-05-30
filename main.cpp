void setup()
{
  // Semaforo S1, S3
  pinMode(2, OUTPUT); // Rosso
  pinMode(3, OUTPUT); // Giallo
  pinMode(4, OUTPUT); // Verde
  // Semaforo S2, 24
  pinMode(5, OUTPUT); // Rosso
  pinMode(6, OUTPUT); // Giallo
  pinMode(7, OUTPUT); // Verde
  
  Serial.begin(9600);
}

void loop()
{
  
  // Seq. 1 RVRV
  Serial.println("Seq. 1 Starting");
  digitalWrite(6, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(8000); // 8 Sec
  
  // Seq. 2 RGRG
  Serial.println("Seq. 2 Starting");
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(5000); // 5 Sec
  
  // Seq. 3 VRVR
  Serial.println("Seq. 3 Starting");
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  delay(8000); // 8 Sec
  
  // Seq. 4 GRGR
  Serial.println("Seq. 4 Starting");
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(5000); // 5 Sec
  
  Serial.println("Loop Ended. Restarting");
}