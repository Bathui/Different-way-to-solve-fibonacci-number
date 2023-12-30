# include <stdio.h>

int fibo (int term, int last, int current) {
	int num;
	if (term == 0) {
		return last;
	}
	else if (term == 1) {
		return current;
	}
	else{
		num = fibo(term-1, current, last + current); 
		return num;
	}
}
int main () {
	int term, num;
	printf("Enter the term of the fibonacci number: ");
	scanf(" %d", &term);
	num = fibo(term, 0, 1);
	printf("the number of %dth term is %d\n", term, num);
	return 0;
}