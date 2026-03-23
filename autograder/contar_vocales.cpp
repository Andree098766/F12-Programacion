// Librerías.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Función que cuenta las vocales.
int contar_vocales(const string& oracion){
    int contador;

    for (char c: oracion){
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            contador = contador + 1;
        }
    }

    return contador;
}

// Cuerpo principal.

int main(){
    string oracionPrueba;
    std::getline(std::cin, oracionPrueba);
    std::cout << contar_vocales(oracionPrueba) << std::endl;

    return 0;
}