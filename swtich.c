#include<stdio.h>
#include<conio.h>
main()
 {
 	int (c);
     //1. Display the menu
     printf("Pick an item : \n1. Pizza\n2.  Burger\n3.  Pasta\n4.  French Fries\n5.  Sandwich\n6.  ");
     printf("price of food :");
     scanf("%d",&c);
    //2. Display based on their choice
    
    switch (c)
	{
    case 1:
    printf ("pizza\n Price:Rs239");
       break;
    case 2:
    printf ("Burger\n Price:Rs129");
       break;
     case 3:
    printf ("Pasta\n Price:Rs179");
       break;
       case 4:
    printf ("French Fries\n Price:Rs99");
       break;
       case 5:
    printf ("Sandwich\n Price:Rs149");
       break;
       default:
    printf("I don't know what who entered");
    
	   }
}
