#include <iostream>
using namespace std;

int main() {
    // 3) Puntero a float con nullptr
    float* p = nullptr;

    // 3.1) Pedir memoria dinámica y ponerle 7.77
    p = new float;
    *p = 7.77;
    cout << "El valor en p es: " << *p << endl;

    // 3.2) Variable normal
    float x = 6.66;

    // 3.3) Hacer que p apunte a x
    p = &x;

    // 3.4) Mensaje de advertencia
    cout << "Cuidado, acabas de causar un memory leak!" << endl;

    // 3.5) Explicación
    cout << "Porque reasignaste el puntero sin borrar la memoria anterior con delete." << endl;
    cout << "Para evitarlo, usa delete antes de cambiar a donde apunta el puntero." << endl;

    // 3.6) Volver a pedir memoria y ponerle 1984
    p = new float;
    *p = 1984;

    // 3.7) Nuevo puntero que apunta a lo mismo
    float* q = p;

    cout << "El valor en p es: " << *p << endl;

    // 3.8) Borrar memoria y poner nullptr
    delete p;
    p = nullptr;

    // 3.9) Revisar si es nullptr
    if (p == nullptr) {
        cout << "p es nullptr" << endl;
    }

    // 3.10) Revisar si es NULL
    if (p == NULL) {
        cout << "p es NULL" << endl;
    }

    // 3.11) Revisar el otro puntero
    if (q == nullptr || q == NULL) {
        cout << "q es nullptr o NULL" << endl;
    } else {
        cout << "q no es nullptr ni NULL, pero apunta a memoria borrada. Cuidado!" << endl;
    }

    return 0;
}
