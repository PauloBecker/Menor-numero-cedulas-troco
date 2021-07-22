/*
 * File:   main.c
 * Author: paulobecker
 *
 * Created on 22 de julho de 2021, 16:10
 * 
 *Exercício:
 * Considerando a existência de notas(cédulas) nos valores R$ 100, R$ 50,R$ 20,
 * R$ 10, R$ 5, R$ 2, e R$ 1, escreva um algoritmo que capture um valor inteiro
 * em reais (R$) e determine o menor número de notas para se obter o montante
 * fornecido. O seu algoritmo deve exibir o número de notas para cada um dos 
 * valores de nota existentes.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    
    int valor;
    int resto;
    int q100;
    int q50;
    int q20;
    int q10;
    int q5;
    int q2;
    int q1;
    
    printf("Insira o valor: \n");
    scanf("%d" , &valor);
 
    q100 = valor/100;
    resto = valor % 100;
    q50 = resto/50;
    resto = resto % 50;
    q20 = resto / 20;
    resto = resto % 20;
    q10 = resto / 10;
    resto = resto % 10;
    q5 = resto / 5;
    resto = resto % 5;
    q2 = resto / 2;
    resto = resto % 2;
    q1 = resto;
    
    printf("====== Troco ======\n");
    printf("%d Cedula x 100 \n %d Cedula x 50\n %d Cedula x 20\n %d Cedula x 10\n %d Cedula x 5\n %d Cedula x 2\n %d Cedula x 1\n"
            , q100,q50,q20,q10,q5,q2,q1);
    
    return 0;
}

