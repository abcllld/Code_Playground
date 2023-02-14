//  Anonymous Function
// A function expression is similar to and has the same syntax
// as a function declaration One can define "named"

// function expressions (where the name of the expression might
// be used in the call stack for example)
// or "anonymous" function expressions.


var funEx=function(a,b){
return total = a+b;

}

// The whole above code is anonymous function expression 
// And from function(a,b){
// return total = a+b;} is called anonymous function(not expression)

console.log(funEx(67,87));

// Instead of calling function we called variable this time. because function cannot be called as function is a keyword above

// But the problem with above is that below written
console.log('The sum of two no is '+ funEx);

// console.log('The sum of two no is '+ funEx(98,32856));  //This is Correct


// This will print The sum of two no is function(a,b){
// return total = a+b;

//  which we do not want
// so,MODIFICATION IN NEEDED HERE

var funEx=function(a,b){
return total = a+b;

}

var sum = funEx(76,89);
console.log('The sum of two no is '+ sum);
// This is correct as we again modified the variable

var sum = funEx(43,87);
var sum1 = funEx(90.81);
// In this way we can compare the two function also
console.log(sum>sum1);
// Will result in false


