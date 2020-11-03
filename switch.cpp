#include <stdio.h>
#include <iostream>

#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_ALL, "Portuguese");

int caso;

printf("Escolha um número de 1 à 5 \n");
scanf("%d", &caso);

while (caso > 5)
{
std::cout << "Número inválido, escolha um número de 1 à 5" << endl;
std::cin >> caso;
}

switch (caso)
{
case 1:
    cout << "Você escolheu o número: "<<caso << endl;
    break;
case 2:
    cout << "Você escolheu o número: "<<caso << endl;
    break;
case 3:
    cout << "Você escolheu o número: "<<caso << endl;
    break;
case 4:
    cout << "Você escolheu o número: "<<caso << endl;
    break;
case 5:
    cout << "Você escolheu o número: "<<caso << endl;
    break;
}

return 0;
}