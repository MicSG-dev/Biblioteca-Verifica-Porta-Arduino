#include "testePorta.h"

testePorta::testePorta(int pin)
{
   pinMode(pin, OUTPUT);
   _pin = pin;
   i = 0;
   retorno = false;
}

bool testePorta::iniciaPortaSaida() {
  if(!Serial){
    Serial.begin(9600);
	Serial.print("Serial iniciada");
  }
    while (controleWhile) {
      pinMode(_pin, OUTPUT);
      Serial.print("Iniciando Teste de Porta Entrada ");
      Serial.println(_pin);
      delay(5000);
      digitalWrite(_pin, HIGH);

      if (digitalRead(_pin) != HIGH) {
        Serial.println("Porta não iniciado\n");
        delay(500);
        i++;
      } else {
        Serial.println("Porta OK");
        delay(1000);
        controleWhile = false;
        digitalWrite(_pin, LOW);
        retorno = true;
      }
      if (i > 3) {
        Serial.println("Não foi possível iniciar a Porta");
        delay(1000);
        Serial.println("Verifique as conexões. Após verificar as conexões, aperte Reset na placa");
        controleWhile = false;
        retorno = false;
      }
    }
    return retorno;
  }
