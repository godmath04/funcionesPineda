#include <stdio.h>

int sumar(int a, int b) // Siempre hay que declarar el tipo de datos que devuelve la suma
{
    int suma = a + b;
    // printf("La suma es: %d\n", suma);
}

int main()
{
    int num1 = 0, num2 = 0; // Es recomedable inicializar en cero
    int resultado;
    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);

    resultado = sumar(num1, num2);
    printf("El resultado es: %d", resultado);
    return 0;
}
