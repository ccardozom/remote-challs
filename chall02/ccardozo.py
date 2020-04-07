# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ccardozo.py                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccardozo <ccardozo@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/07 02:35:33 by ccardozo          #+#    #+#              #
#    Updated: 2020/04/07 02:35:33 by ccardozo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

morse_code = {  'a': '.-', 
                'b': '-...',
                'c': '-.-.', 
                'd': '-..', 
                'e': '.', 
                'f': '..-.', 
                'g': '--.', 
                'h': '....', 
                'i': '..', 
                'j': '·---', 
                'k': '-.-', 
                'l': '.-..', 
                'm': '--', 
                'n': '-.', 
                'o': '---', 
                'p': '.--.', 
                'q': '--.-',
                'r': '.-.', 
                's': '...', 
                't': '-', 
                'u': '..-', 
                'v': '...-', 
                'w': '.--',
                'x': '-..-', 
                'y': '-.--', 
                'z': '--..',
                }

import sys

if len(sys.argv) == 2:
    code = ''
    if len(sys.argv[1]) == 0:
        print('usage: ./ccardozo.py <a-zA-Z string>')
        sys.exit()
    for c in sys.argv[1]:
        if c.lower() in morse_code:
            code += morse_code[c.lower()]
        elif c == ' ':
            code += ' '
        else:
            print('usage: ./ccardozo.py <a-zA-Z string>')
            sys.exit()
    print(code)
else:
    print('usage: ./ccardozo.py <a-zA-Z string>')
    