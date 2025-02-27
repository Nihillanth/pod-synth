# include <stdio.h>
/*
int main(void)
{
	float inch;
	float santi;
	printf("\n Input inches >>> ");
	scanf("%f", &inch);
	santi = inch * 2.54;
	printf("\nsanti = %f\n", santi);
	return 0;
}

int main(void)
{
	int num;
	num = 1;

	printf("I'm simple ");
	printf("computer\n");
	printf("My favourite digit is %d, be cause it's first.\n", num);

	return 0;
}
//
//
// Задача по нахождению факториала итеративно.
//
//
int main(void)
{
	int n = 5;
	int the_product = 1;
	while (n > 0) {
		the_product = the_product * n;
		n = n - 1;
	}
	return the_product;
}

*/
//
// Задача по нахожденю факториала рекурсивно.
//
//
int factorial(int n){
	if (n == 0 || n == 1){
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}

int main(void){
	int n;
	printf("\ninput n >>> ");
	scanf("%d", &n);
	printf("\n");

	int the_product = factorial(n);
	printf("factorial %d = %d\n", n ,the_product);

	return 0;
}

//
//
// Пора передохнуть и перекусить.
//
//

