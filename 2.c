//例2：计算存款利息。有1000元，想存一年，有三种方法可选择：（1）活期，年利率为r1,；
//（2）一年期定期，年利率为r2；
//（3）存两次半年定期，年利率为r3。
//请分别计算出一年后按3种方法所得到的本息和。
#include<stdio.h>//头文件 
int main() //主函数 
{
	float interest_Rate1,interest_Rate2,interest_Rate3;//定义浮点型利率变量 
	interest_Rate1=0.0036;  //初始化第一种方式年利率
	interest_Rate2=0.0225;  //初始化第二种方式年利率
	interest_Rate3=0.0198; //初始化第三种方式年利率
		
	float principal_0,principal_1,principal_2,principal_3;//定义变量 
	principal_0=1000;//初始化本金 

	principal_1=principal_0*(1+interest_Rate1);//第一种本息和 
	principal_2=principal_0*(1+interest_Rate2);//第二种本息和 
	principal_3=principal_0*(1+interest_Rate3/2)*(1+interest_Rate3/2);//第三种本息和 

	printf("第一种本息和：%f\n",principal_1);
	printf("第二种本息和：%f\n",principal_2);
	printf("第三种本息和：%f\n",principal_3);
	
	return 0; //函数返回值为0 
} 



