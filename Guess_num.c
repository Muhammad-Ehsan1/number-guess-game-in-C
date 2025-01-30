#include <stdio.h>
int main(){
    int secret_number = 8;
    int guess_number;
    int guess_limit=3;
    for(int i=1;i<=guess_limit;i++){
        printf("Guess_Number %d : ",i);
        scanf("%d",&guess_number);
        if(guess_number==secret_number){
            printf("You Won");
            break;
        }
    }
        if(guess_number!= secret_number){
            printf("You Lost");
         }

         return 0;
}