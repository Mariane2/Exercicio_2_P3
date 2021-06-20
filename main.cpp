
/*Desafio 2) Circuitos elétricos:

O aluno deverá criar uma biblioteca para trabalhar com circuitos elétricos resistivos. Ela deverá ser composta por uma estrutura, a qual será dado o nome de “tCircuito”, e terá a forma de um circuito elétrico com 2 resistências e uma fonte de tensão (valor de R1, valor de R2 e Valor da fonte V1).
A sua biblioteca deverá ter funções que executem as seguintes operações: cálculo das resistências em série, cálculo das resistências em paralelo, cálculo da corrente total do circuito e cálculo da potência associada à fonte de tensão.
Autor (a): Mariane Dutra
*/

#include <iostream>
#include "calcula.h"

using namespace std;
using namespace calc;

int main() {

float r1;
float r2;
float v1;

cout <<"********** CIRCUIRTO **********";
cout<<endl;

cout<<"Insira o valor de R1: ";
cin>>r1;

cout<<"Insira o valor de R2: ";
cin>>r2;

cout<<"Insira o valor de V1: ";
cin>>v1;
cout<<endl;

tCircuitos Circuito;
Circuito.insereValores(r1,r2,v1);

cout<<"Calculos de resistência, corrente e potência: ";
cout<<endl;

Circuito.Calculo();

}






