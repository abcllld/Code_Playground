
                            // CHALLENGE TIME

// 1---What will be the output of 3**3?    (**Means Power)
// 2----What will be the output, when we add a number and a string?
// 3----Write a program to swap two numbers?
// 4-----Write a program to swap two numbers without using third variable?

console.log(3**3);
// 3*3*3         e.g...3**5= 3*3*3*3*3..............** is called (Exoponentian operator)

console.log(12+'RAHUL');
// The result will be a concataneted value . If their is - then the result will be NaN


a=10;
b=5;

// The output will be a=5 and b=10 so we are making the changes
var c = b; // c=10(let)
b = a;
a=c; // b =5;
console.log('The value of a is' + a);
console.log('The value of b is' + b);

//Did not understand swapping-----------------------------------------------------------


a=10;
b=5;

//output we need a=5; b=10

a=a+b;  //so a=15 now
b=a-b; // b=5 we got it
a=a-b; // we got it a=5

console.log('The value of a is ' + a);
console.log('The value of b is ' + b);



//  Interview Question
// // What is the Difference between == vs === ?

var num1 = 10;
var num2 = '10';

console.log(num1==num2);
// == Only checks the value assigned  and so results in true although it is not true as dta type are different

console.log(num1===num2);
// It results in false as it check the value as well the data type of the variable

console.log(typeof(num1));
console.log(typeof(num2));