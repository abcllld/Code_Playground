
// 1: Find the square root of each element in an array?
// 2: Multiply each element by 2 and return only those
// elements which are greater than 10?

// let arr = [25, 36, 49, 64, 81];


// soln 1

// let arr = [25, 36, 49, 64, 81];

// let arrSqr = arr.map((currElem) => {
// return Math.sqrt (currElem)
// })
// console.log(arrSqr);
// OR

let arr = [25, 36, 49, 64, 81];

let arrSqr = arr.map((currElem) => Math.sqrt (currElem))
console.log(arrSqr);



// Soln 2
let array = [6, 7, 49, 64, 81];

let arraySqr = array.map((currElem) =>{
return currElem * 2 //each no now is *2  i.e,3 =6, 7 = 14... 
}).filter((currElem) =>{
return currElem > 10;
})
console.log(array);
// THus we can chain various method in map method....





                            
                                // (2) Reduce Method


// flatten an array means to convert the 3d or 2d array into a
// single dimensional array

// The reduce() method executes a reducer function (that you provide)
// on each element of the array, resulting in single output value.


// The reducer function takes four arguments:
// Accumulator
// Current Value
// Current Index
// Source Array