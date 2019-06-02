/* declarations outside */
int A[100];
double C[100];
int B[100][100];
int main()
{

	/* declarations inside */
	int i,j;
	int v;
	double k;

	k = 3.1415;
	/* now only executable statements ... */

	/* A. loop normalization */
	for (i=10; i<=20; i=i+2)
		C[i]=i * k;
	/* output result */
	printf("i, C[20]: %d, %.2f \n", i, A[20]);
	for (i=0; i<=20; i++) printf("%.2f ", C[i]);
	printf("\n");

	/* C. loop interchange */
	for (i=0; i<10; i++) 
		for (j=1; j<=	20; j=j+2)
			B[i][j]=i*j;

	printf("i,j, B[i][j]: %d, %d, %d \n", i, j, B[i][j]);
	for (i=5; i<8; i++) {
		printf("i=%d : ", i); /* prevents loop interchange */
		for (j=1; j<=20; j++)
			printf("%d ", B[i][j]);
		
		printf("\n");
	}

}
