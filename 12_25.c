#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1;i<11;i++)
//	{
//		printf("%d ",i*i);
//	}
//	return 0;
//}

//#include<math.h>
//#include<stdio.h>
//#define P 3.14
//int main()
//{
//	printf("%f\n", sin(P / 3));
//	printf("%f\n", sin(P / 6));
//	printf("%f\n", sin(P / 2));
//	printf("%f\n", sin(P / 4));
//	printf("%f\n", sin(0));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	ch = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", ch);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n = 10;
	int a;

	scanf("%d", &n);
	int* p = (int*)(malloc(n*sizeof(int)));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		free(p);
		p = NULL;
	}

	return 0;
}