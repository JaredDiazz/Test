#include <iostream>
using namespace std;

double areaCuadrado(double lado) {
    return lado * lado;
}

double volumenCilindro(double radio, double altura) {
    const double PI = 3.1416;
    return PI * radio * radio * altura;
}

double volumeneEsfera(double radio) {
    const double PI = 3.1416;
    return (4.0 / 3.0) * PI * radio * radio * radio;
}

int main() {
    int opcion;
    do {     
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Area de un cuadrado" << endl;
        cout << "2. Volumen de un cilindro" << endl;
        cout << "3. Volumen de una esfera" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            double area = areaCuadrado(lado);
            cout << "El area del cuadrado es: " << area << endl;
            break;
        }
        case 2: {
            double radio, altura;
            cout << "Ingrese el radio del cilindro: ";
            cin >> radio;
            cout << "Ingrese la altura del cilindro: ";
            cin >> altura;
            double volumenC = volumenCilindro(radio, altura);
            cout << "El volumen del cilindro es: " << volumenC << endl;
            break;
        }
        case 3: {
            double radio;
            cout << "Ingrese el radio de la esfera: ";
            cin >> radio;
            double volumenE = volumeneEsfera(radio);
            cout << "El volumen de la esfera es: " << volumenE << endl;
            break;
        }
        case 4: {
            cout << "Saliendo del programa." << endl;
            break;
        }
        default:
            cout << "Opcion no valida." << endl;
    }
    } while (opcion != 4);

    return 0;
}