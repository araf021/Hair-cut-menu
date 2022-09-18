#include<stdio.h>
#include<stdlib.h>
int  main(){
	int user__choice;
	printf("Welcome to SuperCuts, please choose your service:\n"
	       "(1) Haircut\n"
	       "(2) Hair coloring\n");
	scanf("%d", &user__choice);
	if(user__choice==1)
	{
		  printf("You have choosen to cut your hair.\n"
		         "What is your gender?\n"
		         "(1) Female\n"
		         "(2) Male\n");
		scanf("%d", &user__choice);
		if (user__choice==1){
			  printf("The cost of cutting your hair is Taka 250.");
		}
		else if(user__choice==2){
			  printf("The cost of cutting your hair is Taka 100.");
		}
		else{
			             	printf("Please enter correct choice.");
			             }
	}
	else if (user__choice==2){
			printf("You have choosen to color your hair.\n"
			"What color do you like\n"
			"(1) Black\n"
			"(2) Blonde\n"
			"(3) Red\n"
			"(4) Brown\n");
			scanf("%d",&user__choice);
			if(user__choice==1){
			      printf("What is your gender?\n"
			             "(1) Female\n"
			             "(2) Male\n");
			             scanf("%d", &user__choice);
			             if(user__choice==1) {
			             	printf("The cost of coloring your hair is Taka 350.");
			             }
			             else if(user__choice==2){
			             	printf("The cost of coloring your hair is Taka 200.");
			             }
			             else {
			             	printf("Please enter correct choice.");
			             }
			}
			else if(user__choice==2){
				printf("What is your gender?\n"
			             "(1) Female\n"
			             "(2) Male\n");
			             scanf("%d", &user__choice);
			             if(user__choice==1)
			             {
			             	printf("The cost of coloring your hair is Taka 1100.");
			             }
			             else if(user__choice==2)
			             {
			             	printf("The cost of coloring your hair is Taka 700.");
			             }
			             else{
			             	printf("Please enter correct choice.");
			             }
			}
			else if (user__choice==3 || user__choice==4){
				printf("What is your gender?\n"
			             "(1) Female\n"
			             "(2) Male\n");
			             scanf("%d", &user__choice);
			             if(user__choice==1)
			             {
			             	printf("The cost of coloring your hair is Taka 700.");
			             }
			             else if(user__choice==2){
			             	printf("The cost of coloring your hair is Taka 500.");
			             }
			             else
			             {
			             	printf("Please enter correct choice.");
			             }
			}
			else{
				printf("Please enter correct choice");
			}
	}
	else{
			             printf("Please enter correct choice.");
	}
	return 0;
}
