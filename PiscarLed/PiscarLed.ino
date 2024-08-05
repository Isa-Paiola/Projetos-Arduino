//programa que envia sinal alto para a saida 7, a guarda 1 segundo e envia sianl baixo para a saída 7.
void setup() {
  // define o modo da porta
pinMode(7,OUTPUT)

}

void loop() {
  // put your main code here, to run repeatedly:
// envia sinal alto
digitalWrite(7, HIGH); //acende o led
delay(1000); //aguarda 1 segundo
//envia sinal baixo
digitalWrite(7,LOW);
delay(1000);
}
