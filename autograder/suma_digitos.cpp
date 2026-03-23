// Librerías.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Función que suma los dítigos.
int sumar_digitos(const string& numero){ // Pedimos el valor el string, para después usar un ciclo que lo divida en sus caracteres y vaya sumando. 
    int suma;

    for(char n : numero){
        suma = suma + n - '0'; // Aquí cada dígito del número se suma. El `` -'0' ´´ funciona según una rápida investigación en internet.
    }

    return suma;
}


// Cuerpo principal.

int main(){
    string numeroPrueba;
    std::cin >> numeroPrueba;
    std::cout << sumar_digitos(numeroPrueba) << std::endl;

    return 0;
}