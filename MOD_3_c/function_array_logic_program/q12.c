// 12.WAP to accept 5 students name and store it in array 
#include<stdio.h>
int main(){
    char students[5][100];

    for(int i=0;i<5;i++){
        printf("\nEnter Name of %d Student:",i+1);
        scanf("%s", students[i]);
    }
    for(int i=0;i<5;i++){
        printf("\nStudent %d: %s",i+1,students[i]);
    }
    return 0;
}