#include <stdio.h>
void staticFun()
{
	static int i;
	{
		static int i=1;
		printf("%d",i);
		i++;
		
	}
	printf("%d\n",i);
	i++;
	
}
int main()
{
	staticFun();
	staticFun();
	return 0;
}
