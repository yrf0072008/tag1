//例4：用%f输出实数，结果6位小数

#include<stdio.h>//头文件 
int main() //主函数 
{
	double double_temp,temp;//定义双精度浮点型变量
	double_temp=1;//初始化double_temp
	temp=double_temp/3;//将double_temp除以3得到得结果赋值给temp 
	printf("%3.4f\n",temp);//输出temp 
	//m.n m代码宽度 n代表小数点位数 
	//m小于数据宽度，以宽度为准，大于则留空格 
	return 0;//函数返回值为0 
}

