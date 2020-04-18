// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   10869.js                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/04/18 21:07:20 by yujo              #+#    #+#             //
//   Updated: 2020/04/18 21:09:23 by yujo             ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split(' ');

const a = parseInt(input[0]);
const b = parseInt(input[1]);

console.log(a + b);
console.log(a - b);
console.log(a * b);
console.log(parseInt(a / b));
console.log(a % b);
