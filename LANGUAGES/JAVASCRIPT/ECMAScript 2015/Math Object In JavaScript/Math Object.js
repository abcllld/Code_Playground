// The JavaScript Math object allows you to perform mathematical tasks on numbers.

// The Properties of Math Object Are as follows------------

// (1) Math.PI

console.log(Math.PI);

// (2) Math.round()

// returns the value of x rounded to its nearest integer

let num = 15.786;
console.log(Math.round(num));
// This will be 16 after rounding of as after decimal the no is greator than 5;

let num1 = 15.467
console.log(Math.round(num1));


let num2 = 15.5
console.log(Math.round(num2));



// (3) Math.pow() 

// Math.pow(x, y) returns the value of x to the power of y

console.log(Math.pow(2, 4));   // It means 2*2*2*2

// OR 

console.log(2 ** 4);   ///The same result 



// (4) Math.sqrt() 


// Math.sqrt(x) returns the square root of x

console.log(Math.sqrt(49));
console.log(Math.sqrt(215));
console.log(Math.sqrt(400));



// (5) Math.abs() 

// Math.abs(x) returns the absolute (positive) value of x

console.log(Math.abs(-89.00));
console.log(Math.abs(-8324584));
console.log(Math.abs(89));
console.log(Math.abs(7 - 9));




// (6) Math.ceil() 

// Math.ceil(x) returns the value of x rounded up to its nearest integer

console.log(Math.ceil(4.51));
console.log(Math.round(4.51));



console.log(Math.ceil(99.01));
console.log(Math.round(99.1));

// These two will not produce the same result as round as in ceil if after decimal anything is added then it increases the no by ONE irrespective of the number added is greator or smaller than 5




// (7) Math.floor() 

// Math.floor(x) returns the value of x rounded down to its nearest integer

console.log(Math.floor(4.51));

console.log(Math.floor(99.01));

// The decimal has no role to play here. The no will remain as Integer Only




// (8) Math.min()

// Math.min() can be used to find the lowest value in a list of arguments

console.log(Math.min(0, 150, 30, 20, -8, -200));





// (9) Math.max() 

// Math.max() can be used to find the highest value in a list of arguments

console.log(Math.max(0, 150, 30, 20, -8, -200));


// (10) Math.random()

// Math.random() returns a random number between 0 (inclusive), and 1 (exclusive)

console.log(Math.floor(Math.random() * 10));

console.log(Math.floor(Math.random() * 10));         // 0 to 9





// (11) Math.round()

// The Math.round() function returns the value of a number
// rounded to the nearest integer.

console.log(Math.round(4.6));
console.log(Math.round(99.1));



// (12) Math.trunc()

// The trunc() method returns the integer part of a number

console.log(Math.trunc(4.6));
console.log(Math.trunc(-99.1));



// NOTE--------
                // if the argument is a positive number, Math.trunc() is equivalent to Math.floor(),
                
                // otherwise Math.trunc() is equivalent to Math.ceil().





















