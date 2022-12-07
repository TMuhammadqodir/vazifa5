#include <stdio.h>
int n;
void fill(int arr[][n]){
    int i=0, num=1, s=0,k=0;
    while(1){
        for(int j=i; j<n-i; j++){
            arr[i][j]=num++;
            s++;
            if(s==n*n){
                k=1;
                break;
            }
        }
        for(int j=i+1; j<n-i; j++){
            arr[j][n-i-1]=num++;
            s++;
            if(s==n*n){
                k=1;
                break;
            }
        }
        for(int j=n-i-1; j>i; j--){
            arr[n-i-1][j-1]=num++;
            s++;
            if(s==n*n){
                k=1;
                break;
            }
        }
        for(int j=n-i-1; j>i+1; j--){
            arr[j-1][i]=num++;
            s++;
            if(s==n*n){
                k=1;
                break;
            }
        }
        if(k==1)
             break;
        i++;
    }

} 
void output(int arr[][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%3d ",arr[i][j]);
        }
        puts("");
    }
    puts("");
}
int main(){
    scanf("%d",&n);
    int arr[n][n];
    fill(arr);
    output(arr);

    return 0;
}