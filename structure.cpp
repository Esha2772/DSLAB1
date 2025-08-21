#include<stdio.h>

struct student {
	int roll_no;
	char name[50];
	int marks[5];
	int total;
};
int main() {
	struct student s;
	s.total = 0;
	int i=0;
	printf("Enter Roll Number: ");
	scanf("%d", &s.roll_no);
	printf("Enter name: ");
	scanf("%s",&s.name);
	
	for(i = 0; i < 5; i++) {
		printf("Enter marks for subject %d: ", i+1);
		scanf("%d", &s.marks[i]);
		s.total += s.marks[i];
	}
	printf("\n---student Details (Using Structure) ---\n");
	printf("Roll Number: %d\n", s.roll_no);
	scanf("%d", &s.marks[i]);
	s.total += s.marks[i];
	}
