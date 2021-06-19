
/*Desafio 2) Circuitos elétricos:

O aluno deverá criar uma biblioteca para trabalhar com circuitos elétricos resistivos. Ela deverá ser composta por uma estrutura, a qual será dado o nome de “tCircuito”, e terá a forma de um circuito elétrico com 2 resistências e uma fonte de tensão (valor de R1, valor de R2 e Valor da fonte V1).

A sua biblioteca deverá ter funções que executem as seguintes operações: cálculo das resistências em série, cálculo das resistências em paralelo, cálculo da corrente total do circuito e cálculo da potência associada à fonte de tensão.*/


#include <iostream>

using namespace std;

struct tCircuitos{
 float R1;
 float R2;
 float V1;
};

int main() {

tCircuitos R1;
cout<<"Entre vom o valor de R1:" << endl;
cin>>R1.R1; 
cout<<R1.R1;


}