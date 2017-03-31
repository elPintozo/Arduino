/*
2-recistencias de 220 ohm
1-led 5mm
1-boton 
*/
int boton = 0;//0[low] = apagado | 1[high] = encendido

void setup(){
  pinMode(8,INPUT);//entrada del boton
  pinMode(4,OUTPUT);//salida del led
}
void loop(){
  boton = digitalRead(8);//lectura del estado del boton

  if(boton==HIGH){
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4,LOW);
  }
}
