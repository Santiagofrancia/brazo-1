#include <Servo.h>


int input;
int contador = 1;
int condicion;
int valorFinal;
int valorFinal2;
int valorFinal3;
int valorFinal4;
int motorPin1 = 2;  //pin8----1N4
int motorPin2 = 3;  //pin8----1N3
int motorPin3 = 4;  //pin8----1N2
int motorPin4 = 5;  //pin8----1N1
int paro;
const int rojo = 13;
const int amarillo = 12;

// Declaramos la variable para controlar el servo
Servo servoMotor;
Servo servoMotor1;
Servo servoMotor2;


//Definimos la función que provocará el giro antihorario
/* El parámetro de entrada "delayTime" definirá la velocidad de giro
*/
void gira_antihorario(int delayTime)
{
  digitalWrite(motorPin1, HIGH); // Los pines se activan en secuencia
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(delayTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(delayTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, HIGH);
  delay(delayTime);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(delayTime);
}
//Definimos la función que provocará el giro horario
void gira_horario(int delayTime)
{
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(delayTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, HIGH);
  delay(delayTime);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(delayTime);
  digitalWrite(motorPin1, HIGH); // Los pines se activan en secuencia
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(delayTime);
}

void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);

  // Iniciamos el servo para que empiece a trabajar con el pin 9

  servoMotor.attach(9);
  servoMotor1.attach(11);
  servoMotor2.attach(10);

  pinMode(motorPin1, OUTPUT); // Configuración de los PINes como salida digital del motor a pasos
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);

}

void loop() {
  int x = 0;
  digitalWrite(amarillo, HIGH);
  digitalWrite(rojo, LOW);

  
  if (Serial.available() > 0) {
    input = Serial.read();


    if (contador == 1) {
      valorFinal = input;
    }
    if (contador == 2) {
      valorFinal2 = input;
    }
    if (contador == 3) {
      valorFinal3 = input;
    }
    if (contador == 4) {
      valorFinal4 = input;
    }
    

    //String valorCadena = String(input);
    //String valorCadena1 = String(input);
    //valorA = valorCadena.substring(0,3);
    //valorB = valorCadena1.substring(3,6);
    //int Text = input;
    //int valorFinal = valorA.toInt();
    //int valorFinal2 = valorB.toInt();
    if (input == 200) {
      paro = 1;
    }
    while (paro == 1) {
      digitalWrite(amarillo, LOW);
      digitalWrite(rojo, HIGH);
      
      servoMotor.write(valorFinal);
      delay(2000);
      servoMotor1.write(valorFinal2);
      delay(2000);
      servoMotor2.write(40);
      delay(2000);
      servoMotor2.write(valorFinal3);
      delay(2000);
      servoMotor1.write(90);
      delay(2000);
      servoMotor.write(70);
      delay(2000);
      //gira media vuelta en sentido antihorario rápido
  
      if(valorFinal4==1){
      for (int i=0; i <= 265; i++){
      gira_antihorario(10); 
      } 
      delay(6000);//espera 2 segundos
      }

      if(valorFinal4==2){
      for (int i=0; i <= 265; i++){
      gira_horario(10); 
      } 
      delay(2000);//espera 2 segundos 
      }

      servoMotor.write(valorFinal);
      delay(2000);
      servoMotor1.write(valorFinal2);
      delay(2000);
      servoMotor2.write(40);
      delay(2000);
      servoMotor2.write(valorFinal3);
      delay(2000);
      servoMotor1.write(90);
      delay(2000);
      servoMotor.write(70);
      delay(2000);


      if(valorFinal4==2){
      for (int i=0; i <= 265; i++){
      gira_antihorario(10); 
      } 
      delay(5000);//espera 2 segundos
      }

      if(valorFinal4==1){
      for (int i=0; i <= 265; i++){
      gira_horario(10); 
      } 
      delay(2000);//espera 2 segundos 
      }
      
      if (input == 300) {
        contador = 0;
        paro = 0;
      }
    }
    contador++;
  }
}
