// ️If...Else 

// The if statement executes a statement if a specified condition is truthy.
// If the condition is falsy, another statement can be executed.

var holiday = ' tomorrow';

if (holiday == 'tomorrow') {

    console.log('Go to school Tomorrow');

}
else{
    console.log('Do not go!');

}



// Challenge Time
// write a program that works out whether if a given year is a leap year or not?
// A normal year has 365 days, leap years have 366, with an extra day in february
//If a year is divisible by 4 then it is a leap year

var year = 2022;

if((year % 4 )=== 0){
    if((year % 100 ) ===0){
        if((year % 400 )=== 0){
            console.log('The year '+ year +' is a leap year');
        }
        else{
            console.log('The year '+ year +' is  not a leap year');
        }
    }
else{
    console.log('The year '+ year +' is  a leap year');
}
}

else{
console.log('The year '+ year+' is not a leap year');
}



// What is truthy and falsy values in Javascript?
// we have total 5 falsy values in javascript
// 👉 0,"",undefined,null,NaN,false** is false anyway********************************************

if (score = 0){
    console.log('Shit!We lose the game');///this part will not be printed as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed

}



if (null){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed
    
}



if (undefined){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed
    
}




if (score = 0){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed
    
}




if (score = 10){
    console.log('Shit!We lose the game');//this time this wii be printed as no falsy values
}

else{
    console.log('Yeah! we won the game');///this part will not be console as it has one of the falsy values i.e 0
    
}




if (NaN){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed
    
}



// Conditional (ternary) operator
// The conditional (ternary) operator is the only JavaScript operator
// that takes three operands

var age = 17;
if(age >= 18){
console.log("you are eligible to vote");
}else{

console.log("you are not eligible to vote");
}
var age = 18;
console.log((age >= 18) ? "you can vote" : "you can't vote");





// Switch Statement
// Evaluates an expression, matching the expression's value to a
// case clause, and executes statements associated with that case.

var area = 'circle';
var pi = 3.142, l = 3, r = 5, h = 7;

if(area =='circle'){
console.log('The area of a circle is '+ pi*r**2);
}
elseif(area =='triangle')
{
    console.log('The area of a triangle is '+ (l*h)/2);
}
elseif(area =='rectangle')
{
    console.log('The area of a rectangle is '+ (l*b));

}

// // var area = "square" ;
// // var PI = 3.142, l=5, b=4, r=3;
// // if(area == "circle"){
// //
// console.log("the area of the circle is : " + PI*r**2);
// // }else if(area == "triangle"){
// //
// console.log("the area of the triangle is : " + (l*b)/2);
// // }else if(area == "rectangle"){
// //
// console.log("the area of the rectangle is : " + (l*b));
// // }else{
// //
// console.log("please enter valid data");
// // }


//Concept of Leap Year----------->>

// var year = 2000;

// if(year%4==0 && year%100==0 && year%400==0){

//     console.log('The year '+year+' is a Leap year');
// }

// else{
//     console.log('The year '+year+' is Not a Leap year');

// }

















