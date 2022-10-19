#include <iostream>
using namespace std;

void mainMenu() {
    cout<<"============================== INGRESA UNA OPCION ================================="<<endl;
    cout<<"    1. Calculadora"<<endl;
    cout<<"    2. Determinar si un numero es par o impar"<<endl;
    cout<<"    3. Convertidor de medidas"<<endl;
    cout<<"    4. Determinar palindromos"<<endl;
    cout<<"    5. Conversor numeros arabigos a romanos"<<endl;
    cout<<"    6. Conversor de enteros a letras"<<endl;
    cout<<"    7. Conversor de enteros con decimales a letras"<<endl;
    cout<<"    8. Generar tabla de multiplicar"<<endl;
    cout<<"    9. Generar lista de las tablas de multiplicar (1 - 10)"<<endl;
    cout<<"    10. Representacion grafica de una multiplicacion con dos digitos "<<endl;
    cout<<"    11. Conversor de numeros decimals a binario"<<endl;
    cout<<"    12. Conversor de numeros decimales a hexadecimales"<<endl;
    cout<<"    13. Generador de figuras geometricas"<<endl;
    cout<<"    14. Mueve un punto por toda la pantalla"<<endl;
    cout<<"    15. Simular un cajero automatico"<<endl;
    cout<<"    16. Calcula la hipotenusa"<<endl;
    cout<<"==================================================================================="<<endl;
    cout<<"ingresa tu opcion: ";

}

void calculatorMenu() {
    cout<<"============================================================"<<endl;
    cout<<"     1. Sumar"<<endl;
    cout<<"     2. Restar"<<endl;
    cout<<"     3. Dividir"<<endl;
    cout<<"     4. Multiplicar"<<endl;
    cout<<"     5. regresar al menu principal"<<endl;
    cout<<"============================================================"<<endl;
    cout<<"ingresa tu opcion: ";

}

void measurementConverterMenu() {
    cout<<"============================================================"<<endl;
    cout<<"     1. kilometros -> millas"<<endl;
    cout<<"     2. millas -> kilometros"<<endl;
    cout<<"     3. metros -> pulgadas"<<endl;
    cout<<"     4. pulgadas -> metros"<<endl;
    cout<<"     5. libras -> kilos"<<endl;
    cout<<"     6. kilos -> libras"<<endl;
    cout<<"     0. regresar al menu principal"<<endl;
    cout<<"============================================================"<<endl;
    cout<<"ingresa tu opcion: ";
}

void figuresMenu() {
    cout<<"============================================================"<<endl;
    cout<<"     1. Ovalo"<<endl;
    cout<<"     2. Triangulo"<<endl;
    cout<<"     3. Cuadrado"<<endl;
    cout<<"     4. Traingulo lado izquierdo"<<endl;
    cout<<"     5. Rombo"<<endl;
    cout<<"     6. Trapezoide"<<endl;
    cout<<"     7. Paralelogramo"<<endl;
    cout<<"     8. Triangulo 2"<<endl;
    cout<<"     0. regresar al menu principal"<<endl;
    cout<<"============================================================"<<endl;
    cout<<"ingresa tu opcion: ";
}

void automaticCashDispenseMenu() {
    cout<<"============================================================"<<endl;
    cout<<"     1. Retirar dinero"<<endl;
    cout<<"     2. Ver saldo"<<endl;
    cout<<"     3. Ver historial de transacciones"<<endl;
    cout<<"============================================================"<<endl;
    cout<<"ingresa tu opcion: ";
}

void automaticCashDispenseSubMenu() {
    cout<<"============================================================"<<endl;
    cout<<"     1. Ingresar"<<endl;
    cout<<"     2. En caso de no tener un usuario. Crealo aqui"<<endl;
    cout<<"============================================================"<<endl;
    cout<<"ingresa tu opcion: ";
}