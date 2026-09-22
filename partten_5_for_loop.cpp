#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==5 || j==1 || j==5 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i,j,num=1;
    for(i=1;i<5;i++){
        for(j=1;j<=i;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;      
}


#include <stdio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",6-j);
        }
        printf("\n");
    }
    return 0;      
}


#include <stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(k=5;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i>=1;i--){
        for(k=5;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
    }
        printf("\n");
    }
    return 0;
}