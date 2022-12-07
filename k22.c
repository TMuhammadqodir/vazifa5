#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int n;
void input(int arr[][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=rand()%11+0;
        }
    }
}

void output(int arr[][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        puts("");
    }
    puts("");
}    

void unenique(int *p, int *p3){
    int s1=0,value=0;
    int *p1=p, *p2;
    for(int i=0; i<n*n; i++){
        p2=p;
        for(int i=0; i<n*n; i++){
            if(*p1==*p2){
                s1++;
            }
            p2++;
        }
        if(s1==1){
            printf("%d ",*p1);
        }

        s1=0;
        p1++;
        value++;
    }
}
int main(){
    srand(time(0));
    scanf("%d",&n);
    int arr1[n][n];
    printf("matrissa elementlari:\n");
    input(arr1);
    output(arr1);
    puts("");
    unenique(&arr1, arr1[n][n]);

    return 0;
}