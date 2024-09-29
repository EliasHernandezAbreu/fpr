# Funciones Primitivas Recursivas

*Elías Hernández Abreu - alu0101487137@ull.edu.es*

## Descripción

El programa usa funciones recursivas primitivas para calcular la potencia de dos números.

## Compilar

Usa:
```
make
```
para compilar, el ejecutable estará en ***./bin/***.

## Ejecutar

Ejecuta el binario de ***./bin/*** con dos argumentos. Otros números de argumentos son permitidos pero tirarán errores durante la ejecucion por intentar llamar funciones primitivas recursivas con un número de parámetros distinto a el que reciben. Ej:
```
./bin/fpr 3 3     # -> 27
```

## Detalles

Se usó OOP para desarrollar las clases necesarias para implementar un framework sencillo que permite crear FPRs de forma similar a como uno lo haría en papel.

Se usa recursividad asi que la pila explota si pones números muy grandes.
