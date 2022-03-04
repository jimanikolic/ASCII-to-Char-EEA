# ASCII-to-Char-EEA
Convert ASCII to Char using Euclid's Extended Algorithm

Input: plain text, and two numbers a and N, gcd(a, N) = 1
plain text is converted to its ASCII representation
cypher message: each ASCII character ch is multiplied by the number a

To decode:
find the multiplicative modular inverse of a modulo N
multiply each number in the cypher message by x
view the obtained numbers as the ASCII code of characters
convert each ASCII code into its corresponding character
plain text: report the obtained message
