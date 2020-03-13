# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    1.0_ver_cp_auto.sh                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 19:41:51 by yujo              #+#    #+#              #
#    Updated: 2020/03/13 18:40:10 by yujo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

if [ $2 == "b" ]
then
	g="Bronze"
elif [ $2 == "s" ]
then
	g="Silver"
elif [ $2 == "g" ]
then
	g="Gold"
fi

##for string in "B" "S"; do
#
#	case ${string}in
#		B)
#			${string}="Bronze"
#			;;
#		S)
#			${string}="Silver"
#			;;
#	esac
##done

cp $1 ../my_study/BOJ/$g
echo "$1 moved my_study/BOJ $g folder"

# 파일명이 어디 폴더로 갈지 선택한다
# b = Bronze , s = Silver...

# 파일명을 판단해 올바른 폴더로 cp를 한다.
