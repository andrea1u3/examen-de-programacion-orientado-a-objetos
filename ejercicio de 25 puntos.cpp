#include <iostream>
using namespace std;

int main() {
    
    float* p = nullptr;

    
    p = new float;
    *p = 7.77;
    cout << "El valor en p es: " << *p << endl;

   
    float x = 6.66;

    
    p = &x;

    
    cout << "Cuidado, acabas de causar un memory leak!" << endl;

    
    cout << "Porque reasignaste el puntero sin borrar la memoria anterior con delete." << endl;
    cout << "Para evitarlo, usa delete antes de cambiar a donde apunta el puntero." << endl;

    
    p = new float;
    *p = 1984;

   
    float* q = p;

    cout << "El valor en p es: " << *p << endl;

    
    delete p;
    p = nullptr;

    
    if (p == nullptr) {
        cout << "p es nullptr" << endl;
    }

    
    if (p == NULL) {
        cout << "p es NULL" << endl;
    }

   
    if (q == nullptr || q == NULL) {
        cout << "q es nullptr o NULL" << endl;
    } else {
        cout << "q no es nullptr ni NULL, pero apunta a memoria borrada. Cuidado!" << endl;
    }

    return 0;
}
