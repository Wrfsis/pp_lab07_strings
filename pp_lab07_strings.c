#include <stdio.h>
#include <stdlib.h>
#include <string.h>




/*
9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome parapercorrer uma distância de 1.000 quilômetros.
*/



int main()
{
	int nvet=2, i=0, consumo[nvet][20];
	float , maiseco;
	char modelo[nvet][20], litros[nvet][20], modeloeco;
	
	printf("\n");
	
	
	for(i=0; i<nvet; i++)
	{
		printf("Digite o modelo do carro %d: ", i+1);
		scanf("%s", modelo[i]);
		printf("Digite o consumo do carro (km/l) %d: ", i+1);
		scanf("%f", &consumo[i]);
	}

	printf("\n");

	for(i=0; i<nvet; i++)
	{
		printf("Modelo: %s----Consumo: %km/l\n", modelo[i], consumo[i]);
	}
		
		
		
		
	printf("\n");
	return 0;
}




/*
8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
*/
/*
int main()
{
	int i=0, tam, nvet=50;
	char str[nvet];
	char L1;
	char L2;

	// entrada de dados
	printf("\nDigite uma frase: ");
	fgets(str, nvet, stdin);
	printf("Digite uma letra que sera substituida: ");
	scanf("%c", &L1);
	printf("Digite uma letra para substituir: ");
	scanf(" %c", &L2);
	tam=strlen(str);
	
	// procura a letra e substitui
	for (i=0;i<tam;i++)
	{
		if (str[i]==L1)
		{
			str[i]=L2;
		}
	}
	
	//escreve a nova frase
	printf ("\nA nova frase e: %s\n", str);
	return 0;
}
*/


/*
7. Leia um vetor contendo letras de uma frase inclusive os espaços em 8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.
*/
/*
int main()
{
    int i=0,c=0, nvet=50;
    char str[nvet],str2[nvet];

	printf("\n");
	
	//leitura da palavra
	printf("Digite uma frase: ");
	fgets(str, nvet, stdin);
	
	printf("\nA frase digitada foi: ");
	printf("%s\n", str);
	
	//retirando os espaços
	for(i=0;i<nvet;i++)
	{
		if(str[i]=='\0')break;
		if(str[i]==' ')continue;
		str2[c]=str[i];
		c++;
	}

	printf("A frase digitada sem espaços fica: ");
	printf("%s\n",str2);

	return 0;
}
*/


/*
6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia
32 dos caracteres cujo código ASCII está entre 97 e 122.
*/
/*
int main()
{
	int i=0, nvet=20;
	char str[nvet];
	
	printf("\n");
	//leitura da palavra
	printf("Digite uma palavra: ");
	fgets(str, nvet, stdin);
	
	printf("\nA palavra digitada foi: %s", str);
	
	//identificando as minusculas
	for(i=0; i<nvet; i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}	
	}
	
	//resultado
	printf("Convertida em maiuscula ficou: %s\n", str);
	
	return 0;
	
}
*/


/*
5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
*/
/*
int main()
{
	int i=0, nvet=20;
	char str[nvet];
	
	printf("\n");
	//leitura da palavra
	printf("Digite uma palavra: ");
	fgets(str, nvet, stdin);
	
	printf("\nA palavra digitada foi: %s", str);
	
	//identificando as maiusculas
	for(i=0; i<nvet; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}	
	}
	//resultado
	printf("Convertida em minuscula ficou: %s\n", str);
	
	return 0;
	
}
*/


/*
4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere.
*/
/*
int main()
{
	int i=0, nvet=20, c=0;
	char str[nvet], vari=0;
	
	printf("\n");
	//leitura da palavra e letra
	printf("Digite uma palavra: ");
	fgets(str, nvet, stdin);
	printf("Digite uma letra para substituir a vogal: ");
	scanf("%c", &vari);
	
	//conta as vogais e imprime a palavra digitada	
	for (i = 0; str[i]!='\0'; ++i)
	{
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') 
		{
    			c++;
		}
	}
	
	printf("A palavra %s possui %d vogais.\n",str,c);//não sei porque cargas d'agua esta dividindo a frase no print
	
	//substitui a vogal pela letra digitada
	for (int i = 0; str[i]!='\0'; ++i)
	{
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') 
		{
    			str[i] = vari;
    			c++;
		}
	}
	printf("\n");	
	
	//resultado
	printf("A nova palavra gerada é: %s\n", str);
	
	return 0;	
}
*/


/*
3. Faça um programa que receba uma palavra e a imprima de trás-para-frente.
*/
/*
int main()
{
	int i, nvet=20;
	char str[nvet];
	
	printf("\n");
	//leitura da palavra
	printf("Digite uma palavra: ");
	fgets(str, nvet, stdin);
	
	//inverte e mostra
	for(i=strlen(str)-1; i>=0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n\n");


	return 0;
}
*/

/*
2. Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo:
“0011001” -> 3
*/
/*
int main() 
{
    int i=0, c=0, nvet=20;
    char str[nvet], n = '1';

    printf("\nDigite a string: ");
    fgets(str, nvet, stdin);

    for (i=0; str[i]!='\0'; ++i) {
        if (n == str[i])
            c++;
    }

    printf("Quantidade de %c = %d\n\n", n, c);
    
    return 0;
}
*/

/*
1. Faça um programa que leia uma string e a imprima.
*/
/*
int main()
{
	int nvet=26;
	char str[nvet];
	
	printf("Digite uma frase curta 25 (caracteres): ");
	fgets(str, nvet, stdin);
	
	printf("\nA frase digitada foi:\n");
	printf("%s", str);
	
	return 0;
}
*/

