// How to fatten an array
// converting 2d and 3d array into one dimensional array

const arr = [
             ['zone_1', 'zone_2'],
             ['zone_3', 'zone_4'],
             ['zone_5', 'zone_6'],
             ['zone_7', 'zone_7'],
             ['zone_7', 'zone_8']
             ];
            //  this is array of an array i.e it is a 2d array

let flatArr = arr.reduce((accumulator, currElem) =>{
    return accumulator.concat(currElem);

})
console.log(flatArr);

// But if there is nested array i.e array ke andar arry to fir wo nahi nikleg e.g is below

 const array = [

['zone_1', 'zone_2'],
['zone_3', 'zone_4'],
['zone_5', 'zone_6'],
['zone_7', ['zone_7', ['zone_7', 'zone_8']]]
];
let flatArray = array.reduce((accumulator, currElem) =>{
return accumulator.concat(currElem);
 })
console.log(flatArray);

// THis can not be printed as a 1-D array
