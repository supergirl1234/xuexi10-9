#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#include<time.h>

//1.��ɲ�������Ϸ�� 
//int main(){
//	int num=0;
//	int randnum=0;
//	int i=0;
//	srand((unsigned)time(NULL));//�������
//	for(i=0;i<1000;i++){
//        randnum=rand()%100+1;//�õ�����һ����1-100֮�� 
//        
//	}
//	
//	while(1)//����Ϊʲô��while(1)����
//	{
//		printf("������һ�����֣�");
//		scanf("%d",&num);
//		if(num<randnum){
//			printf("����\n");
//		}else if (num>randnum)
//		{
//			printf("����\n");
//		}else{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//
//		}
//	}
//	system("pause");
//	return 0;
//

//}
//2.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�

//int main(){
//    int aim=0;
//	int left=0;
//	int right=0;
//	int a[]={1,3,6,9,12,16,20,23,45,50};
//	printf("��������Ҫ���ҵ�����");
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
//			printf("Ŀ�������±�Ϊ��%d\n",medium);
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



//3.��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���,������� 
//�����������룬����������Ρ����ξ�������ʾ�˳����� 
//
#include<string.h>
int main(){
	char password[]={0};
	int i=0;
		for (i=0;i<3;i++)
       {  
		   printf("���������룺");
		   scanf("%s",&password);
		  
			if (strcmp(password,"123789")==0)
			{
				  ;
				 break;
			 }
		  
			
	  }
		if (i<3)
		{
			printf("��½�ɹ�\n");
		}
		if(i>=3)
		{
		   //���볬��3���˳�����
		}

	system("pause");
	return 0;
}



