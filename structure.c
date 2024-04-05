#include <stdio.h>
#include <stdlib.h>
struct st{
	char name[50];
	int age;
	int regno;
};
int main()
{
	struct st s1;
	scanf("%s",&s1.name);
	scanf("%d",&s1.age);
	scanf("%d",&s1.regno);
	printf("%s\t",s1.name);
	printf("%d\t",s1.age);
	printf("%d\t",s1.regno);
	return 0;
}
