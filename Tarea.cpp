#include <iostream>

using namespace std;

//tareas
void tarea1();

//ejercicios de tarea 1
void ejercicio1tarea1();
void ejercicio2tarea1();
void ejercicio3tarea1();
void ejercicio4tarea1();
void ejercicio5tarea1();

//funciones
int rangoDeNumeros();


int main() {
    int opcion;
    cout << "Numero de la tarea: " << endl;
    cin >> opcion;
    switch (opcion) {
    case 1:
        tarea1();
        break;
    default:
        cout << "Tarea inexistente" << endl;
        break;
    }
    return 0;
}

void tarea1() {
    int ejercicio = 0;

    do {
        cout << "Numero de ejercicio: " << endl;
        cin >> ejercicio;
        switch (ejercicio) {
        case 1:
            ejercicio1tarea1();
            break;
        case 2:
            ejercicio2tarea1();
            break;
        case 3:
            ejercicio3tarea1();
            break;
        case 4:
            ejercicio4tarea1();
            break;
        case 5:
            ejercicio5tarea1();
            break;
        default:
            cout << "Ejercicio inexistente" << endl;
            break;
        }
    } while (ejercicio >= 1 && ejercicio <= 5);
}

void ejercicio1tarea1() {
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    if (numero > 0) {
        cout << "El numero es positivo" << endl;
    }
    else if (numero < 0) {
        cout << "El numero es negativo" << endl;
    }
    else {
        cout << "El numero es cero" << endl;
    }
}

void ejercicio2tarea1() {
    int numero, suma = 0;
    numero = rangoDeNumeros();
    suma += numero % 10;
    numero /= 10;
    suma += numero;
    cout << "La suma de los digitos es: " << suma << endl;
}

void ejercicio3tarea1() {
    int numero, digito1, digito2;
    numero = rangoDeNumeros();
    digito1 = numero % 10;
    numero /= 10;
    digito2 = numero;
    if (digito1 % 2 == 0) {
        cout << "El primer digito es par" << endl;
    }
    else if (digito2 % 2 == 0) {
        cout << "El segundo digito es par" << endl;
    }
    else {
        cout << "Ninguno de los digitos es par" << endl;
    }
}

void ejercicio4tarea1() {
    int a, b, c;
    cout << "Ingrese 3 numeros: " << endl;
    cin >> a >> b >> c;
    int may = a;
    if (b > may) {
        may = b;
    }
    if (c > may) {
        may = c;
    }
    cout << "El numero maximo es" << may << endl;
}

void ejercicio5tarea1() {
    int min = 0, max = 0;
    cout << "Limite minimo: " << endl;
    cin >> min;
    cout << "Limite maximo: " << endl;
    cin >> max;


    if (min % 2 != 0) {
        min++;
    }
    for (int i = min; i <= max; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

int rangoDeNumeros() {
    int numero = 0;

    do {
        cout << "Ingrese un numero de 2 digitos: " << endl;
        cin >> numero;
    } while (numero < 10 || numero > 99);

    return numero;
}