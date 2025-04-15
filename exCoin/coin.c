#include <stdio.h>

int main(){
    float valor;
    int moedas = 0;

    // Pergunta o valor
    printf("Digite o valor: ");
    scanf("%f", &valor); //Aciona a leitura do valor que é float por isso o %f

    //Converte o valor para centavos com arrendontamento
    int centavos = (int)(valor * 100 + 0.5);

    //Calcula o número de moedas de 25
    moedas += centavos / 25; // é a mesma coisa que:
    //moedas = moedas + (centavos / 25);
    centavos %= 25;
    // "%" calcula o resto da divisão e armazena em centavos

    moedas += centavos / 10;
    centavos %= 10;

    moedas += centavos / 1;
    centavos %= 1;

    printf("Total de moedas: ¨%d\n", moedas); // %d é para inteiros
 
    
}