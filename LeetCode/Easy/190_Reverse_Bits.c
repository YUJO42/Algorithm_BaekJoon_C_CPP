/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   190_Reverse_Bits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:54:36 by yujo              #+#    #+#             */
/*   Updated: 2020/05/18 13:10:40 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>

uint32_t reverseBits(uint32_t n) 
{
    uint32_t reverse_n = 0x00000000;

    for (int i = 0; i < 32; i++)
    {
        reverse_n = (n & 1) + (reverse_n << 1);
        n >>= 1;
    }
    return reverse_n;
}

void print_binary(int x, int y)
{
	if (y <= 0)
		return;
	print_binary(x >> 1, y - 1);
	printf("%c", (x & 1) ? '1' : '0');
}

int main(void)
{
	uint32_t test1 = 0b00000010100101000001111010011100;
	uint32_t test2 = 0b11111111111111111111111111111101;
    
	printf("test1 output	: 00111001011110000010100101000000\n");
	printf("test1 my output : "); 
	print_binary(reverseBits(test1), 32);
	printf("\n");
	printf("test2 output	: 10111111111111111111111111111111\n");
	printf("test2 my output : "); 
	print_binary(reverseBits(test2), 32);
	printf("\n");

	return 0;
}
