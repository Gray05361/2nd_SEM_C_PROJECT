#include<stdio.h>
int p;
int checkPin(int pin){
  if(pin==p){
    return 1;
  }else{
    return 0;
  }
}
int main(){
  float m,w,d;
  int c=10,pin;

  printf("Set pin:");
  scanf("%d",&p);
  printf("Enter youur account balance: ");
  scanf("%f",&m);
  while(c!=0){
  printf("\nPress: \n1.Check balance, 2.Widraw, 3.Deposit, 4.Change pin, 0.Exit:  ");
  scanf("%d",&c);
    switch(c){
      case 1: 
        printf("Enter your pin: ");
        scanf("%d",&pin);
        if(checkPin(pin)){
          printf("Current Balance: %f\n",m);
        }else{
          printf("Invalid pin!\n");
        }
      break;
      case 2:
        printf("Your current balance is: %f\n",m);
        printf("Enter amount to be withdrawn: ");
        scanf("%f",&w);
        printf("Enter your pin: ");
        scanf("%d",&pin);
        if(checkPin(pin)){
          m=m-w;
          printf("Withdrawl of Rs. %f is successful.\n",w);
          printf("Current balance: %f\n",m);
        }else{
          printf("Invalid pin!\n");
        }
      break;
      case 3:
        printf("Current Balance: %f\n",m);
        printf("Enter amount to deposited: ");
        scanf("%f",&d);
        printf("Enter your pin: ");
        scanf("%d",&pin);
        if(checkPin(pin)){
          m=m+d;
          printf("Rs. %f deposited successfuly.\n",d);
          printf("Current balance: %f\n",m);
        }else{
          printf("Invalid pin!\n");
        }
      break;
      case 4:
        printf("To change pin \nEnter current pin: ");
        scanf("%d",&pin);
        if(checkPin(pin)){
          printf("Enter new pin: ");
          scanf("%d",&p);
          printf("Pin updated successfuly\n");
        }else{
          printf("Invalid pin!\n");
        }
      break;
    }    
  }


}
