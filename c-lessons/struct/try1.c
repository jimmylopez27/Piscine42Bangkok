#include <stdio.h>

#define BUFF 20

struct Student_Info
{
	char name[BUFF];
	int grade_level;
	char section[BUFF];
};

int main()
{
	struct Student_Info s1;

	printf("Type your name here: ");
	scanf("%s", s1.name);
	printf("Type your grade level here: ");
	scanf("%d", &s1.grade_level);
	printf("Type your section here: ");
	scanf("%s", s1.section);

	printf("This is your information: \n");
	printf("%s\n%d\n%s\n", s1.name, s1.grade_level, s1.section);
	
	return 0;
}
