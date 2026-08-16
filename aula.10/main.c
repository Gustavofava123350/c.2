#include <stdio.h>


int main() {

int vetor[5] = {1, 2, 3, 4, 5};

int *ponteiro = vetor;


for (int i = 0; i < 5; i++) {

*(ponteiro + i) += 10;

}


printf("Elementos do vetor após adicionar 10:\n");

for (int i = 0; i < 5; i++) {

printf("%d ", vetor[i]);

}

printf("\n");


return 0;

}
