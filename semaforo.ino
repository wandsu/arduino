//Botão Pedestre
int botaoPedestre = (9);
//Pinos Semáforo Carros
int carrosVerde = (3);
int carrosAmarelo = (2);
int carrosVermelho =  (1);

//Pinos Semáforo Pedestre
int pedestreVerde = (7);
int pedestreVermelho = (6);

void setup()
{
  pinMode(botaoPedestre,INPUT);
  pinMode(pedestreVerde,OUTPUT);
  pinMode(pedestreVermelho,OUTPUT);
  pinMode(carrosVerde,OUTPUT);
  pinMode(carrosAmarelo,OUTPUT);
  pinMode(carrosVermelho,OUTPUT);
}

void loop()
{
  while(digitalRead(botaoPedestre) != HIGH)
  {
    //Sinal Verde 
    digitalWrite(carrosVermelho,LOW);
    digitalWrite(pedestreVerde,LOW);
    digitalWrite(carrosVerde,HIGH);
    digitalWrite(pedestreVermelho,HIGH);
    botaoPressionado();
    delay(1000);
    botaoPressionado();
    delay(1000);
    botaoPressionado();
    delay(1000);
    botaoPressionado();
    delay(1000);
    botaoPressionado();
    delay(1000);
    botaoPressionado();
    delay(1000);
    botaoPressionado();
    delay(1000);
    botaoPressionado();
  
    //Sinal Amarelo
    digitalWrite(carrosVerde,LOW);
    digitalWrite(carrosAmarelo,HIGH);
    delay(2000);
  
    //Sinal Vermelho
    digitalWrite(carrosAmarelo,LOW);
    digitalWrite(pedestreVermelho,LOW);
    digitalWrite(carrosVermelho,HIGH);
    digitalWrite(pedestreVerde,HIGH);
    delay(4000);
  }
}
void botaoPressionado(){
  if(digitalRead(botaoPedestre) == HIGH)
  {
    digitalWrite(carrosVerde,LOW);
    digitalWrite(carrosAmarelo,HIGH);
    delay(2000);
    digitalWrite(carrosAmarelo,LOW);
    digitalWrite(pedestreVermelho,LOW);
    digitalWrite(carrosVermelho,HIGH);
    digitalWrite(pedestreVerde,HIGH);
    delay(4000);
    loop();
  }
}
