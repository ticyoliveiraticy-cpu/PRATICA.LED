int led = 6;
int botao = 5;

bool estadoLed = 0;
void setup()
{

pinMode(led, OUTPUT);

interno
pinMode(botao, INPUT_PULLUP);
}
void loop()
{

if(digitalRead(botao) == LOW){

estadoLed = !estadoLed;
digitalWrite(led, estadoLed);

acionamentos
while(digitalRead(botao) == LOW);
delay(100); 
}
}