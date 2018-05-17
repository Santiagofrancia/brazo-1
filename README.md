# Práctica Sistemas Programables - Brazo Robótico controlado mediante una interfaz Java
## Equipo: 
- Castañeda Mares Luis Gerardo.
- Castillo Hernández Gerardo.
- Ayala Palomarez Pedro.
_________________________________________________________________________________________
## Material Utilizado:
1. Brazo mecánico armable.
4. Servomotores.
1. Motor a pasos.
1. Arduino UNO.
1. Protoboar
 Leds de colores.
 cables conectores (macho-hembra , macho-macho).
_________________________________________________________________________________________

## FUNCIONAMIENTO
El archivo nombre.java provee una interfaz conectada mediante el puerto serial con el archivo arduino.ino, la intefaz cuenta con un input que permite enviar los parámetros necesarios mediante el puerto serial al arduino para poner en funcionamiento el brazo.

El arduino recibe un total de 4 instrucciones las cuales son ingresadas por el usuario en la interfaz java y son posteriormente ejecutadas de manera continua, repitiéndose hasta que el usuario detenga la ejecución.

________________________________________________________________________________________

## MOVIMIENTO.
Los valores o parámetros a utilizar para el funcionamiento del brazo se definen a continuación.

- Valor 1: Este valor corresponde al servomotor número 1 cuya función es acercarce o alejarse del objeto a tomar. **El rango de valores de este parámetro debe estar entre 90 y 130**.
- Valor 2: Este valor corresponde al servomotor número 2 cuya  función se bajar hacia el objeto a tomar o subirlo. **El rango de valores de este parámetro debe estar entre 90 y 130**
- Valor 3: Este valor corresponde al servomotor número 3 cuya función es abrir o cerrar la pinza con la que se toma el objeto. **El rango de valores de este parámetro debe estar entre 90 y 130** 
- Valor 4: Este valor corresponde al motor a pasos cuya función es hacer girar sobre su eje al brazo.
