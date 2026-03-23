// Librerías.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Para mínimos y máximos.
using namespace std;

// Función de busqueda.
int busqueda_dos_en_dos(const vector<int>& lista, int n, int objetivo){
    int indice = 0;

    // Avanzamos de dos en dos.
    while(indice < n && lista[indice] < objetivo){
        indice = indice + 2;
    } 

    // Revisamos 2 posiciones a partir de i.
    for (int j = std::max(0, indice-1); j <= std::min(indice+1, n-1); j++) {
        if (lista[j] == objetivo) {
            return j; // Retorna el índice del objetivo.
        }
    }
    return -1; // Si no lo encontramos.
}

// Cuerpo principal.

int main(){
    std::vector<int> listaPrueba;
    int nPrueba;
    int objetivoPrueba;

    std::cin >> nPrueba;

    // Cargamos la lista con el autograder.
    for (int i = 0; i < nPrueba; i++) {
        int elemento;
        std::cin >> elemento;
        listaPrueba.push_back(elemento);
    }

    std::cin >> objetivoPrueba;

    std::cout << busqueda_dos_en_dos(listaPrueba, nPrueba, objetivoPrueba) << std::endl;
    return 0;
}