//semáforo
 int t1 = 5000;
 int t2 = 2000;
 int t3 = 4000;
void setup()
{
  pinMode(11, OUTPUT);//led vermelho
  pinMode(12, OUTPUT);//led amarelo
  pinMode(13, OUTPUT);//led verde
}

void loop()
{
  digitalWrite(13, HIGH);//nível alto
  delay(t1); // temporizador
  digitalWrite(13, LOW);//nível baixo
  digitalWrite(12, HIGH);
  delay(t2); // temporizador
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(t3);
  digitalWrite(11, LOW);
}
