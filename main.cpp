#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[2][2];
    int k=1;
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            arr[i][j]=k++;
            printf("arr[i][j]=%d\n%d\n%d\n",i,j,arr[i][j]);
        }
    }
    printf("%p\n%p\n%p\n%p\n",&arr[0][0],&arr[0][1],&arr[1][0],&arr[1][1]);
    printf("%p\n%p\n",&arr[0],&arr[1]);
    printf("%d\n%d\n%d\n%d\n",*arr[0],*(*(arr)+1),*arr[1],*(*(arr+1)+1));
}
