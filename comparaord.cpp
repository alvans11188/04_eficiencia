/*
Comparacion de 2 algoritmos 
uno tiene que ser logaritmico y otro en teoria lineal
por ejemplo
BUSQUEDA
logaritmico binario
lineal secuencial
*/
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <sys/time.h>

using namespace std;

long obtenerTiempo(){
    struct timeval inicio; 
    gettimeofday(&inicio, NULL);
    return inicio.tv_sec * 1000000 + inicio.tv_usec;
}

int main(){
    long inicio = obtenerTiempo();
    double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
    int arr[] = {5, 7, 3, 6, 1, 9, 8, 4, 2};
    int sizeArray = sizeof(arr) / sizeof(int);

    sort(arr, arr + sizeArray);
    
    for(int i = 0; i < sizeArray; i++){
        cout << arr[i] << ' ';
    }

    long final = obtenerTiempo();
    tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    
    cout << endl << endl;
    cout << "El tiempo de ejecucion en microsegundos es: " << tiempoEnMicrosegundos << endl << endl;
    cout << "El tiempo de ejecucion en segundos es: " << tiempoEnSegundos << endl << endl;

    return 0;
}

