/* declarations outside */ 
int A[100]; 
int B[100][100]; 
 
 
void main() 
{ 
    /* declarations inside */ 
    int i,j;
    int v;
 
 
    /* now only executable statements ... */ 
 
    /* A. loop normalization */ 
    for (i=10; i<=20; i=i+2) 
      A[i]=i; 
 
    /* output result */ 
    printf("i, A[20]: %d, %d \n", i, A[20]); 
    for (i=0; i<=20; i++) printf("%d ", A[i]); 
    printf("\n"); 
 
 
   /* B. induction variable substitution */ 
   v=0; 
   for (i=0; i<10; --i) 
     {
       v=v+1;
       A[v]=v;
     }
 
    /* output result */ 
    printf("i,v, A[v]: %d, %d, %d \n", i, v, A[v]); 
    for (i=0; i<=20; i++) printf("%d ", A[i]); 
    printf("\n"); 
 
 
    /* C. loop interchange */ 
    for (i=0; i<10; i++) 
      for (j=1; j<20; j=j+2) 
        B[i][j]=i*j; 
}