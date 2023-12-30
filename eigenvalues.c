# include <stdio.h>
# include <stdlib.h>
# include <math.h>
double* create_eigenvector(double eigen_value){
	double* x = (double *)malloc(2 * sizeof(int));
	x[0] = eigen_value;
	x[1] = 1;
	return x;
}
double* create_fibo_matrix(){
	double* fibo = (double *)malloc(2 * sizeof(int));
	return fibo;
}
int main () {
	// Two eigenvalues are fixed in whole cases
	double eigen_value1 = 1.618;
	double eigen_value2 = -0.618;
	// To get the corresponding eigenvectors using above two eigenvalues
	double* first_eigenvector = create_eigenvector(eigen_value1);
	double* second_eigenvector = create_eigenvector(eigen_value2); 
	int term;
	double* fibo = create_fibo_matrix();
    printf("Enter the term of the fibonacci number: ");
	scanf(" %d", &term);
	
	double coefficient1 = pow(eigen_value1, term)/ (eigen_value1- eigen_value2);
	double coefficient2 = pow(eigen_value2, term)/ (eigen_value1- eigen_value2);

	fibo[0] = coefficient1 * first_eigenvector[0] - coefficient2 * second_eigenvector[0];
	fibo[1] = coefficient1 * first_eigenvector[1] - coefficient2 * second_eigenvector[1];

	printf("the number of %dth term is %.2lf\n", term, fibo[1]);
	
	return 0;
}