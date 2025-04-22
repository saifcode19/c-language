#include <stdio.h>
int main(){

// int number ;                   //code to chech number is evnen or odd
// printf("enter the number");
// scanf("%d",&number);
// 
// printf("%d",number%2==0);

// code to check the smallest;
// int number1, number2;
// printf("enter the number");
// scanf("%d",&number1,number2);

// printf("the smallest is first one: %d",number1<number2);

// if else operator
//  int age;
//  scanf("%d",&age);
//  if (age<=18){
    // printf("you are not aduld");
// 
//  }
//  else{
    // printf("you are adult");
//  }

 //ternory opprator
//  int age ;
//  scanf("%d",&age);

//  age <=18? printf("you are not adult") : printf("you are adul");

// switch case
int days;
printf("enter the days b/w 1-7");
scanf("%d",&days);

switch (days){
    case 1 : printf("monday \n");
        break;
    case 2  : printf("tuesday\n");
        break;
    case 3 : printf("wednesday\n");
        break;
    case 4 : printf("thrusday\n");
        break;
    case 5 : printf("friday \n");
        break;
    case 6  : printf("saturday\n");
        break;
    case 7 : printf("sunday \n");
        break;
    default  : printf("invalid\n");
        

}

}
