#include<stdio.h>

int main()
{
	int s;
	char g;
	
	printf("Eneter your score: "); //to take the input from the user
	scanf("%d",&s);
	
	//for giving grads from A to F
	if(s >= 90){
		g= 'A';
	}
	else if(s >= 80){
		g= 'B';
	}
	else if(s >= 70){
		g= 'C';
	}
	else if(s >= 60){
		g= 'D';
	}
	else{
		g= 'F';
	}
	
	//using switch and case
	
	switch(g){
		case 'A':
			printf("Excellent work!\n");
		break;
	    case'B':
			printf("Well done\n");
		break;
		case'C':
			printf("Good job\n");
		break;
		case'D':
			printf("You passed, but you could do better\n");
		break;
		case'F':
			printf("Sorry, you failed\n");
		break;
	}
	
	//using if else here
	
	if (g == 'A' || g == 'B' || g == 'C' || g == 'D') {
        printf("You are eligible for the next level\n");
    } else {
        printf("Please try again next time\n");
    }
	












	
}