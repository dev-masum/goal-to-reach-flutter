# C Programming Practice: Loops and If-Else

This repository contains practice problems to strengthen your understanding of **if-else statements** and **loops** in C programming. The problems range from basic to nested scenarios to help you build problem-solving skills.

---

## **Problem 1: Even or Odd Numbers**
**Concepts:** Basic if-else  
**Description:**  
Write a program that takes an integer input from the user and prints whether the number is **even** or **odd**.  

**Hint:** Use the modulus operator `%`.  

**Example:**  
```
Input: 7
Output: 7 is Odd
```

---

## **Problem 2: Sum of Natural Numbers**
**Concepts:** For loop, if-else  
**Description:**  
Write a program that asks the user for a number `n` and calculates the sum of all numbers from 1 to `n`.  
If the sum is **even**, print `"Sum is even"`, otherwise print `"Sum is odd"`.  

**Example:**  
```
Input: 5
Output: Sum = 15
        Sum is Odd
```

---

## **Problem 3: Find the Largest of 3 Numbers**
**Concepts:** Nested if-else  
**Description:**  
Take three integers as input and print the largest number among them.  

**Hint:** Use nested `if` statements:  
```c
if(a > b) {
    if(a > c) ...
} else ...
```

**Example:**  
```
Input: 12, 7, 25
Output: Largest number is 25
```

---

## **Problem 4: Multiplication Table**
**Concepts:** Loops, if-else  
**Description:**  
Write a program that asks the user for a number and prints its multiplication table **up to 10**.  
Highlight multiples of 5 by printing `"Multiple of 5"` next to them.  

**Example Output:**  
```
Input: 5
5 x 1 = 5 Multiple of 5
5 x 2 = 10 Multiple of 5
5 x 3 = 15 Multiple of 5
...
```

---

## **Problem 5: Prime Numbers in a Range**
**Concepts:** Nested loops, if-else  
**Description:**  
Take two numbers `start` and `end` as input and print all **prime numbers** between them.  

**Hint:** Use a loop inside a loop to check if a number is divisible by any number from 2 to n-1.  

**Example:**  
```
Input: start = 10, end = 20
Output: 11 13 17 19
```

---

## **Problem 6: Pattern Printing**
**Concepts:** Nested loops, if-else  
**Description:**  
Print the following pattern for `n` rows (user input):  
```
*  
**  
***  
****
```

**Modification:** Even rows should print `#` instead of `*`.  

**Example for n = 4:**  
```
*  
##  
***  
####  
```

---

## **Tips for Practice**
1. Write the program first without worrying about formatting.  
2. Test with multiple inputs to understand loop and conditional behavior.  
3. Modify the problems (change ranges, conditions, or patterns) to explore deeper logic.  

---

Happy Coding! 🚀
