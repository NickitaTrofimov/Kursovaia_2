#pragma once
#include "FireNumbers.h"
#include <stdio.h>
#include <math.h>
#include <string>

//s Numbers::From_10_to_q(int n, int radix) {
//	std::string buffer = "          ";
//
//	int i = 10;
//
//	while (n > 0) {
//		int x = n % radix2;
//		n = n / radix2;
//		char z;
//		if (x < 10)
//			z = '0' + x;
//		else
//			z = 'A' - 10 + x;
//		buffer[i] = z;
//		i--;
//	}
//
//	return buffer[n];
//}
//
//
//
//
//
//
//
//int Numbers::From_q_to_10(char* n, int radix) {
//
//	int nota = 0;
//	int count = strlen(n);
//
//	//while (doka2 != 0) {
//	//	doka2 = doka2 / 10;
//	//	count++;
//	//}
//
//	int *arr = new int[count];
//
//	//for (int i = count - 1; i >= 0; i--) {
//	//	arr[i] = doka2 % 10;
//	//	doka2 = doka2 / 10;
//	//}
//
//	for (int i = 0; i < count; i++) {
//		switch (n[i])
//		{
//		case 'A':
//			arr[i] = 10;
//			break;
//		case 'B':
//			arr[i] = 11;
//			break;
//		case 'C':
//			arr[i] = 12;
//			break;
//		case 'D':
//			arr[i] = 13;
//			break;
//		case 'E':
//			arr[i] = 14;
//			break;
//		case 'F':
//			arr[i] = 15;
//			break;
//		case '0':
//			arr[i] = 0;
//			break;
//		case '1':
//			arr[i] = 1;
//			break;
//		case '2':
//			arr[i] = 2;
//			break;
//		case '3':
//			arr[i] = 3;
//			break;
//		case '4':
//			arr[i] = 4;
//			break;
//		case '5':
//			arr[i] = 5;
//			break;
//		case '6':
//			arr[i] = 6;
//			break;
//		case '7':
//			arr[i] = 7;
//			break;
//		case '8':
//			arr[i] = 8;
//			break;
//		case '9':
//			arr[i] = 9;
//			break;
//		default:
//			nota++;
//		}
//	}
//
//	int result10 = arr[0] * radix + arr[1];
//
//	for (int i = 2; i < count; i++) {
//		result10 = result10 * radix + arr[i];
//	}
//	return result10;
//	//linkLabel1->Text = L"Результат = " + result10;
//}