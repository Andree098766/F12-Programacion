#include <iostream>
#include <vector>
#include <string>
using namespace std;

////// ORDENAMIENTO BURBUJA. ///
void burbuja(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            }
        }
    } 
}

////// ORDENAMIENTO POR SELECCIÓN. ///
void seleccion(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        int min_idx = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            std::swap(arr[i], arr[min_idx]);
        }
    }

}

////// ORDENAMIENTO POR FUSIÓN. ///
vector<int> mezclar(const vector<int>& izq, const vector<int>& der){
    std::vector<int> ordered;
    int i = 0;
    int j = 0;

    while(i < izq.size() && j < der.size()){
        if(izq[i] < der[j]){
            ordered.push_back(izq[i]);
            i++;
        }else{
            ordered.push_back(der[j]);
            j++;
        }
    }

    while(i < izq.size()){
        ordered.push_back(izq[i]);
        i++;
    }

    while(j < der.size()){
        ordered.push_back(der[j]);
        j++;
    }

    return ordered;

}

vector<int> mergesort(const vector<int>& arr){
    if(arr.size() <= 1){
        return arr;
    }

    int center = arr.size()/2;
    std::vector<int> izq(arr.begin(), arr.begin() + center);
    std::vector<int> der(arr.begin() + center, arr.end());

    izq = mergesort(izq);
    der = mergesort(der);
    return mezclar(izq, der);
}


////// FUNCIÓN MAIN. ////// 
int main(){
    string algoritmo;
    int n;
    cin >> algoritmo >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if(algoritmo == "burbuja"){
        burbuja(arr, n);
    }else if(algoritmo == "seleccion"){
        seleccion(arr, n);
    }else if(algoritmo == "mergesort"){
        arr = mergesort(arr);
    }
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
}