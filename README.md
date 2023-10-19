## Desarrollo de algoritmo para resolver un problema
### Consigna:
Se desea desarrollar un sistema de reservas de entradas para un cine. La sala consta de 12 filas numeradas 
de la 1 a la 12 y cada fila tiene 9 butacas numeradas a partir de la columna central, con las butacas impares a 
la derecha y las pares a la izquierda, como en el siguiente esquema:

> 8 6 4 2 1 3 5 7 9

Para la carga, se debe mostrar al usuario un esquema con las butacas disponibles y reservadas, marcando 
con la letra D las disponibles y con la letra R las reservadas.
Por cada reserva se debe solicitar la fila y número de butaca a reservar. Cada vez que se realice una 
reserva se deberá actualizar el esquema que muestra las butacas. Si la butaca seleccionada ya estaba 
ocupada se debe informar al usuario para que seleccione otra. El proceso de reserva finaliza con una fila
con un número negativo.

Al finalizar mostrar:
+ La cantidad de asientos disponibles y la cantidad de asientos reservados.
+ Los números de filas que quedaron vacías.
+ La o las filas con mayor cantidad de espectadores.
+ Un listado con la cantidad de personas que se sentaron en los mismos números de butacas en 
todo el cine. Por ejemplo:

| Butaca | Cantidad |
|- | - |
1 | 10
2 | 5
3 | 11
