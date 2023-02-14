//  Features of ECMAScript 2015 also known as ES6 

                        // (1) LET VS CONST VS VAR

// var ==> Function Scope
// LET AND CONST ==> Block Scope

var myName = 'Rahul Mishra'
console.log(myName);

myName = 'Rahul Kumar'
console.log(myName);




let myName = 'Rahul Mishra'
console.log(myName);

myName = 'Rahul Kumar'
console.log(myName);
// This will give us the same output as above var gave


const myName = 'Rahul Mishra'
console.log(myName);

myName = 'Rahul Kumar'
console.log(myName);
// This will not give output because const means constant variable which doesn't sound good


// why let & const is block scope?

function myInfo(){
let myFirstName = 'Rahul';
console.log(myFirstName);

if(true){
let myLastName = 'Mishra'
console.log('Hello '+ myFirstName);
console.log('Hello '+ myLastName);

}
}
console.log('How Are You '+ myLastName);  //This will throw an error because it is outside the block i.e {}. let is a block scope for this reason

myInfo();


// Incase of const it is not possible only to change the values or will throw an error







