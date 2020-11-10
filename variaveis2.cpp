#include <iostream>
#include <stdio.h>

#include <stdlib.h>
#include <locale.h>

#define TAM 4

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string nome;
    float nota [TAM];

    cout << "Digite seu nome: " << nome << endl;
    cin >> nome;

    for (int i = 0; i < TAM; i++)
    {   
        printf("digite a sua %d nota: ", i+1);
        scanf("%f", &nota[i]);
    }

    for (int i = 0; i < TAM; i++)
    {        
        if (nota[0] > nota[i])
        {
            nota[0] = nota[i];
        }
    }       

    printf("Sua menor nota é: %f\n", nota[0]);            

   float media = (nota [0]+nota [1]+nota [2]+nota [3]) / TAM;
   printf("Média = %.2f\n", media);

   float rec;

      if (media <= 5)
    {
       std::cout << "Sua média foi igual à " << media << ", você está reprovado" << std::endl;
       
    }
   else if (media >5 && media <= 6)
    {
       printf("Você pode fazer recuperação \n");
       cout << "Digite a nota da sua recuperaçã. Ela será substituida pela menor nota: " << endl;
       cin >> rec;
       nota[0] = rec;
       media = (rec+nota[1]+nota[2]+nota[3]) / TAM;
    }

printf("Média = %.2f\n", media);

    if (media > 6)
    {
       cout << "Parabéns " << nome << " ,você esta aprovado com uma média =" << media << endl;
    }
    else
    {
        std::cout << nome << "Você está reprovado !!!"; 
    }             

    return 0;
}
