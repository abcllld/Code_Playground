
//                             // Filter In An Array


//                             // (1) find
// // arr.find(callback(element[, index[, array]])[, thisArg])

// // Returns the found element in the array, if some element in the
// // array satisfies the testing function, or undefined if not found.
// // Only problem is that it return only one element

// // Note that filtration also includes searching


// // const prices = [200,500,987,986,234];

// //  suppose we want clothes whose price < 500
// // const findElem = prices.find((currentVal) => {
// // return currentVal < 500
// // });

// // console.log(findElem);

// // Although 234< 500 but it filters and shows only the first value i.e, 200

// // OR

// console.log(prices.find((currentVal) => currentVal < 500 ));

// // This will produce the same result


// console.log(prices.find((currentVal) => currentVal >1000 ));

// // This will produce undefined as no condition is satisfied

//                         // (2) findIndex()

// // Returns the found index in the array, if an element in the
// // array satisfies the testing function, or -1 if not found.

// const prices = [200,500,987,986,234];
// console.log(prices.findIndex((currentVal) => currentVal < 500 ));

// // The output is 0 as 200 is at o index no

// console.log(prices.findIndex((currentVal) => currentVal > 1000 ));

// // As no condition is satisfied so it produces -1 



//                         // (3) filter

//  // Returns a new array containing all elements of the calling
// // array for which the provided filtering function returns true.

// // price < 500
// const price = [ 500,700,800, 790,200,499, 190]
// const newPriceTag = price.filter((elem, index) => {
//     return elem < 500;
// })
console.log(newPriceTag);
// This will produce a new array [199,200, 499]

const price = [ 500,700,800, 790,200,499, 190]
const newPriceTag = price.filter((elem, index) => {
    return elem >1400;
})
console.log(newPriceTag);

// If no condition is satisfied then it gives an empty array[]