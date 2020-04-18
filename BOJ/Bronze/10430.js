// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   10430.js                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2020/04/18 21:10:05 by yujo              #+#    #+#             //
//   Updated: 2020/04/18 21:12:08 by yujo             ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split(' ');

const a = parseInt(input[0]);
const b = parseInt(input[1]);
const c = parseInt(input[2]);

console.log((a + b) % c);
console.log(((a % c) + (b % c)) % c);
console.log((a * b) % c);
console.log(((a % c) * (b % c)) % c);
