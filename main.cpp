#include <iostream>
#include <string>

// Función para calcular el factorial de un número
unsigned factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Función para calcular la serie de Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1, c;
    std::cout << "Serie de Fibonacci hasta el término " << n << ": ";

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

// Función para contar las vocales en una cadena de texto
int contarVocales(const std::string& texto) {
    int contador = 0;
    std::string vocales = "aeiouAEIOU";

    for (std::size_t i = 0; i < texto.length(); ++i) {
        char c = texto[i];
        if (vocales.find(c) != std::string::npos) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int num;
    std::string texto;

    std::cout << "Ingrese un numero entero positivo: ";
    std::cin >> num;

    // Llamar a la función factorial y mostrar el resultado
    unsigned factResult = factorial(num);
    std::cout << "El factorial de " << num << " es: " << factResult << std::endl;

    // Llamar a la función fibonacci
    fibonacci(num);

    // Contar vocales en una cadena de texto
    std::cout << "Ingrese un texto: ";
    std::cin.ignore(); // Ignorar el salto de línea anterior
    std::getline(std::cin, texto);
    int contadorVocales = contarVocales(texto);
    std::cout << "El texto contiene " << contadorVocales << " vocales." << std::endl;

    return 0;
}

