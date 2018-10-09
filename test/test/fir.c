#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

	//1. 打印100~200 之间的素数 
	int sushu=0;
	int j=0;
	int count=0;
	for (sushu=101;sushu<=200;sushu+=2)
	{ 
		for (j=2;j<=sqrt(sushu);j++)
		{
			if (sushu%j==0)
			{
				break;
			}
		}
		if (j>sqrt(sushu))
		{
			printf("%d ",sushu);
			count++;
		}

	}

	
	printf("\ncount=%d",count);
	return 0;
	system("pause");
}



////2. 输出乘法口诀表
//int main(){
//	int i=0;
//	int j=0;
//	for (i=1;i<=9;i++)
//	{
//		for (j=1;j<=i;j++)
//		{
//			printf("%d*%d=%d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//	system("pause");
//}



//3. 判断1000年---2000年之间的闰年
//int main(){
//
//    int leapyear=0;
//	for (leapyear=1000;leapyear<=2000;leapyear++)
//	{
//		if (leapyear%100==0)
//		{
//			if (leapyear%400==0)
//			{
//				printf("%d ",leapyear);
//			}
//		}else if (leapyear%4==0)
//		{
//			printf("%d ",leapyear);
//		}
      

		//if(leapyear%4==0)
		//{
		//	if (leapyear%100!=0)
		//	{
		//		printf("%d ",leapyear);
		//	}

		//}
		//if (leapyear%400==0)
		//{
		//		printf("%d ",leapyear);
		//}


//	}
//
//	return 0;
//	system("pause");
//}


//1. 给定两个整形变量的值，将两个值的内容进行交换。
//#define _CRT_SECURE_NO_WARNINGS
//int main(){
//	int a=0;
//	int b=0;
//
//	printf("请输入两个整形变量的值：");
//	scanf("%d %d",&a,&b);
//	c=a;
//	a=b;
//	b=c;
//   
//	printf("a=%d,b=%d",a,b);
//
//	return 0;
//	system("pause");
//}



//2. 不允许创建临时变量，交换两个数的内容（附加题） 
//#define _CRT_SECURE_NO_WARNINGS
//int main(){
//	int a=0;
//	int b=0;
//
//	printf("请输入两个整形变量的值：");
//	scanf("%d %d",&a,&b);
//    a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("a=%d,b=%d",a,b);
//
//	return 0;
//	system("pause");
//}




