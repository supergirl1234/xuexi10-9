#include<stdio.h>
#include<stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
//1.完成猜数字游戏。 

int main(){
	 int num=0;
	 int randnum=0;
     printf("请输入一个整数：");
	 scanf("%d",&num);
	 randnum=rand()%100+1;
	 while( ){

		 if(num>randnum){
			 printf("高了");
		 }else if (num<randnum){
        	 printf("低了");
		 }else{
		     printf("猜对了");
		 
		 }

	 }
	system("pause");
	return 0;

}

//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回-1.（折半查找） 

//3.编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”,密码错误， 
//可以重新输入，最多输入三次。三次均错，则提示退出程序。 

//4.编写一个程序，可以一直接收键盘字符， 
//如果是小写字符就输出对应的大写字符， 
//如果接收的是大写字符，就输出对应的小写字符， 
//如果是数字不输出。
