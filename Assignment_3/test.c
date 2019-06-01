/* declarations outside */
int A[100];
int B[100][100];
void main()
{
 /* declarations inside */
 int i,j;
 int v;

for(i=1; i<=6; i=i+1)
{
A[10+(i-1)*2]=10+(i-1)*2;
}
;
i=10+(i-1)*2;
;
printf("i, A[20]: %d, %d \n",i,A[20]);
for(i=1; i<=21; i++)
{
printf("%d ",A[0+(i-1)*1]);
}
;
i=0+(i-1)*1;
;
printf("\n");
v=0;
for(i=1; i<11; i++)
{
v=v+1;
A[v]=v;
}
;
i=0+(i-1)*1;
;
printf("i,v, A[v]: %d, %d, %d \n",i,v,A[v]);
for(i=1; i<=21; i++)
{
printf("%d ",A[0+(i-1)*1]);
}
;
i=0+(i-1)*1;
;
printf("\n");
for(j=1; j<10; j=j+1)
{
for(i=1; i<11; i++)
{
B[0+(i-1)*1][1+(j-1)*2]=0+(i-1)*1*1+(j-1)*2;
3+3;
}
;
i=0+(i-1)*1;
;
}
;
j=1+(j-1)*2;

}