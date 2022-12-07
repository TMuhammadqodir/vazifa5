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

void unenique(int *p){
    int s1=0, s2=0, value=0;
    int *p1=p, *p2, *p3;
    for(int i=0; i<n*n; i++){
        p2=p;
        p3=p;
        for(int i=0; i<value; i++){
            if(*p1==*p2){
                s1++;
            }
            p2++;
        }
        if(s1==0){
            for(int i=0; i<n*n; i++){
                if(*p1==*p3){
                    s2++;
                }
                p3++;
            }
        }
        if(s2>=2){
            printf("%d ",*p1);
        }


        s1=0;
        s2=0;
        p1++;
        p3=p;
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
    unenique(&arr1);

    return 0;
}