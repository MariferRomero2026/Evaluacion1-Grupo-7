#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <limits>
using namespace std;

int main() {
    string nombre;
    int opcion = 0;
    string tomoAgua;
    float peso;

    cout << "---------Bienvenido al programa del Grupo 7----------\n";

    cout << "Cual es tu nombre? ";
    getline(cin, nombre);

    cout << "\nHola " << nombre << ", ya tomaste la cantidad de agua necesaria hoy? (si o no): ";
    cin >> tomoAgua;
    for (char &c : tomoAgua) c = tolower(static_cast<unsigned char>(c));

    if (tomoAgua == "si" || tomoAgua == "s") {
        cout << "\nExcelente! Me alegra que este hidratado.\n";
    } else {
        cout << "\nNo se preocupe, aqui tienes la formula recomendada:\n";
        cout << "Debes tomar 35 ml de agua por cada kilogramo de peso.\n";
        cout << "Ingresa tu peso en kg: ";
        cin >> peso;

        float cantidad = peso * 0.035;
        cout << "Cantidad recomendada al dia: " << cantidad << " litros de agua.\n";
    }

    do {
        cout << "\n----------- MENU ------------\n";
        cout << "1. Saludar\n";
        cout << "2. Colaboradores del programa\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opcion: ";
        if (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida.\n";
            opcion = 0;
        }

        switch(opcion) {
            case 1:
                cout << "\nMucho gusto, " << nombre << "!\n";
                break;

            case 2:
                cout << "\n--- Colaboradores del Grupo 7 ---\n";
                cout << " Jesus Perez C.I: 30.754.920\n";
                cout << " Jose Rodriguez C.I: 30.165.636\n";
                cout << " Maria Romero C.I: 31.294.139\n";
                cout << " Eslaimer Peña C.I: 31.546.912\n";
                cout << " Diego Benedetti C.I: 30.956.790\n";
                cout << " Oswald Martinez C.I: 30.659.042\n";
                
                break;

            case 3:
                cout << "\nSaliendo del programa...\n";
                break;

            default:
                cout << "Opcion no valida.\n";
        }

    } while(opcion != 3);

    return 0;
}