﻿// ConsoleApp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
		printf("1"); break;
	case 3:
		printf("1"); break;
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
	int s = testSum(10, 9, 1);


	__asm
	{
		push eax;
		push 1;
		push 2;
		push 3;
		push 4;
		pop eax;
		pop ebx;
		pop ecx;
		pop edx;
		pop eax;
	};


	testSwitch(1, 2, 3, 4);

	float f = (float)argc;
	printf("%f", f);
	argc = (int)f;
	printf("%d", argc);



	int8_t i8 = 0xab;
	int16_t i16 = 0xabcd;
	int a = 0x79010203;
	int b = -3;
	int c = (a + b) + (b + 0);
	float d = 3.1415926f;
	float e = 2.0 * d;




	return c;
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