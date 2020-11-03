#include <stdio.h>
#include <iostream>

#include <stdlib.h>
#include <locale.h>

using namespace std; 

int main(){ 
    
    setlocale(LC_ALL, "Portuguese");

int idade, idade2;

std::cout<<"insira a sua idade: "<<std::endl;
std::cin >> idade;
cout << "Sua idade é: "<< idade <<std::endl;

cout << "Qual a idade do seu pai? "<<'\n';
cin >> idade2;
std::cout <<"A idade do seu pai é: "<<idade2 << std::endl;

float soma = idade + idade2;
float subtracao = idade - idade2;
float multiplicacao = idade *idade2;
float divisao = idade2 / idade;

printf("A soma das suas idades é: %.2f \n", soma);
printf("A subtração das suas idades é: %.2f \n", subtracao);
printf("A multiplicação das suas idades é: %.2f \n", multiplicacao);
printf("A divisão das suas idades é: %.2f \n", divisao);

string seu_nome, nome_do_pai;

std::cout << "Por último mas não menos importante, qual o seu nome? " << endl;
std::cin >> seu_nome;
cout << "Qual o nome do teu pai? "<< endl;
cin >> nome_do_pai;

std::cout << "Você se chama "<< seu_nome << " e seu pai se chama "<< nome_do_pai << '\n';

return 0;
}