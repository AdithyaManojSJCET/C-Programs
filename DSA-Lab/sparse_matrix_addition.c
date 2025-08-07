#include<stdio.h>
int main(){
	int a[10][10],b[10][3];
	int i,j,k=1,m,n;
	
	printf("Enter the rows and columns");
	scanf("%d %d",&m,&n);
	printf("Enter the matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	b[0][0] = m;
	b[0][1] = n;
	b[0][2] = 0;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != 0) {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
                b[0][2]++;
            }
        }
    }
    printf("Sparse Matrix Representation:\n");
    for(i = 0; i < k; i++) {
        printf("%d %d %d\n", b[i][0], b[i][1], b[i][2]);
    }

    return 0;
}

	
		
