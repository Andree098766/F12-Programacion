// Librerías.
#include <iostream>
#include <string>
#include <vector>
#include <cmath> // Para la raiz cuadrada.
using namespace std;

// Función que verifica que sea un número primo.
string es_primo(const int numero){ 
    if (numero < 2) return "no primo";

    int sqrt_n = (int)sqrt(numero);

    for (int i = 2; i <= sqrt_n; i++){
        if (numero % i == 0) return "no primo"; // Encontramos un divisor, luego no es primo.
    }

    return "primo"; // No tenia divisores.
}


// Cuerpo principal.

int main(){
    int numeroPrueba;
    std::cin >> numeroPrueba;
    std::cout << es_primo(numeroPrueba) << std::endl;

    return 0;
}