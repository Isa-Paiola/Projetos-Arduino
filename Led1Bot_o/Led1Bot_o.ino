//acende o LED enquanto estiver pressionando o botão
//

//Declarar as variáveis
int estadoBotao = 0;
void setup()
{
  pinMode(9, OUTPUT);//led
  pinMode(7, INPUT);//botao
}

void loop()
{
  //lê a porta 7 e armazena
  //o valor na variàvel 'estadoBotao'
  estadoBotao = digitalRead(7);
  
  if (estadoBotao == HIGH) {
  digitalWrite(9, HIGH);//Botão pressionado, acende o led.
  } else {
  digitalWrite(9, LOW);//Botão pressionado, apaga o led.
  }
}
