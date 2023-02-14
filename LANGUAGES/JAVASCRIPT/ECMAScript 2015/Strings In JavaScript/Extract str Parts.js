                                // Extracting String Parts

// There are 3 methods for extracting a part of a string:
// slice(start, end)
// substring(start, end)
// substr(start, length)


                                // (1) The slice() Method 

// The slice() extracts a part of a string and returns the extracted part in a new string.

// The method takes 2 parameters: the start position, and the end position (end not included).

let str = "Apple, Banana, Jackfruit"
let nStr = str.slice(0,4)   //Only appl will be printed as the last index no is not included in this method
let newStr = str.slice(7,-2)
console.log(newStr);
console.log(nStr);

// The slice() method selects the elements starting at the
// given start argument, and ends at, but does not include, the given end argument.

// Note: The original array will not be changed.

// Remember: JavaScript counts positions from zero. First position is 0







                // (2) The substring() Method


// substring() is similar to slice().
// The difference is that substring() cannot accept negative indexes.

var vegetable = 'Potato, Cabbage,Tomato';

let newVegetable = vegetable.substring(0,7)

let newVegetables = vegetable.substring(9,-2) //It ignores -2 and the rest is same as slice

console.log(newVegetables);

console.log(newVegetable);

// // If we give negative value then the characters are counted from the 0th pos







                // (3) The substr() Method 


// substr() is similar to slice().
// The difference is that the second parameter specifies the length of the extracted part.

let country = 'India, America, Britian';

let myCountry = country.substr(0,4) //The output is same as the above two method in this case 
console.log(myCountry);

// let forCountry = country.substr(7,-2) // No output is displayed and it shows that it does not accept the negative values
// console.log(forCountry);

// But it can accept the single negative values as shown

 let forCountry = country.substr(-7) //This will print from backward side
 console.log(forCountry);

 
