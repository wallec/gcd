# gcd
Greatest Common Divisor - Euclid's Algorithm

Euclid's algorithm: Given a pair of natural numbers (a,b), gcd(a,b) is equal to gcd(a-b,b) if a>b
or equal to gcd(a,b-a) if b>a. If a==b, gcd(a,b) == a == b. 

Just reduce the pair according to the above algorithm until one of them is equal to one, 
or both numbers are equal to each other. In the first case, the number which is not one 
is the gcd; in the second case, gcd == a == b.
