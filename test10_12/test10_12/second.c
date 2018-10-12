#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

//1.完成猜数字游戏。 
//int main(){
//	int num=0;
//	int randnum=0;
//	int i=0;
//	srand((unsigned)time(NULL));//随机种子
//	for(i=0;i<1000;i++){
//        randnum=rand()%100+1;//得到的数一定在1-100之间 
//        
//	}
//	
//	while(1)//到底为什么，while(1)不懂
//	{
//		printf("请输入一个数字：");
//		scanf("%d",&num);
//		if(num<randnum){
//			printf("低了\n");
//		}else if (num>randnum)
//		{
//			printf("高了\n");
//		}else{
//			printf("恭喜你，猜对了\n");
//			break;
//
//		}
//	}
//	system("pause");
//	return 0;
//

//}
//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回-1.（折半查找）

//int main(){
//    int aim=0;
//	int left=0;
//	int right=0;
//	int a[]={1,3,6,9,12,16,20,23,45,50};
//	printf("请输入想要查找的数：");
//	scanf("%d",&aim);
//	 left=0;
//	 right=sizeof(a)/sizeof(int)-1;
//   while(1)
//   {
//		int medium=(left+right)/2;
//		if (aim<a[medium])
//		{
//			 right=medium;
//		}else if (aim>a[medium])
//		{
//			left=medium;
//		}else if (aim=a[medium])
//		{
//			printf("目标数的下标为：%d\n",medium);
//			break;
//		}else
//		{
//			return -1;
//		}
//   }
//
//	system("pause");
//	return 0;
//}



//3.编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
//可以重新输入，最多输入三次。三次均错，则提示退出程序。 
//
#include<string.h>
int main(){
	char password[]={0};
	int i=0;
		for (i=0;i<3;i++)
       {  
		   printf("请输入密码：");
		   scanf("%s",&password);
		  
			if (strcmp(password,"123789")==0)
			{
				  ;
				 break;
			 }
		  
			
	  }
		if (i<3)
		{
			printf("登陆成功\n");
		}
		if(i>=3)
		{
		   //输入超过3次退出界面
		}

	system("pause");
	return 0;
}



