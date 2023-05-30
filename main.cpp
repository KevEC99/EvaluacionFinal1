#include <iostream>

// Funci�n para calcular el factorial de un n�mero
unsigned factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Funci�n para calcular la serie de Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1, c;
    std::cout << "Serie de Fibonacci hasta el t�rmino " << n << ": ";

    if (n >= 1)
        std::cout << a << " ";

    if (n >= 2)
        std::cout << b << " ";

    for (int i = 3; i <= n; ++i) {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }

    std::cout << std::endl;
}

int main() {
    int num;

    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> num;

    // Llamar a la funci�n factorial y mostrar el resultado
    unsigned factResult = factorial(num);
    std::cout << "El factorial de " << num << " es: " << factResult << std::endl;

    // Llamar a la funci�n fibonacci
    fibonacci(num);

    return 0;
}

