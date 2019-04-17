# NTHU_CS_DS_2018Fall_HW5
Count the number of inversion pairs in a sequence. 

## implementation
Let A be a sequence of numbers. If i<j but A[i]>A[j], we call (i,j) an inversion pair.  
  
For example, let A=[1 2 3 5 4]. Then (4,5) is an inversion pair;  
Similarly, suppose A= [5 4 3 2 1], we have 10 inversion pairs: (5,4), (5,3), (5,2), (5,1), (4,3), (4,2), (4,1), (3,2), (3,1), (2,1). 

## Input
There are multiple test cases, and each test case begins with an integer n, indicating the number of elements in the sequence. After n, the next line includes the n distinct integers in the sequence.  
Please note:  
1)  1 <= n <= 1,000,000  
2) The value of each number is within [1, 2^32-1]  
3) It is also possible that the number of inversion pairs exceeds 232-1 but an unsigned long long variable will work fine. 
    
0 < Node_id < 100000    
For rotate,  0 < k < 100000    

## Output
For each input sequence, you need to output the number of inversion pairs.  
Note that you need to print newline("\n") for each solution.  

## Keywaords
NTHU, DS, Data Structure, Homework, Inversion Pairs, Merge Sort.

## Reference
http://140.114.86.238/problem/12076/
