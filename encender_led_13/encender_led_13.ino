void setup(){
  pinMode(13,OUTPUT);//declaro el pin 13 como salida
}
void loop(){//loop es igual a un while con condicion true
  //el pin 13 es la referencia al led integrado en la placa del arduino
  digitalWrite(13,HIGH);//encender el led
  //tiempo expresado en milisegundos
  delay(500);//pausa arduino 1 seg
  digitalWrite(13,LOW);
  //tiempo expresado en milisegundos
  delay(500);//pausa arduino 1 seg
}
