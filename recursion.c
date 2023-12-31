# include <stdio.h>
/**
 * The function returns the n-th term of fibonacci numbers the user wants
 * @n: n-th term
 * @return: the n-th term fibonacci number
*/
int fibo (int n) {
	int num;
	if (n == 0) {
		num = 0;
		return num;
	}
	else if (n == 1) {
		num = 1;
		return num;
	}
	else {
		num = fibo(n-2) + fibo(n-1);
		return num;
	} 
}
int main () {
	int term, num;
	printf("Enter the term of the fibonacci number: ");
	scanf(" %d", &term);
	num = fibo(term);
	printf("the number of %dth term is %d\n", term, num);
	return 0;
}