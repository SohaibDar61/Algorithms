Selection Sort



Complexity Analysis of Selection Sort:
Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N)*O(N) = O(N*N) = O(N2)

Auxiliary Space: O(1) as the only extra memory used is for temporary variable while swapping two values in Array. The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation. 
//====================================================//
Sort an array of strings using Selection Sort
Is Selection Sort Algorithm stable?
Stability : The default implementation is not stable. However it can be made stable. Please see stable selection sort for details.
//====================================================//
Is Selection Sort Algorithm in-place?
Yes, it does not require extra space.


//====================================================//
* Selection sort makes O(n) swaps which is minimum among all sorting algorithms mentioned above.
//====================================================//
Which sorting algorithm will take least time when all elements of input array are identical? 
Consider typical implementations of sorting algorithms.

>The insertion sort will take \theta(n) time when input array is already sorted.


//====================================================//
In best case, 

Quick sort: O (nlogn) 
Merge sort: O (nlogn)
Insertion sort: O (n)
Selection sort: O (n^2)  

//====================================================//

Worst case complexities for the above sorting algorithms are as follows: 
Merge Sort      — nLogn 
Bubble Sort     — n^2 
Quick Sort       — n^2 
Selection Sort — n^2

//====================================================//
How many comparisons are needed to sort an array of length 5 
if a straight selection sort is used and array is already in the opposite order?


>Consider the array: 5 4 3 2 1 1st iteration will compare 4 numbers 
with the 5 2nd iteration will compare 3 numbers 
with the 4 3rd iteration will compare 2 numbers 
with the 3 4th iteration i will compare 1 number 
with the 2 So, the total number of comparisons is 4 + 3 + 2 + 1 = 10 
It can be viewed as the sum of the sequence of the first (n-1) numbers starting 
by 1 S = ((1 + (n-1) )*(n-1) )/2 S = 10 Option (C) is correct.

//====================================================//

Which one of the following in-place sorting algorithms needs the minimum number of swaps?

Selection Sort is an in-place algorithm having minimum number of swaps. 
It works on greedy approach and takes O(n) swaps to sort the array of n elements

//====================================================//




