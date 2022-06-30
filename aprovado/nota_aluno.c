#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// a nota deve ser digitada com numeros inteiros

int main(){
	
	int n1, n2, nfim;
	
	printf("Digite a primeira nota: ", n1);
	scanf("%d", &n1);
	
	printf("Digite a segunda nota: ", n1);
	scanf("%d", &n2);
	
	nfim = n1+n2;
	
	if (nfim >= 60){
		printf("Nota: %d \nAPROVADO", nfim);
	}else{
		printf("Nota: %d \nREPROVADO", nfim);
	}
}
