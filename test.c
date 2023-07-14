#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//int main(void)
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a)); //48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4  a[0]+1是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4    a+1是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16  相当于sizeof(a[1])
//	printf("%d\n", sizeof(&a[0] + 1));//4   第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16   计算的是第二行的大小 
//	printf("%d\n", sizeof(*a));//16   这是的a是首元素（第一行）的地址，则*a是第一行
//	printf("%d\n", sizeof(a[3]));//16   sizeof内部的表达式不参与真实运算,只是根据它的类型计算它的大小 所以a[3]相当于a[0]
//
//	return 0;
//}








//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//程序的结果是什么？  2,5




//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;

//假设p 的值为0x100000。 如下表表达式的值分别为多少？
// 00100014     00100001   00100004
//已知，结构体Test类型的变量大小是20个字节

//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);  //先将100000转换成整数十进制为1048576,1048576+1=1048577,再转换成十六进制100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}









//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2); //0x4,0x02000000 
//	return 0;
//}







//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
//	int* p;	
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}








//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a; // p的类型为int (*)[4]  a的类型为int (*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //FFFFFFFC,-4
//	return 0;
//}











//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); //10,5
//	return 0;
//}










//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa); //at
//	return 0;
//}














int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
} 













