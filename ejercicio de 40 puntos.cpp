#include <iostream>
using namespace std;

class Rect {
public:
    float x, y, alto, ancho;

    // 2.1 Constructor por defecto
    Rect() {
        x = y = alto = ancho = 0;
    }

    // 2.2 Constructor con 4 parámetros
    Rect(float _x, float _y, float _alto, float _ancho) {
        x = _x;
        y = _y;
        alto = _alto;
        ancho = _ancho;
    }

    // 2.3 Constructor con 2 parámetros (alto y ancho)
    Rect(float _alto, float _ancho) {
        x = 0;
        y = 0;
        alto = _alto;
        ancho = _ancho;
    }

    // 2.4 Método MostrarRect
    bool MostrarRect(const Rect &r, float &xFin, float &yFin) {
        if (r.x < 0 || r.y < 0 || r.alto < 0 || r.ancho < 0) {
            cout << "Rect inválido (valores negativos)" << endl;
            return false;
        }
        xFin = r.x + r.ancho;
        yFin = r.y + r.alto;

        cout << "Inicio: (" << r.x << ", " << r.y << ")" << endl;
        cout << "Final: (" << xFin << ", " << yFin << ")" << endl;
        return true;
    }

    // 2.5 Método CheckOverlap
    bool CheckOverlap(const Rect &r1, const Rect &r2) {
        if (r1.x + r1.ancho < r2.x || r1.x > r2.x + r2.ancho ||
            r1.y + r1.alto < r2.y || r1.y > r2.y + r2.alto) {
            return false;
        }
        return true;
    }
};

int main() {
    Rect r1(0, 0, 5, 5);
    Rect r2(6, 6, 5, 5);
    Rect r3(2, 2, 2, 2);
    Rect r4(1, 1, 7.5, 2);

    Rect gestor; // solo para usar sus métodos

    float xFin, yFin;
    gestor.MostrarRect(r1, xFin, yFin);
    cout << endl;

    cout << "r1 y r2 se traslapan? " << (gestor.CheckOverlap(r1, r2) ? "Sí" : "No") << endl;
    cout << "r1 y r3 se traslapan? " << (gestor.CheckOverlap(r1, r3) ? "Sí" : "No") << endl;
    cout << "r1 y r4 se traslapan? " << (gestor.CheckOverlap(r1, r4) ? "Sí" : "No") << endl;

    return 0;
}
