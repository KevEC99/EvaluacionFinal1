#include <iostream>

// Funci�n para calcular el factorial de un n�mero
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> num;

    // Llamar a la funci�n factorial y mostrar el resultado
    unsigned long long result = factorial(num);
    std::cout << "El factorial de " << num << " es: " << result << std::endl;

    return 0;
}

