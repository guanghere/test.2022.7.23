#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数的递归,一种算法,
//									递归的核心思想	：  “大事化小”
//函数自己调用自己 就叫做递归	
//	err	栈溢出
//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}
//不是结束了 而是挂掉了

//编写函数,循环,递归 允许和不允许创建临时变量，求字符串的长度


//			1
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0'];
//
//	printf("%d ", strlen(arr));
//
//	return 0;
//}



//			2

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d ", my_strlen(arr));
//
//	return 0;
//}


int my_stelen(char* arr)
{

	
}


int main()
{
	char arr[] = "bit";

	printf("%d ",my_strlen(arr));


	return 0;
}