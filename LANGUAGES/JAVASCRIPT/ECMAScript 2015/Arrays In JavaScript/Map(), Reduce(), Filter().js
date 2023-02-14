                    // (1) map

// let newArray = arr.map(callback(currentValue[, index[, array]]) {
//
// return element for newArray, after executing something
// }[, thisArg]);
// Returns a new array containing the results of calling a
// function on every element in this array.


const array = [1,2,4,5,8];
// Let for a no > 9
let newArray = array.map((curreEle, index, array) => {
return curreEle > 9;
})
console.log(array);
console.log(newArray);

const array1 = [1,2,4,5,8];
let newArray1 = array1.map((curEle, index, arr) => {
    return `Index no = ${index} and the value is ${curEle} belongs to ${arr}`
})
console.log(newArray1);

// It return new array without mutating the original array

// The forEach is same as map but the differnece is forEach results in undefined i.e,

const arr1 = [1,2,4,5,8];
let newArr1 = arr1.forEach((curEle, index, arr) => {    //results in undefined
    return `Index no = ${index} and the value is ${curEle} belongs to ${arr}`
})
console.log(newArr1);



