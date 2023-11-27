// WAP to show difference between Structure and Union
#include<stdio.h>
#include<string.h>

struct valorant{
    int gameUsers;
    char gameChar[50];
    float gamePrice;
};
union overwatch{
    int gameUsers;
    char gameChar[50];
    float gamePrice;
};

int main(){
    struct valorant game1;
    union overwatch game2;

    //storing value in game1 with structure
    game1.gameUsers=17000000;
    strcpy(game1.gameChar,"Reyna");
    game1.gamePrice=1000.00;

    //storing value in game2 with uninon
    game2.gameUsers=40000000;
    strcpy(game2.gameChar,"Orisa");
    game2.gamePrice=2000.60;

    //printing from strucure
    printf("\nGame User : %d",game1.gameUsers);
    printf("\nGame Character : %s",game1.gameChar);
    printf("\nGame Price : %f",game1.gamePrice);

    //printing from union
    printf("\nGame User : %d",game2.gameUsers);
    printf("\nGame Character : %s",game2.gameChar);
    printf("\nGame Price : %f",game2.gamePrice);
    return 0;
}
