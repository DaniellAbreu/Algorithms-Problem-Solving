#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Calculadora de Cinemática para Robô Diferencial.

int main() {
    // Defining Variables:
    float linearVelocity;        // Unit: [m/s].
    float angularVelocity;       // Unit: [rad/s].
    float distanceBetweenWheels; // Unit: [m].

    // User Requisition:
    cout << "Digite a Velocidade Linear Desejada [m/s]: ";
    cin >> linearVelocity;

    cout << "Digite a Velocidade Angular Desejada [rad/s]: ";
    cin >> angularVelocity;

    cout << "Digite a Distância Entre Rodas [m]: ";
    cin >> distanceBetweenWheels;
    
    /*
    printf("Digite a Velocidade Linear Desejada: ");
    scanf("%f", &linearVelocity);

    printf("Digite a Velocidade Angular Desejada: ");
    scanf("%f", &angularVelocity);

    printf("Digite a Distância Entre Rodas: ");
    scanf("%f", &distanceBetweenWheels);
    */

    // Cinematic Calculator:
    float rightLinearVelocity = linearVelocity + (angularVelocity * distanceBetweenWheels * 0.5);
    float leftLinearVelocity = linearVelocity - (angularVelocity * distanceBetweenWheels * 0.5);

    // Printing Results:
    cout << fixed << setprecision(3) << "Velocidade Linear: " << linearVelocity;
    cout << fixed << setprecision(3) << " | Velocidade Angular: " << angularVelocity;
    cout << fixed << setprecision(3) << " | Distância Entre Rodas: " << distanceBetweenWheels;
    cout << fixed << setprecision(3) << " | Velocidade da Roda Direita: " << rightLinearVelocity;
    cout << fixed << setprecision(3) << " | Velocidade da Roda Esquerda: " << leftLinearVelocity << endl;

    // printf("Velocidade Linear: %.3f | Velocidade Angular: %.3f | Distância Entre Rodas: %.3f | Velocidade da Roda Direita: %.3f | Velocidade da Roda Esquerda: %.3f", linearVelocity, angularVelocity, distanceBetweenWheels, rightLinearVelocity, leftLinearVelocity);

    return 0;
}