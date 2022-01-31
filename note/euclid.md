# Euclid Algorithm
$gcd(a,b)*lcm(a,b)=a*b$
$$
Prove:\\
\frac{a}{gcd(a,b)}is\ mutually\ qualitative\ to \frac{b}{gcd(a,b)}\\
lcm(a,b)=gcd(a,b)*\frac{a}{gcd(a,b)}*\frac{b}{gcd(a,b)}\\
lcm(a,b)*gcd(a,b)=a*b
$$
---
$gcd(a,b)=gcd(b,a \mod b)$
$$
Prove:\\
gcd(a,b)=gcd(b,a\mod b)=d\\
Let\ a=kb+c\\
Obviously,\ gcd(a,b)=gcd(b,c)=d\\
a=\lfloor \frac a b\rfloor*b+c\\
\frac a d=\lfloor \frac a b\rfloor*\frac b d+\frac c d\\
\frac a d-\frac b d * \lfloor \frac a b \rfloor = \frac c d\\
\therefore
d\mid c\ 
\because d\mid b\ \\
Let\ D>d\ and \ D\mid c,D\mid b\\
\because a=kb+c \therefore D\mid kb+c\\
D\ is\ GCD\ of\ a\ and\ b.\\
\therefore Q.E.D.
$$
