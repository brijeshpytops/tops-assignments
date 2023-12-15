// 7. Accept marks from user and check pass or fail
#include<stdio.h>

int main(){
    int num,total=0;
    float per;

    for(int i=1;i<=5;i++){
        printf("\nEnter %d Subject Mark: ",i);
        scanf("%d",&num);
        total += num;
    }
    per = (total*100)/500;
    printf("%.2f",per);

    if(per<35.0){
        printf("\nYou Are Fail");
    }else{
        printf("\nYou Are Pass");
    }

    return 0;
}