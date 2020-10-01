#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// change -*******

int main(){
    int number,guess,nguesses=1;
    srand(time(0));

    number = rand()%100+1;//generates a random num b/w 1 to 100
    //printf("The number is %d\n",number);
    //keep running the loop until the number is guessed
    do{
       printf("**Guess The Number Between 1 to 100**\n");
       scanf("%d",&guess); 
       if(guess>number){
           printf("** Enter Lower Number Please**\n");
       }
       else if(guess<number){
           printf("** Enter Higher Number Please**\n");
       }
       else{
           printf("You Guessed It In %d Attempts\n",nguesses);
       }
       nguesses++;
    }while(guess!=number);
    
    return 0;
}
