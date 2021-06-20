
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

// Objeto 1
tCircuitos Circ1; 

// Passa as informações de R1, R2 e V1 do "objeto 1" ao construtor.
Circ1.insereValores(220,470,10); 

cout<<"Objeto 1"<<endl;

Circ1.Res_Serie();
Circ1.Res_Paralelo();
Circ1.Corrente_Serie();
Circ1.Corrente_Paralelo();
Circ1.Potencia_Serie();
Circ1.Potencia_Paralelo();

}