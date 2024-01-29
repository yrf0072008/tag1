//例1：有人用温度计测量出用华氏发表示温度（如64°F），现在要求把它转为以摄氏法表示的温度（如17.8°C） 
#include<stdio.h>//头文件 
 int main() //主函数 
 {
 	float f_Degree,centigrade; //定义浮点型变量 
 	f_Degree=98.0;//初始化华氏度变量 
 	centigrade=(5/9.0)*(f_Degree-32);//注意此处应该是5.0 
 	printf("华氏度98的摄氏度为：%f\n",centigrade);//输出结果 
 	return 0;//函数返回值为0 
 } 
