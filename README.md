# Experiment 6: For and While Loops

# Aim

To study and implement C++ decision-making statements using loops (for, while, do-while).

# Software Required

Visual Studio

# Theory

Types of Loops in C++
1. For Loop

Entry-controlled loop.

Best used when number of iterations is known.

2. While Loop

Entry-controlled loop.

Ideal when number of iterations is unknown in advance.

3. Do-While Loop

Exit-controlled loop.

Loop body is executed at least once before checking the condition.

Other Concepts
- Infinite Loops: Conditions never turn false, loop runs endlessly.
- Nested Loops: A loop inside another loop; useful for pattern printing and multi-dimensional tasks.

# Implementation Overview

Programs implemented:

Floyd's Triangle

Password Authentication

Left-Aligned Star Pyramid

Centered Reverse Pyramid

Right-Aligned Pyramid

Print no. between 0 to 20 

Alphabet Pattern

Even Numbers 0–10

Reverse Integer

Print “SIT” 5 times

# Step-by-Step Algorithms

# Program 1: Simple pyramid 

Objective: Print a simple pyramid of 5 rows.

Step-by-Step Algorithm:

Start the program.

Declare and initialize the number of rows (n).
→ Example: n = 5.

Set up an outer loop that runs from i = 1 to i <= n (to handle each row).

Inside the outer loop:

a. Print leading spaces:

Run an inner loop from space = 1 to space <= n - i.

Print a single space " " in each iteration.

b. Print stars:

Run another inner loop from star = 1 to star <= 2*i - 1.

Print a * in each iteration.

After printing spaces and stars, move to the next line.

Repeat steps 4a to 5 for all rows.

End the outer loop.

End the program.

# Program 2: Password Authentication

Objective: Verify password with maximum 3 attempts.

Steps:

Start program.

Ask user to set a password.

Initialize attempt counter to 0.

Allow user to enter password again.

If password matches, display success message and exit.

If not, increment attempt counter and display remaining attempts.

Lock system if attempts reach 3.

End program.

# Program 3: Left-Aligned Star Pyramid

Objective: Print increasing number of stars in each row.

Steps:

Start program.

Loop from row 1 to n (e.g., 5).

For each row, print number of stars equal to row number.

Move to next line after inner loop.

End program.

# Program 4: Centered Reverse Pyramid
Objective: Print decreasing number of stars in center-aligned pattern.

Steps:

Start program.

Loop from total rows down to 1.

For each row:

Print spaces to center-align stars.

Print decreasing number of stars.

Move to next line.

End program.

# Program 5: Right-Aligned Pyramid

Objective: Print increasing stars with leading spaces.

Steps:

Start program.

Loop from row 1 to total rows.

For each row:

Print spaces to shift stars to right.

Print stars equal to row number.

Move to next line.

End program.

# Program 6: Print Numbers

Objective:Print Numbers from 1 to 20

Start the program.

Initialize a variable i with value 1.

Repeat the following steps while i <= 20:

Print the value of i.

Increment i by 1.

End the loop when i becomes greater than 20.

End the program.


# Program 7:

Objective: to print Floyds Series

Steps:

1.Start the program

2.Declare Variables

3.i: Loop control for rows

4.j: Loop control for printing numbers in each row

5.num: An integer to store and print consecutive values (initialized to 1)

6.Set Initial Values

7.num ← 1

8.Begin Outer Loop to handle rows

8.For i from 1 to n (here, n = 4):

9.Begin Inner Loop for each row’s numbers:

10.For j from 1 to i:

11.Print the value of num

12.Increment num ← num + 1

13.After the inner loop ends, print a newline to move to the next row

14.End Outer Loop

15.Terminate Program

# Program 8: Even Numbers from 0 to 10

Objective: Print even numbers using a loop.

Steps:

Start program.

Initialize number to 0.

Loop while number is less than or equal to 10.

Print number.

Increment by 2.

End program.


# Program 9: Print “SIT” 5 Times

Objective: Repeat word using a loop.

Steps:

Start program.

Loop from 1 to 5.

Print "SIT" each time.

End program.

# Program 10:

Objective: Accept an integer input (e.g., a PRN or Roll number) and reverse its digits to produce and display the reversed number.

Steps:
1.Start the program

2.Declare and initialize variables:

n → to store the input number

x → to hold the last digit of n

s ← 0 → to hold the reversed number

3.Prompt the user

Display: “Enter your PRN/Roll number:”

Read integer input into n

4.Reverse the digits using a loop

Repeat while n > 0:

a.Calculate x ← n % 10 → extract the last digit

b.Update s ← s * 10 + x → build the reversed number

c.Update n ← n / 10 → remove the last digit from n

5.Display the reversed number

Output: s

6.End the program

# Conclusion
This experiment demonstrated practical applications of loops in C++. Using for, while, and nested loops, we solved various problems including patterns, authentication, number processing, and repetition. This enhanced our understanding of logic flow and control structures in programming.
