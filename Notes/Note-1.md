Let's define and explain **Armstrong numbers**, **magic numbers**, and **strong numbers**.

### 1. **Armstrong Number (Narcissistic Number)**

An **Armstrong number** (also called a **narcissistic number**) is a number that is equal to the sum of its own digits, each raised to the power of the number of digits in the number. 

#### **Definition**:
For a given number \( n \), if the sum of its digits, each raised to the power of the total number of digits in \( n \), is equal to \( n \), then \( n \) is an Armstrong number.

#### **Formula**:
Let \( N \) be a number with \( d \) digits, represented as \( N = a_1a_2a_3...a_d \). The Armstrong condition is:
\[
N = a_1^d + a_2^d + a_3^d + ... + a_d^d
\]

#### **Example**:
- **153**: It has 3 digits. 
  \[
  1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
  \]
  So, **153** is an Armstrong number.
  
- **9474**: It has 4 digits.
  \[
  9^4 + 4^4 + 7^4 + 4^4 = 6561 + 256 + 2401 + 256 = 9474
  \]
  So, **9474** is also an Armstrong number.

---

### 2. **Magic Number**

A **magic number** is a number that, when repeatedly reduced by the sum of its digits, results in 1. The process is known as the **digital root** process.

#### **Definition**:
To determine if a number is a magic number, you repeatedly sum the digits of the number until you get a single digit. If the result is **1**, the number is called a magic number.

#### **Example**:
- **19**:
  - Sum the digits: \( 1 + 9 = 10 \)
  - Sum the digits of 10: \( 1 + 0 = 1 \)
  - Since we end with 1, **19** is a magic number.

- **123**:
  - Sum the digits: \( 1 + 2 + 3 = 6 \)
  - Since the result is not 1, **123** is not a magic number.

---

### 3. **Strong Number**

A **strong number** (also called a **factorial sum number**) is a number in which the sum of the factorial of its digits is equal to the number itself.

#### **Definition**:
For a number \( N \), if the sum of the factorial of each of its digits is equal to the number, then \( N \) is a strong number.

#### **Factorial**:
The factorial of a number \( n \) (denoted as \( n! \)) is the product of all positive integers less than or equal to \( n \).

#### **Example**:
- **145**: 
  - \( 1! + 4! + 5! = 1 + 24 + 120 = 145 \)
  - So, **145** is a strong number.

- **40585**:
  - \( 4! + 0! + 5! + 8! + 5! = 24 + 1 + 120 + 40320 + 120 = 40585 \)
  - So, **40585** is a strong number.

---

### Summary of Definitions:
| Type of Number   | Condition/Definition                                                                 | Example |
|------------------|---------------------------------------------------------------------------------------|---------|
| **Armstrong Number** | Sum of its digits, each raised to the power of the number of digits, equals the number. | 153, 9474 |
| **Magic Number**    | A number where the repeated sum of its digits (digital root) results in 1.          | 19 |
| **Strong Number**   | Sum of the factorials of its digits equals the number itself.                        | 145, 40585 |