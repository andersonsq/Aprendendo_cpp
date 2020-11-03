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
else if (dinheiro >10)
    {
    printf("dinheiro suficiente para ir ao cinema \n");
    }
else if (dinheiro == 10)
    {
    std::cout << "dinheiro exatamente igual a "<<dinheiro <<std::endl;
    }

while ((dinheiro %2 == 0) &&  (dinheiro < 20))
    {
    cout << "Teu dinheiro é par e menor que 20" << endl;
    break;
    }

    return 0;
}