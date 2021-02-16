#ifndef TESTEPORTA_H
#define TESTEPORTA_H

#include <Arduino.h>

class testePorta
{
public:
	testePorta(int porta);
	bool iniciaPortaSaida();

private:
	bool controleWhile = true;
	int _pin;
    int i;
    bool retorno;
};

#endif
