## Recursion

It's a problem solving technique where the solution depends on solution to smaller instances of smae problem
Recursion is when a function calls itself
Every recursive solution needs to have a base case - to terminate

## Search Algorithms

1. Linear Search
   Linear search, also known as sequential search, is a simple searching algorithm used to find an element in a list or array. It works by iterating through each element of the list, one by one, until the desired element is found or the end of the list is reached.<br><br>
2. Binary Search
   Only works on sorted array<br/>
   Binary search is a fast search algorithm that finds an element in a sorted array by repeatedly dividing the search interval in half and searching for the element in one of the two halves.

## Sorting Algorithms

1. Bubble Sort
   Poor sorting algorithm<br>
   Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.<br><br>
2. Insertion Sort
   Insertion sort is a way to sort a list of numbers in order from smallest to largest.<br>
   Split the array into sorted and unsorted part<br>
   Assume first element is sorted and remaining are unsorted<br>
   Select unsorted element and compare with all elements in sorted part<br>
   If elements in sorted part is smaller than the selected element,proceed to next element.Else, shift larger elements in sorted part towards right<br><br>
3. Quick Sort
   Quick sort is a fast and efficient sorting algorithm that uses a divide-and-conquer approach to sort an array of elements. It is one of the most widely used sorting algorithms in the world.<br><br>
   Quick sort idea
   <ul>
      <li>Pick 1st element as pivot</li>
      <li>Pick last elemet as pivot</li>
      <li>Pick a random element as pivot</li>
      <li>Pick median as pivot</li>
   </ul>
    
   Partition the array into two parts: elements less than the pivot and elements greater than the pivot. Do it the till we reach base condition. The recursion stops when the subarray has only one element or is empty.

4. Merge Sort
