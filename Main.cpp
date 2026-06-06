#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int opcion;
    char tomoAgua;
    float peso;

    cout << "---------Bienvenido al programa del Grupo 7----------\n";

    cout << "Cual es tu nombre? ";
    getline(cin, nombre);

    cout << "\nHola " << nombre << ", ya tomaste la cantidad de agua necesaria hoy? (si o no): ";
    cin >> tomoAgua;

    if (tomoAgua == 'si' || tomoAgua == 'Si'|| tomoAgua == 'sI' || tomoAgua == 'SI'|| tomoAgua == 'S'|| tomoAgua == 's') {
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
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "\nMucho gusto, " << nombre << "!\n";
                break;

            case 2:
                cout << "\n--- Colaboradores del Grupo 7 ---\n";
                cout << " Jesus Perez C.I: 30.754.920\n";
                cout << " Luis\n";
                cout << " Carlos\n";
                cout << " Maria\n";
                cout << " Jesús\n";
                cout << " Jesús\n";
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