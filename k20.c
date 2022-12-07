#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int n;
    printf("matrissa o'lchami:");
    scanf("%d", &n);
    int arr[n][n];
    printf("matrissa elementlari:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = rand() % 41-20;
            printf("%d ", arr[i][j]);
            
        }
        puts("");
    }
    puts("");
    int a[n*n],b[n*n], k=0, l=0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[i][j]<0){
                a[k++]=arr[i][j];
            }else{
                b[l++]=arr[i][j];
            }
        }
    }
    printf("A={");
    for(int i=0; i<k; i++){
        printf("%d,",a[i]);
    }
    printf("\b}\nB={");
    for(int i=0; i<l; i++){
        printf("%d,",b[i]);
    }
    printf("\b}\n");

    return 0;
}