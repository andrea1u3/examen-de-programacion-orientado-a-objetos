#include <iostream>
using namespace std;

struct VectorDeValores {
    float* datos; 
    int tam;     

    
    VectorDeValores() {
        tam = 2;
        datos = new float[tam];
        for (int i = 0; i < tam; i++) {
            datos[i] = 0.0f; 
        }
    }

   
    VectorDeValores(const float arreglo[], int tamaño) {
        tam = tamaño;
        datos = new float[tam];
        for (int i = 0; i < tam; i++) {
            datos[i] = arreglo[i]; 
        }
    }

    
    ~VectorDeValores() {
        delete[] datos; 
        cout << "Liberé " << tam << " elementos" << endl;
    }
};

int main() {
   
    float a[] = {1.5, 2.5, 3.5};
    VectorDeValores v1(a, 3);

    
    VectorDeValores v2;

    return 0; 
}

