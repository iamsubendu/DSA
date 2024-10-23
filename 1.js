function sumation(n) {
  // 4
  let sum = 0; // 1
  for (let i = 1; i <= n; i++) {
    sum += i; // 4
  }
  return sum; // 1
}
sumation(4);

// total count = 4 + 2
// n+2
// Big O will be n + 2
// n + k -> k will be dropped when n is very large
// O(n) - Linear
// means as the size of input increases, time complexity increases

function a(n) {
  return (n * (n + 1)) / 2;
}
// O(1) - constant

for (let i = 1; i <= n; i++) {
  for (let j = 1; j <= n; j++) {}
}
// O(n^2) - Quadratic

for (let i = 1; i <= n; i++) {
  for (let j = 1; j <= n; j++) {
    for (let k = 1; k <= n; k++) {}
  }
}
// O(n^3) - Cubic

// If input size reduces by half every iteration
// O(log n) - Logarithmic
