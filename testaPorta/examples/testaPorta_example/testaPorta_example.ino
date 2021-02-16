#include <testePorta.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  testePorta led(13);
  if (!led.iniciaPortaSaida()) {
    Serial.println("ERRO de Inicialização.");
    while (1) {    }
  } else {
    Serial.println("Porta 13 inicializada com sucesso");
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
