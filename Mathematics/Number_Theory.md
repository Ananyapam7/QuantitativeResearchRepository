# Number Theory

## Table of Contents
- [Modular Arithmetic](#modular-arithmetic)
- [Fermat's Little Theorem](#fermats-little-theorem)
- [Wilson's Theorem](#wilsons-theorem)
- [Quadratic Reciprocity](#quadratic-reciprocity)

---

## Modular Arithmetic
Modular arithmetic is a system of arithmetic for integers, where numbers "wrap around" upon reaching a certain value, known as the modulus.

**Definition**: For a positive integer \( m \), two integers \( a \) and \( b \) are said to be congruent modulo \( m \) if their difference \( a - b \) is an integer multiple of \( m \). We write:
$$ a \equiv b \pmod{m} $$

**Key Properties**:
1. **Addition**: 
   $$ (a+b) \pmod{m} = (a \pmod{m} + b \pmod{m}) \pmod{m} $$
2. **Multiplication**: 
   $$ (a \times b) \pmod{m} = (a \pmod{m} \times b \pmod{m}) \pmod{m} $$
3. **Inverse**: An integer \( a \) has a modular multiplicative inverse modulo \( m \) iff 
   $$ \gcd(a, m) = 1 $$
   If it exists, it's often denoted as 
   $$ a^{-1} \pmod{m} $$

---

## Fermat's Little Theorem
Fermat's Little Theorem states that if \( p \) is a prime number, then for any integer \( a \) such that \( 1 \leq a < p \), we have:
$$ a^{p-1} \equiv 1 \pmod{p} $$

This theorem is particularly useful for primality testing.

---

## Wilson's Theorem
Wilson's Theorem states that an integer \( n > 1 \) is a prime number if and only if:
$$ (n-1)! \equiv -1 \pmod{n} $$

---

## Quadratic Reciprocity
Quadratic Reciprocity describes the ability to determine the solvability of a quadratic equation in modular arithmetic.

Given two distinct odd primes \( p \) and \( q \), the Legendre symbol is defined as:
$$ \left( \frac{p}{q} \right) $$
which equals:
- 1 if $$ x^2 \equiv p \pmod{q} $$ has a solution
- -1 if no solution exists
- 0 if $$ p \equiv 0 \pmod{q} $$

**The Law of Quadratic Reciprocity** states:
$$ \left( \frac{p}{q} \right) \left( \frac{q}{p} \right) = (-1)^{\frac{(p-1)(q-1)}{4}} $$

This formula allows one to determine the solvability of the quadratic congruence by examining the primes \( p \) and \( q \).