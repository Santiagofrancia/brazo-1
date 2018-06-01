# Práctica Sistemas Programables - Brazo Robótico controlado mediante una interfaz Java
## Equipo: 
- Castañeda Mares Luis Gerardo.
- Castillo Hernández Gerardo.
- Ayala Palomarez Pedro.
_________________________________________________________________________________________
## Material Utilizado:
1. Brazo mecánico armable.

<img src="https://github.com/luis3c/brazo/blob/master/material/brazo.JPG?raw=true" />

4. Servomotores MG90S.

<img src="https://github.com/luis3c/brazo/blob/master/material/servo.jpg?raw=true" />

1. Motor a pasos 28BYJ-48 (driver ULN2003).

<img src="https://github.com/luis3c/brazo/blob/master/material/apasos.jpg?raw=true" width="400" height="350" />

1. Arduino UNO.

<img src="https://github.com/luis3c/brazo/blob/master/material/Arduino-UNO-frontal.jpg?raw=true" width="400" height="350" />

1. Protoboar.

<img src="https://github.com/luis3c/brazo/blob/master/material/proto.jpg?raw=true" width="300" height="400" />

- Leds de colores.

<img src="https://github.com/luis3c/brazo/blob/master/material/arduino-led-color.png?raw=true" />

- cables conectores (macho-hembra , macho-macho).

<img src="https://github.com/luis3c/brazo/blob/master/material/Cables-para-protoboard-macho-macho-imagen3.jpg?raw=true" width="400" height="350" />

- Resistencias de 220 ohms.

<img src="https://github.com/luis3c/brazo/blob/master/material/010651.jpg?raw=true" width="300" height="300" />

_________________________________________________________________________________________

## FUNCIONAMIENTO
El archivo Principal.form dentro del proyecto java(carpeta Bazo4g) provee una interfaz conectada mediante el puerto serial con el archivo Brazo4g.ino, la intefaz cuenta con dos botones para abrir dos subinterfaces, la primera cuenta con un input que permite controlar el brazo mediante un conjunto de instrucciones, los parámetros necesarios se envían mediante el puerto serial al arduino para poner en funcionamiento el brazo. La segunda subinterfaz cuenta con 7 botones para mover cada uno de los servos y el motor a pasos de manera independiente, cada boton envía una señal mediante el puerto serial para mover el brazo.

Para la primera opción(mover el brazo mediante un conjunto de instrucciones o pasos) el arduino recibe un total de 4 instrucciones las cuales son ingresadas por el usuario en el input de la interfaz y son posteriormente ejecutadas de manera continua, repitiéndose hasta que el usuario detenga la ejecución.

________________________________________________________________________________________

## MOVIMIENTO.
Los valores o parámetros a utilizar para el funcionamiento del brazo mediante el conjunto de instrucciones se definen a continuación.

- Valor 1: Este valor corresponde al servomotor número 1 cuya función es acercarce o alejarse del objeto a tomar. **El rango de valores de este parámetro debe estar entre 90 y 130**.
- Valor 2: Este valor corresponde al servomotor número 2 cuya  función se bajar hacia el objeto a tomar o subirlo. **El rango de valores de este parámetro debe estar entre 50 y 90**
- Valor 3: Este valor corresponde al servomotor número 3 cuya función es abrir o cerrar la pinza con la que se toma el objeto. **El rango de valores de este parámetro debe estar entre 70 y 110** 
- Valor 4: Este valor corresponde al motor a pasos cuya función es hacer girar sobre su eje al brazo.

<img src="https://github.com/luis3c/brazo/blob/master/Fotos/20180517_083726.jpg?raw=true" width="400" height="600" />
