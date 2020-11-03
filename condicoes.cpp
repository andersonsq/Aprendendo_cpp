#include <stdio.h>
#include <iostream>

#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_ALL, "Portuguese");

int dinheiro;

printf("Quanto dinheiro você tem na carteira? \n");
scanf("%d", &dinheiro);

if (dinheiro < 10)
    {
    cout << "dinheiro insuficiente para ir ao cinema " << endl;
    }   
else
    {
    printf("dinheiro suficiente para ir ao cinema \n");
    }
    return 0;
}