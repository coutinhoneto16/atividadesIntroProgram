/*
Escreva um programa que receba um nome completo e exiba apenas o sobrenome (último nome).
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomeCompleto;
    getline(cin, nomeCompleto); // Lê o nome completo com espaços

    string ultimoNome = "";
    int i = (int)nomeCompleto.length() - 1;

    // Percorre o nome de trás para frente até encontrar um espaço
    while (i >= 0 && nomeCompleto[i] != ' ') {
        ultimoNome = nomeCompleto[i] + ultimoNome; // Constrói o último nome
        i--;
    }

    // Exibe o último nome
    cout << "Sobrenome: " << ultimoNome << endl;

}