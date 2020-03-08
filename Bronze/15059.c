/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15059.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 14:16:20 by yujo              #+#    #+#             */
/*   Updated: 2020/03/08 14:31:10 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int pc, pb, pp;
	int cc, cb, cp;
	int sum = 0;
	
	scanf("%d %d %d", &pc, &pb, &pp);
	scanf("%d %d %d", &cc, &cb, &cp);

	if (cc > pc)
		sum += (cc - pc);
	if (cb > pb)
		sum += (cb - pb);
	if (cp > pp)
		sum += (cp - pp);
	printf("%d", sum);

	return 0;
}
