#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int game(char you,char computer)
{
    if(you==computer) return -1;
    else if(you=='R' && computer=='p') return 0;
    else if(you=='R' && computer=='S') return 1;
    else if(you=='P' && computer=='S') return 0;
    else if(you=='P' && computer=='R') return 1;
    else if(you=='S' && computer=='P') return 1;
    else if(you=='S' && computer=='R') return 0;
}

int main()
{
    int n;
    char you,computer,result;
    srand(time(NULL));
    n = rand() % 100;
    if(n<33){
        computer = 'R'; // R stand for ROCK
    }
    else if (n>33 && n<66){
        computer = 'P'; // P Stand for PAPER
    }
    else computer = 'S'; // S stand for SCISSOR
    printf("Enter your turn between R, P & S : ");
    scanf("%c",&you);
    result = game(you,computer);
    if(result==-1){
        printf("\nGAME DRAW!\n");
    }
    else if(result==1){
        printf("\nWOW! YOU HAVE WON THE GAME!\n");
    }
    else{
        printf("\nYOU LOST THE GAME!\n");
    }
    printf("\nYOU CHOOSED : %c & COMPUTER CHOOSED : %c\n",you,computer);
    return 0;
}
