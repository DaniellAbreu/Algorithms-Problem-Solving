// Regular Function.
function basicSum(x: number, y: number): number {
    return x + y;
}

// Arrow Function.
const multiply = (x: number, y: number) => x * y;

const result = basicSum(134, 2) - multiply(23, 54);

console.log(result);