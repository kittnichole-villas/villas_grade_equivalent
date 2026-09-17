#include <stdio.h>

int main() {
	
	//declare variables
	int score;
	char grade;

	//output: ask the user for their score
	printf("Enter your score: ");

	//input: score
	scanf("%d", &score);

	//process: assign the equivalent grade for the score
	if (score >= 90) {
		grade = 'A';
	} else if (score >= 80) {
		grade = 'B';
	} else if (score >= 70) {
		grade = 'C';
	} else if (score >= 60) {
		grade = 'D';
	} else {
		grade = 'F';
	}

	//output: grade
	printf("%c", grade);
	
	return 0;
	
}