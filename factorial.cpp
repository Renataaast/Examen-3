/**
 * @file Factorial.cpp
 * @brief Programa que calcula el factorial de un número y simula un cajero automático.
 * 
 * Este programa permite al usuario calcular el factorial de un número o utilizar un cajero automático
 * para consultar y retirar saldo.
 */

#include <iostream>
using namespace std;

/**
 * @brief Calcula el factorial de un número dado.
 * 
 * Esta función calcula el factorial de un número de manera recursiva.
 * 
 * @param n Número entero del que se quiere calcular el factorial.
 * @return El factorial de n.
 */
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

/**
 * @brief Simula un cajero automático.
 * 
 * La función permite al usuario consultar el saldo, retirar efectivo, y salir del cajero.
 * El saldo inicial es de $20,000.
 */
void cajeroAutomatico() {
    int saldo = 20000;
    int opcion, retiro;

    do {
        cout << "\n--- Cajero Automático ---" << endl;
        cout << "1. Consultar Saldo" << endl;
        cout << "2. Retirar Efectivo" << endl;
        cout << "3. Salir del Cajero" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Saldo actual: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> retiro;
                if (retiro <= saldo) {
                    saldo -= retiro;
                    cout << "Retiro exitoso. Su saldo actual es: $" << saldo << endl;
                } else {
                    cout << "Saldo insuficiente." << endl;
                }
                break;
            case 3:
                cout << "Saliendo del Cajero..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);
}

/**
 * @brief Función principal del programa.
 * 
 * Muestra un menú principal donde el usuario puede elegir entre calcular un factorial, usar el cajero automático o salir del programa.
 * 
 * @return 0 si el programa finaliza correctamente.
 */
int main() {
    int opcion, numero;
    
    do {
        cout << "\n--- Menú Principal ---" << endl;
        cout << "1. Calcular Factorial" << endl;
        cout << "2. Usar Cajero Automático" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese un número para calcular su factorial: ";
                cin >> numero;
                cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
                break;
            case 2:
                cajeroAutomatico();
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}
