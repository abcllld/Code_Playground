                        // (4)Fat Arrow Function

//  Normal Way of writing Function

// The normal way of finding the sum is

// function sum(){
//     let a = 7, b = 4
//     let sum = a+b;
//     return `The sum of two no is ${sum}`

// }
// console.log(sum());
// Here if function is called before also no problem i.e line no 13 can be written anywhere..

// How to convert it into Fat Arrow Function

// const sum  = () =>{
// let a = 7, b = 4
// let sum = a+b;
// return `The sum of two no is ${sum}`

// }

// console.log(sum());
// Here first function must be defined then it should be called

// By using ECMAScript we can avoid using line no 20

// const sum  = () =>{
// let a = 7, b = 4
// return `The sum of two no is ${a+b}`

// }

// console.log(sum());

// This can be also written as:

// const sum  = () =>{
//     return `The sum of two no is ${(a=7)+(b=4)}`
    
//     }
    
//     console.log(sum());
// this will produce the same output

// This can be made more short by not wriring return also

const sum  = () => `The sum of two no is ${(a=7)+(b=4)}`
    console.log(sum());
    
    
    
