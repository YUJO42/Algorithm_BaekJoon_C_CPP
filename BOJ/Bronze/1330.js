// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   1330.js                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/04/21 16:54:23 by yujo              #+#    #+#             //
//   Updated: 2020/04/21 16:56:11 by yujo             ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split('\n');

const n = input[0].split(' ').map(v => Number(v));

if (n[0] < n[1])
	console.log('<');
else if(n[0] > n[1])
	console.log('>');
else
	console.log('==');
