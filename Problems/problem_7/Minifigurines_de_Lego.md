# Minifigurines de Lego

###Introducción

Cierto profesor del Cinvestav Tamaulipas está obsesionado por incrementar su colección de
minifigurines de lego este fin de año. Él cuenta con una lista con N posibles minifigurines distintas
que quisiera comprar en ebay y les ha asignado un puntaje P de 0 a 100 a cada una de ellas de
acuerdo al interés que tiene en ellas. Cada mini figura tiene un costo C asociado.
En su curso de optimización en lenguajes esotéricos, el profesor te ha pedido que implementes un
programa que le ayude a decidir qué minifigurines deba comprar tal que el puntaje acumulado sea
el máximo respetando su capacidad de gasto G.

###Entrada

En la primera línea dos números enteros separados por un espacio que corresponden a G y N
respectivamente.
En las siguientes N líneas habrá en cada línea dos números separados por un espacio
indicando el costo C y el puntaje P de esa minifigura.

###Restricciones

1 <= G <= 10000
1 <= N <= 500
1 <= C, P <= 100

###Salida

Tu programa deberá escribir en la pantalla un único número que indique el puntaje máximo de
minifigurines que puede obtener el profesor con su dinero.

###Ejemplos

-------------
Entrada | Salida
=============
15 4  | 35
2 11 
3 12
9 12
10 10
-------------