// Object
// An object is a collection of key value pairs

// Insert - O(1)
// Remove - O(1)
// Access - O(1)
// Search - O(n)

// Object.keys() - O(n)
// return array of all keys in object

// Object.values() - O(n)
// return array of all values in object

// Object.entries() - O(n)
// Object.entries() is a method in JavaScript that
// returns an array of a given object's own enumerable
// string - keyed property[key, value] pairs.

const obj = { a: 1, b: 2, c: 3 };

for (const [key, value] of Object.entries(obj)) {
  console.log(`${key}: ${value}`);
}
// Alternatively, you can use Object.entries() with map() or
// forEach() to iterate over the key - value pairs
Object.entries(obj).map(([key, value]) => {
  console.log(`${key}: ${value}`);
});
Object.entries(obj).forEach(([key, value]) => {
  console.log(`${key}: ${value}`);
});

// ===================================================================

const obj1 = new Object();
const obj2 = { key: "value" };
const obj3 = { a: 1, b: 2 };
console.log(Object.keys(obj3)); // Output: ['a', 'b']
console.log(Object.values(obj3)); // Output: [1, 2]
console.log(Object.entries(obj3)); // Output: [['a', 1], ['b', 2]]

// ===================================================================

const target = { a: 1 };
const source = { b: 2 };
Object.assign(target, source);
console.log(target); // Output: { a: 1, b: 2 }
// Object.assign(target, ...sources): Copies all enumerable own
// properties from one or more source objects to a target object.

// ===================================================================

const obj4 = { a: 1 };
Object.freeze(obj4);
obj4.a = 2; // This will not change the value
console.log(obj4.a); // Output: 1

// ===================================================================

const obj5 = { a: 1 };
Object.seal(obj5);
obj5.a = 2; // This will change the value
obj5.b = 6;
console.log(obj5); // Output: 2
// Object.seal(obj): Seals an object, preventing new properties from
// being added but allowing existing properties to be modified.

// ===================================================================

const obj6 = { a: 1 };
console.log(Object.getOwnPropertyDescriptor(obj6, "a"));
// Output: { value: 1, writable: true, enumerable: true, configurable: true }

// ===================================================================

console.log(Object.getOwnPropertyNames(obj)); // Output: ['a']
console.log(obj.hasOwnProperty("a")); // Output: true
console.log(obj.toString()); // Output: [object Object]
console.log(typeof obj); // Output: 'object'
//shallow cloning
const clone = { ...obj };
