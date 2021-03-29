#include <stdio.h>
	
int main()
{
  int c, var, v, number, a1, x, y;
  float a2, z;
  
  printf("Entre com um valor inteiro: ");
  scanf("%d", &a1);

  printf("Entre com um valor decimal: ");
  scanf("%f", &a2);

  printf("\"Meus primeiros \nProgramas em C\"\n");

  printf("Esse\té\tum\tprograma\tem\tC\n");

	printf("Por favor digite três valores, um de cada vez seguidos de enter!\n");
  scanf("%d %d %f", &x, &y, &z);
  double resultado = x * y * z;
  printf("%lf", resultado);

	return 0;
}
