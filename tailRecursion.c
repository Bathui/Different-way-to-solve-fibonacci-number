# include <stdio.h>
/**
 * The function could give us the n-th term of fibonacci numbers
 * @term: n-th term
 * @last: the last one term (this is actually a constant which is zero)
 * @current: the current term (this is also a constant which is one)
 * @return: the n-th term fibonacci number
*/
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