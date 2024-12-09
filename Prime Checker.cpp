#include<stdio.h>
#include<conio.h>

//Function declaration: Function to check if a number is prime
int primeChecker(int number);

int main(){
	int number, check=0;
	
	// Get the number from user	
	printf("Enter the number you want to check if its prime: ");
	scanf("%d", &number);
	
	// If the number is less than 1, ask the user to enter a number greater than 1	
	while(number<=1){
		printf("Please enter a number bigger than 1.\n");
		scanf("%d", &number);
	}
	
	// Recall primeChecker Function	
	check=primeChecker(number);
	if (check==0){
		printf("%d is not a prime number.", number);
	}else{
		printf("%d is a prime number.", number);
	}
	getch();
	return 0;	
}

// Function to check if the number is prime
int primeChecker(int number){
	
	// 2 is a prime number
	if(number==2){
		return 1;
	}else{
	
	// Check the number if its prime
		for(int i=2; i<number; i++){
			if(number%i==0){
				return 0;
				break;
			}
			else{
				return 1;
			}
		}
	}
}

