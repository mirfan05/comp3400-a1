# Lab Assignment 1

## Introduction

In this assignment you will be working on several exercises to get used you to working with
the C programming environment.

- Due: One Week
- Deliverables: Commit and push to Github. Submit to Gradescope.

## Assignment Details

There are several parts to this assignment.

Complete the function that you are tasked to complete, and add a description of what the function does (using
Javadoc-style documentation). For example, the `get_max` function from our lecture might have the following
documentation.

    /**
     * Returns the larger of the two
     *
     * @param a The first number
     * @param b The second number
     * @return The larger of the two
     */
     int get_max(int a, int b) {

### Before Getting Started

If you are on Ubuntu, you need to install the package `libgtest-dev` before you get started.

After cloning the repository into Visual Studio Code, select the "compiler kit" first. You should
choose gcc/g++ for the projects in this course.

To build the code, click on the "Build" icon in the bottom (with the gearbox).

To run the tests, select the flask icon on the left tab bar ("Testing") and choose one from
"TestMate C++" Do not choose from CTest.

Lastly, you get a "task not found" error, exit and restart VSCode.

### Part A

In this part, you will write a function that converts coins into the equivalent amount in cents. The function takes as
input the number of dimes, nickels, and pennies, and should return the cent amount (**note**: NOT dollar amount). If any
of the counts are invalid, return `-1`.

For example,

- `coins_to_cents(1, 0, 0)` returns `10`
- `coins_to_cents(2, -1, 3)` returns `-1` (nickels is invalid).

### Part B

In this part, you will write a function that computes the shipping cost, given the weight of the package.

- If 0 < weight <= 1.0, return $3.50
- If 1.0 < weight <= 3.0, return $5.50
- If 3.0 < weight <= 10.0, return $8.50
- If 10.0 < weight <= 20.0, return $10.50
- If 10.0 < weight <= 20.0, return $10.50
- If weight is invalid, return -1.

### Part C

In this part, you will write a function that adds all even numbers in a given range. The
`add_all_evens` function takes in two arguments, and will add up all even numbers starting at
`begin` and ending at `end`.

For example, if `begin` is 1 and `end` is 4, then the result should be `2 + 4 = 6`.
