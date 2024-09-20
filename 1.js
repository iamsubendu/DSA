// Array.push() and Array.unshift().

// Both methods take one or more elements as parameters and add those
// elements to the array the method is being called on; the push() method
// adds elements to the end of an array, and unshift() adds elements to
// the beginning.

function mixedNumbers(arr) {
  arr.unshift("I", 2, "three");
  arr.push(7, "VIII", 9);
  return arr;
}

console.log(mixedNumbers(["IV", 5, "six"]));

// Both push() and unshift() have corresponding methods that are nearly functional
// opposites: pop() and shift().As you may have guessed by now, instead of adding,
// pop() removes an element from the end of an array, while shift() removes
// an element from the beginning.The key difference between pop() and shift()
// and their cousins push() and unshift(), is that neither method takes
// parameters, and each only allows an array to be modified by a single
// element at a time.

function popShift(arr) {
  let popped = arr.pop(); // Change this line
  let shifted = arr.shift(); // Change this line
  return [shifted, popped];
}

console.log(popShift(["challenge", "is", "not", "complete"]));

// if we want to remove an element from somewhere in the middle ? Or
// remove more than one element at once ? Well, that's where splice()
// comes in.splice() allows us to do just that: remove any number of
// consecutive elements from anywhere in an array.

// splice() can take up to 3 parameters, but for now, we'll focus on just
// the first 2. The first two parameters of splice() are integers which
// represent indexes, or positions, of items in the array that splice()
// is being called upon.And remember, arrays are zero - indexed, so to
// indicate the first element of an array, we would use 0. splice()'s first
// parameter represents the index on the array from which to begin removing
// elements, while the second parameter indicates the number of elements
// to delete.

let array = ["I", "am", "feeling", "really", "happy"];
let newArray = array.splice(3, 2);
console.log(newArray);

// arr contains elements that sum to the value of 10.
const arr = [2, 4, 5, 1, 7, 5, 2, 1];
let sum = 0;
let i = 0;
while (i < arr.length) {
  sum += arr[i];
  if (sum > 10) {
    sum -= arr[i];
    arr.splice(i, 1);
  } else {
    i++;
  }
}
console.log(arr);

// The third parameter, comprised of one or more element(s), to add
// to the array.This can be incredibly useful for quickly switching
// out an element, or a set of elements, for another.
const numbers = [10, 11, 12, 12, 15];
numbers.splice(3, 1, 13, 14);
console.log(numbers);

// The next method we will cover is slice().Rather than modifying an array,
// slice() copies or extracts a given number of elements to a new array,
// leaving the array it is called upon untouched.slice() takes only 2
// parameters — the first is the index at which to begin extraction, and
// the second is the index at which to stop extraction(extraction will
// occur up to, but not including the element at this index).
let weatherConditions = ["rain", "snow", "sleet", "hail", "clear"];
let todaysWeather = weatherConditions.slice(1, 3);
console.log(todaysWeather);

function copyMachine(arr, num) {
  let newArr = [];
  while (num >= 1) {
    // Only change code below this line
    if (newArr.length < 0) {
      newArr = [[...arr]];
    } else {
      newArr.push([...arr]);
    }
    // Only change code above this line
    num--;
  }
  return newArr;
}

console.log(copyMachine([true, false, true], 2));

// Since arrays can be changed, or mutated, at any time, there's no guarantee
// about where a particular piece of data will be on a given array, or if
// that element even still exists.Luckily, JavaScript provides us with another
// built -in method, indexOf(), that allows us to quickly and easily check for
// the presence of an element on an array.indexOf() takes an element as a
// parameter, and when called, it returns the position, or index, of that
// element, or - 1 if the element does not exist on the array.

let fruits = ["apples", "pears", "oranges", "peaches", "pears"];

console.log(fruits.indexOf("dates"));
console.log(fruits.indexOf("oranges"));
console.log(fruits.indexOf("pears"));

// JavaScript offers several built in methods that each iterate over arrays in
// slightly different ways to achieve different results(such as every(),
// forEach(), map(), etc.), however the technique which is most flexible
// and offers us the greatest amount of control is a simple for loop.

function filteredArray(arr, elem) {
  let newArr = [];
  for (let i = 0; i < arr.length; i++) {
    if (arr[i].includes(elem)) {
      newArr.push(arr[i]);
    }
  }
  return newArr;
}

console.log(
  filteredArray(
    [
      [3, 2, 3],
      [1, 6, 3],
      [3, 13, 26],
      [19, 3, 9],
    ],
    3
  )
);
