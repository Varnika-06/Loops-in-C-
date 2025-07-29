# Loops-in-C++

**Experiment No.: 6**
**Name**: To study and implement C++ decision msking statements loops

**Tools Used**: VS Code

**Theory**: This experiment covers the use of loops (for loop) and string comparison in C++:

- The `for` loop is used for executing a block of code repeatedly for a defined number of iterations.
- String comparison is useful in validating inputs like passwords by comparing each character.

**Algorithms**:

**Program 1**:

Step 1. Start  

Step 2. Initialize loop counter `i = 0`  

Step 3. Repeat until `i < 5`:  
  - Print "SIT"  
  - Increment `i`  

Step 4. Stop

**Program 2**:

Step 1. Start  

Step 2. Initialize `i = 0`  

Step 3. Loop from `i = 0` to `10`:  
     - If `i % 2 == 0`, print `i`  

Step 4. Stop

**Program 3**:

Step 1. Start  

Step 2. Initialize loop counter `i = 0`  

Step 3. Loop until `i < 20`:  
  - Print `i + 1`  
  - Increment `i`  

Step 4. Stop

**Program 4**:

Step 1. Start  

Step 2. Set predefined password `P = "hZ78#"`  

Step 3. Input password `S` from user  

Step 4. If `S.length == P.length`:  
  - Compare each character of `S` and `P`  
  - Count mismatches  
  - If no mismatches → print "Right Password"  
  - Else → print "Wrong Password"  

Step 5. Else → print "Wrong Password"  

Step 6. Stop

**Program 5**

Step 1: Start

Step 2: Declare integers `i`,`j`.

Step 3: Loop `i` from 0 to 4:
  -Loop `j` from 0 to `i`:
  -Print `*` without a newline.
  -After inner loop, print a newline (`endl`).

Step 4: End

**Program 6**

Step 1: Start

Step 2: Input number of rows `n`.

Step 3: Loop `i` from 1 to `n`:
  -Print `n-1` spaces
  -Print `2*i-1` stars
  -Move to next line

Step 4: End

**Conclusion**: This experiment demonstrates:
- How loops are useful for repetitive tasks like counting and printing sequences.
- How conditions inside loops help filter outputs (e.g., printing even numbers).
- How string matching is done character by character for simple password verification logic.
