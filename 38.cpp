/*
Escreva um programa que leia um número inteiro e informe se o número é primo ou não
 */
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int num;
    cin >> num;

    if (num %2==0){
        printf("Primo");
    }else{
        printf("Nao e primo");
    }
}