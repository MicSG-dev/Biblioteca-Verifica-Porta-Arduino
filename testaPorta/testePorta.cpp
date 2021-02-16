#include "testePorta.h"

testePorta::testePorta(int pin)
{
   pinMode(pin, OUTPUT);
   _pin = pin;
   i = 0;
   retorno = false;
}

bool testePorta::iniciaPortaSaida() {
    while (controleWhile) {
      pinMode(_pin, OUTPUT);
      delay(5000);
      digitalWrite(_pin, HIGH);

      if (digitalRead(_pin) != HIGH) {
        delay(500);
        i++;
      } else {
        controleWhile = false;
        digitalWrite(_pin, LOW);
        retorno = true;
      }
      if (i > 3) {
        controleWhile = false;
        retorno = false;
      }
    }
    return retorno;
  }
