#include <stdio.h>
#include <math.h>
#include <string.h>

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


int is_prime(int n) {
	if (n <= 1) return 0;
	if (n == 2) return 1;
	if (n % 2 == 0) return 0;

	for (int i = 3; i <= sqrtf(n); i += 2) {
		if (n % i == 0) return 0;
	}
	return 1;
}


int main(void){
	int a, b;

	printf("input a >>> ");
	scanf("%d", &a);
	printf("input b >>> ");
	scanf("%d", &b);
	
	if(a <= b){
		int flag = 1;
		for (int i = a; i <= b; i++){
			if (is_prime(i)) {
			printf("%d\n", i);
			flag = 0;
			}
		}
		printf("\n");
	} else {
		printf("Error\n");
	}

	return 0;
			
}


int main(void){
	int n;

	printf("Введите размер массива >>> ");
	scanf("%d", &n);
	
	int numbers[n];

	printf("Введите числа массива ");
	for (int i = 0; i < n; i++) {
		printf(">>> ");
		scanf("%d", &numbers[i]);
	}
	
	int max = numbers[0];
	int min = numbers[0];
	int max_index = 0;
	int min_index = 0;

	for (int j = 1; j < n; j++) {
		if (numbers[j] > max) {
				max = numbers[j];
				max_index = j;
				}
		if (numbers[j] <= min) {
				min = numbers[j];
				min_index = j;
				}
	}

	printf("Максимальный элемент >>> %d, индекс >>> %d\n", max, max_index);
	printf("Минимальный элемент >>> %d, индекс >>> %d\n", min, min_index);

	return 0;

}

/
//
///
//// Выведение масссиво рекурсивно
///
//
/

void printArray(int arr[], int size, int index) {
	if (index >= size) {
		return;
	}
	printf("%d ", arr[index] + 1);
	printArray(arr ,size, index + 1);
}

int main(void) {
	int n;

	printf("Input size >>> ");
	scanf("%d", &n);

	int numbers[n];

	for (int i = 0; i < n; i++) {
		numbers[i] = i;
	}

	printf("Array >>> ");
	printArray(numbers, n, 0);
	printf("\n");

	return 0;
}



/// Дан список слов в алфавитном порядке. Напишите функцию, которая выполнит двоичный
/// поиск слова и вернет ответ о том, имеется ли оно в списке.



int binary_search(char arr[][10], int size, char word[]) {
	int first = 0;
	int last = size - 1;

	while (last >= first) {
		int mid = (first + last) / 2;
		if (strcmp(arr[mid], word) == 0)  {
			return 1;
		} else if (strcmp(word, arr[mid]) < 0) {
			last = mid - 1;
		} else {
			first = mid + 1;
		}
	}

	return 0;
}


int main(void) {
	
    char words[4][10] = {"apple", "banana", "cherry", "date"};

    int size = sizeof(words) / sizeof(words[0]);

    char search_word[10];
    printf("Input word to search >>> ");
    scanf("%s", search_word);

    int found = binary_search(words, size, search_word);

    if (found == 1) {
	    printf("Word found\n");
    } else {
	    printf("fail\n");
    }

    return 0;
}

*/

int main() {
	const char str[] = "Hello, world!";
	size_t length = strlen(str);
	int len = strlen(str);

	printf("Длина строки: %zu, Или: %d\n", length, len); // 13
}
