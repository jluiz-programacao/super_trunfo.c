#include <stdio.h>

int main (){

// declarando variáveis
char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueminimoA = 500;
unsigned int estoqueminimoB = 2500;

double valortotalA;
double valortotalB;

int resultadoA, resultadoB;

// exibir informações dos produtos
printf("produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

// Comparação com o valor mínimo de estoque

resultadoA = estoqueA > estoqueminimoA;
resultadoB = estoqueB > estoqueminimoB;

printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

// Comparação dos valores totais dos produtos 

printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n",
                            estoqueA * valorA,
                            estoqueB * valorB,
                            (estoqueA * valorA) > (estoqueB * valorB));                       

printf("\n");

}