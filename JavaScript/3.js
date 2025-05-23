// Array
// An array is an ordered collection of values

// Insert/ Remove at end - O(1)
// .push(), .pop()

// Insert/ Remove at begining - O(n)
// because index has to be rest for every element of the array
// .unshift(), .shift()

// Access - O(1)

// Search - O(n)

// concat/slice/splice/reverse/sort/fill - O(n)
// foreach/map/filter/reduce - o(n)

// The slice() method returns a shallow copy of a portion of an array
// into a new array object.It does not modify the original array.
const arr = [1, 2, 3, 4, 5];
const newArr0 = arr.slice(0, 3);
const newArr = arr.slice(1, 3); // startIndex,endIndex
console.log(arr); // [1, 2, 3, 4, 5] (original array remains unchanged)
console.log(newArr, "newArr", newArr0); // [ 2, 3 ] newArr [ 1, 2, 3 ]
const newArr2 = arr.slice(1);
console.log(newArr2, "newArr2"); // [ 2, 3, 4, 5 ]
const newArr3 = arr.slice(3);
console.log(newArr3, "newArr3"); // [4,5]
const newArr4 = arr.slice(0);
console.log(newArr4, "newArr4"); // [ 1, 2, 3, 4, 5 ] newArr4

// The splice() method modifies the original array by removing or
// replacing elements.It returns an array of the removed elements.
arr.splice(1, 2); // removes 2 elements starting from index 1
console.log(arr); // [1, 4, 5] (original array is modified)

arr.fill(0);
// This method fills the array with a specified value and modifies
// the original array.
console.log(arr); // [0, 0, 0, 0, 0]

const arr2 = new Array(5).fill(0);
