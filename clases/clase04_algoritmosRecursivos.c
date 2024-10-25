#include<stdio.h>

// Algoritmos Recursivos

/*
 *FACTORIAL
* Construya un algoritmo recursivo que calcule el factorial de un número no
* negativo. La ecuación de recurrencia que define el factorial es:
* - 0! = 1
* - n! = n * (n-1)! para n > 0
*
* Psuedocódigo:
* factorial(NUM n): NUM
    IF n = 0 THEN
     RETURN (1)
    RETURN n * factorial(n - 1)
*/

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

/*
* Construya un algoritmo recursivo para calcular el enésimo término de la sucesión
* de Fibonacci. La ecuación de recurrencia para la sucesión de Fibonacci es:
* – Fib(0) = 0
* - Fib(1) = 0
* - Fib(n) = Fib(n-2) + Fib(n-1)
* Psuedocódigo:
* fib(NUM n): NUM
    IF n = 1 OR n = 0 THEN
        RETURN (n)
    RETURN fib(n-1) + fib(n-2)
 */

int fibonacci(int n) {
    if (n == 0 || n == 1 ) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

/*
* Construya un algoritmo recursivo para ordenar por mezcla una lista de numeros:
* Psuedocódigo:
* ordenamiento_mezcla(NUM A[n], NUM p, NUM r)
    IF p < r THEN
        q ← (p + r) // 2
        ordenamiento_mezcla(A, p, q)
        ordenamiento_mezcla(A, q + 1, r)
        mezclar(A, p, q, r)
 */



int main() {
    int n;
    printf("Ingrese un número no negativo: ");
    scanf("%d", &n);
    //printf("El factorial de %d es %d\n", n, factorial(n));
    printf("El fibonacci de %d es %d\n", n, fibonacci(n));
    return 0;
}

