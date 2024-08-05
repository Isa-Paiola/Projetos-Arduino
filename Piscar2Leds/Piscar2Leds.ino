//programa para piscar 2 LEDS
//LED está na porta 11

//parte que faz a configuração
void setup()
{
//configurando a porta 11 e 13 como saída
  pinMode(13, OUTPUT);
  pinMode(11,OUTPUT);
}

//segunda parte do código
//parte do código que fica repetindo

void loop()
{
//envia para a porta 13 o sinal ALTO
  digitalWrite(13, HIGH);
  //aguarda 1 segundo
  delay(1000);
//envia para a porta 13 o sinal BAIXO
  digitalWrite(13,LOW);
//aguarda por 1 segundo
delay(1000);
//envia para a porta 11 o sinal ALTO
  digitalWrite(11, HIGH);
  //aguarda 1 segundo
  delay(1000);
//envia para a porta 11 o sinal BAIXO
  digitalWrite(11,LOW);
//aguarda por 1 segundo
  delay(1000);
