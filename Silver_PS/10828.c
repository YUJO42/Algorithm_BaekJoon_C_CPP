/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10828.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:48:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 19:29:37 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 10001
#define TRUE 1
#define FALSE 0

int arr[50005];
char input[100000];
int start = 20000;
int end = 20000;

void push(int i)
{
	arr[end++] = i;
}

int pop()
{
	int r;
	if (arr[end - 1] != 0 && start <= end)
	{
		r = arr[end - 1];
		arr[--end] = 0;
		return r;
	}
	else
		return -1;
}

int size()
{
	return end - start;
}

int empty()
{
	if ((end - start) == 0)
		return 1;
	else
		return 0;
}

int top()
{
	if (arr[end - 1] != 0)
		return arr[end - 1];
	else
		return -1;
}

int main(void)
{
	int n;

	scanf("%d", &n);

	while (n > 0)
	{
		scanf("%s", input);
		if (input[0] == 'p' && input[1] == 'u')
		{
			int i;
			scanf ("%d", &i);
			push(i);
		}
		else if (input[0] == 'p' && input[1] == 'o')
			printf("%d\n", pop());
		else if (input[0] == 's')
			printf("%d\n", size());
		else if (input[0] == 'e')
			printf("%d\n", empty());
		else if (input[0] == 't')
			printf("%d\n", top());
		n--;
	}

	return 0;
}
