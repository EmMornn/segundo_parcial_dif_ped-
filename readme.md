Ejercicio 4.1. Ciclos anidados con límite variable

1.  Su complejidad temporal es de: O(n^2)

2.  El numero de comparaciones se cuadruplica

Justificacion:

1. En ambos for, tanto i como j va desde 0 hasta que sea menor a n, entonces hace n\*n comparaciones
2. Dado que la complejidad en O(n^2) al duplicar queda como 4n(2)

​Ejercicio 4.2. Ciclo multiplicativo dentro de un ciclo lineal
​

1.  Su complejidad temporal es de: O(n log n)
    ​
​2. El numero de comparaciones aumenta un poco mas del doble

​Justificacion:
​1. El primer for (i) va desde 0 hasta que sea menor a n haciendo n comparaciones, mientras que el segundo for (j) se multiplica por 3 haciendo log3(n) comparaciones, entonces hace n\*log3(n) comparaciones
​2. Dado que la complejidad es O(n log n), al duplicar el tamaño a 2n la expresion queda como 2n log3(2n), lo que equivale a 2n log3(n) + 2n log3(2), haciendo que aumente poco mas del doble
