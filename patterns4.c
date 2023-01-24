/*
____1
___121
__12321
_1234321
123454321


123454321
_1234321
__12321
___121
____1


____1
___121
__12321
_1234321
123454321
_1234321
__12321
___121
____1

*/

#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            printf("_");
        }

        for(int j=1;j<=i;j++){
            printf("%d",j);
        }

        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=n;i>=1;i--){
        for(int j=n-1;j>=i;j--){
            printf("_");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        
        printf("\n");
    }
    
    printf("\n");
    
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            printf("_");
        }

        for(int j=1;j<=i;j++){
            printf("%d",j);
        }

        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=n;i>1;i--){
        for(int j=n;j>=i;j--){
            printf("_");
        }
        for(int j=1;j<=i-1;j++){
            printf("%d",j);
        }
        for(int j=i-2;j>=1;j--){
            printf("%d",j);
        }
        
        printf("\n");
    }

    
}
