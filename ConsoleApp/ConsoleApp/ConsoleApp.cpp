// ConsoleApp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>

void testSwitch(int n, int a, int b, int c)
{
	int s = a + b + c;
	switch (n)
	{
	case 1:
		printf("1"); break;
	case 2:
		printf("2"); break;
	case 3:
		printf("3"); break;
	case 4:
		printf("4"); break;
	case 5:
		printf("5"); break;
	case 7:
		printf("7"); break;
	case 8:
		printf("8"); break;
	case 9:
		printf("9"); break;
	default:
		printf("%d", s); break;
	}
}

int testSum(int a, int b, int c)
{
	return (a + b + c);
}

int main(int argc, char* argv[])
{
	__asm
	{
		mov eax, esp;
		mov eax, [esp];
		mov eax, [esp - 4];
		mov eax, [esp - 8];


		lea ebx, [esp - 4];


	}

	testSwitch(1, 2, 3, 4);


	int s = testSum(10, 9, 1);
	return s;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

// 在vs2022 中内嵌汇编
// x64不支持内嵌汇编？x86才能支持内嵌汇编 ...