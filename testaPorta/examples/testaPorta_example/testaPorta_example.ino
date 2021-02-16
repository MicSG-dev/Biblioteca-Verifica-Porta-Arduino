#include <testePorta.h>


void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  testePorta led(13);
  if(!led.iniciaPortaSaida()){
    Serial.println("\nERRO de Inicialização.");
    while(1){
      
    }
  }
  


}

void loop() {
  // put your main code here, to run repeatedly:
  
}