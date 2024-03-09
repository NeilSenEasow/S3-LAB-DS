---

Description
This C program performs addition on two polynomials represented as arrays of structures. It prompts the user to input coefficients and exponents for each polynomial, calculates the sum of the two polynomials, and displays the result.

Usage
1. Ensure you have a C compiler installed on your system (e.g., GCC for Unix-like systems or MinGW for Windows).
2. Copy the provided code into a text editor or an integrated development environment (IDE) of your choice.
3. Save the file with a `.c` extension, for example, `polynomial_addition.c`.
4. Compile the code using your preferred C compiler. For example, you can compile it using GCC in Unix-like systems by running the command `gcc polynomial_addition.c -o polynomial_addition`.
5. Run the compiled executable file. For example, if you compiled the code into `polynomial_addition`, you can run it by typing `./polynomial_addition` in the terminal (Unix-like systems) or `polynomial_addition.exe` in the command prompt (Windows).
6. Follow the prompts to input coefficients and exponents for each polynomial.
7. The program will calculate and display the sum of the two polynomials.

Functionality
- The program defines a structure `poly` representing a single term of a polynomial, with members `coeff` (coefficient) and `expo` (exponent).
- It defines arrays of structures `p1`, `p2`, and `p3` to store the two input polynomials and the result polynomial, respectively.
- The `readPoly` function prompts the user to input coefficients and exponents for a polynomial and returns the number of terms.
- The `display` function displays a polynomial in the form of a mathematical expression.
- The `addPoly` function calculates the sum of two polynomials and returns the number of terms in the result.
- In the `main` function, the program prompts the user to input coefficients and exponents for each polynomial, calculates the sum of the two polynomials using the `addPoly` function, and displays the result using the `display` function.

Issues
The code assumes that the user will input valid coefficients and exponents. Error handling for invalid input is not implemented in this version.

--- 