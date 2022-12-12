#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockPaperScissors(char you, char comp){
    if(you == comp){
        return 0;
    }
    if(you=='r' && comp=='p'){
        return -1;
    }
    else if(you=='r' && comp=='s'){
        return 1;
    }

    if(you=='p' && comp=='r'){
        return 1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }

    if(you=='s' && comp=='r'){
        return -1;
    }
    else if(you=='s' && comp=='p'){
        return 1;
    }
}
int main(){
    char you, comp, again;
    srand(time(0));
    int number = rand()%100 + 1;
    if(number<33){
        comp = 'r';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }
    
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissors\n");
    scanf("%c", &you);
    int result = rockPaperScissors(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}

// Reference: https://www.youtube.com/watch?v=ZSPZob_1TOk