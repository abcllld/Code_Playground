// //  Function expressions
// // "Function expressions simply means
// // create a function and put it into the variable "



function sum(a,b){ //Here a,b are called FUNCTION PARAMETERS*******
var total= a+b;
console.log(total);
}


sum();     //<<<<-----------NaN
sum(20,30); //<<<<------50
sum(20,87); //<<<----107

// Now the same function can be called by using function expression without using parenthesis

function sum(a,b){
var total= a+b;
console.log(total);
}


funNew; ///This function can be defined anywhere
var funNew = sum(20,87);
// Now i can call the function by just writing sum 




