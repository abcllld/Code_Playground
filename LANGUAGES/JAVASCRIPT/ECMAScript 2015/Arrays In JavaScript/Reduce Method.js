                            // Reduce Method


// flatten an array means to convert the 3d or 2d array into a
// single dimensional array

// The reduce() method executes a reducer function (that you provide)
// on each element of the array, resulting in single output value.

// The reducer function takes four arguments:

// Accumulator
// Current Value
// Current Index
// Source Array

let arr = [2,5,8,9];
let sum = arr.reduce((accumulator, currElem, index, arr) => {
return accumulator += currElem;
})
console.log(sum);
