/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   273_Integer_to_English_Words.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 11:28:07 by yujo              #+#    #+#             */
/*   Updated: 2020/05/19 13:47:39 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* 	Example 1
 *  
 *  Input: 123
 *	Output: "One Hundred Twenty Three"
 *
 *  -----
 *
 *	Example 2
 *
 *	Input: 12345
 *	Output: "Twelve Thousand Three Hundred Forty Five"
 *
 *	-----
 *
 *	Example 3
 *	Input: 1234567
 *	Output: "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
 *
 *  -----
 *
 *  Example 4
 *
 *  Input: 1234567891
 *	Output: "One Billion Two Hundred Thirty Four Million Five Hundred Sixty Seven Thousand Eight Hundred Ninety One"
 *
 *  -----
 *
 *  Int Max Value 2, 147, 483, 647
 *				  0, 000, 000, 000
 *	
 *			  100 = Hundered
 *			1,000 = Thousand
 *		   10,000 = Ten Thousand
 *		  100,000 = Hundred Thousand
 *		1,000,000 = Millon
 *	   10,000,000 = Ten Millon
 *	  100,000,000 = Hundred Millon
 *	1,000,000,000 = Billon
 *
 */

/*
 *	접근 방법
 *	1. 자리수를 센다
 *	2. 3자리씩 끊어서 출력 후 자리수에 따라 추가해준다. ex 1111 = 1, 000 = (one + thousand)(one hundred eleven)
 *	3. 3자리씩 끊을 때 10의자리가 1일 경우(11, 12, 13... ) eleven, twelve등 변수 설정
 *	4. 10의자리마다 변수 설정 ten, twenty, thirty, fourty...
 *	5. 100의 자리는 그냥 숫자 + hundred (one, two three....)
 *
 */

void caseNum(int n)
{
	switch(n) 
	{
		case 1 :
			printf("One ");
			break;
		case 2 :
			printf("Two ");
			break;
		case 3 :
			printf("Three ");
			break;
		case 4 :
			printf("Four ");
			break;
		case 5 :
			printf("Five ");
			break;
		case 6 :
			printf("Six ");
			break;
		case 7 :
			printf("Seven ");
			break;
		case 8 :
			printf("Eight ");
			break;
		case 9 :
			printf("Nine ");
			break;
		case 10 :
			printf("Ten ");
			break;
		case 11 :
			printf("Eleven ");
			break;
		case 12 :
			printf("Twelve ");
			break;
		case 13 :
			printf("Thirteen ");
			break;
		case 14 :
			printf("Fourteen ");
			break;
		case 15 :
			printf("Fifteen ");
			break;
		case 16 :
			printf("Sixteen ");
			break;
		case 17 :
			printf("Seventeen ");
			break;
		case 18 :
			printf("Eighteen ");
			break;
		case 19 :
			printf("Nineteen ");
			break;
		case 20 :
			printf("Twenty ");
			break;
		case 30 :
			printf("Thirty ");
			break;
		case 40 :
			printf("Fourty ");
			break;
		case 50 :
			printf("Fifty ");
			break;
		case 60 :
			printf("Sixty ");
			break;
		case 70 :
			printf("Seventy ");
			break;
		case 80 :
			printf("Eighty ");
			break;
		case 90 :
			printf("Ninety ");
			break;
		case 100 :
			printf("Hundred ");
			break;
		case 1000 :
			printf("Thousand "):
			break;
		case 1000000 :
			printf("Million ");
			break;
		case 1000000000 :
			printf("Billon ");
			break;
		default :
			printf("Error");
			break;
	}
	return 0;
}

void recursive(int n)
{
	if (n > 1000000000)
	{
		caseNum(n / 1000000000);
		caseNum(1000000000);
		recursive(n % 1000000000);
	}
	else if (n > 10
}

char *numberToWords(int num) 
{
	if (num == 0)
		return "Zero";
	else
		return (recursive(num));
}

int main(void)
{
	int input1 = 123;
	int input2 = 12345;
	int input3 = 1234567;
	int input4 = 1235678891;

	printf("output1 : %s\n", numberToWords(input1));
	printf("output2 : %s\n", numberToWords(input2));
	printf("output3 : %s\n", numberToWords(input3));
	printf("output4 : %s\n", numberToWords(input4));
}
