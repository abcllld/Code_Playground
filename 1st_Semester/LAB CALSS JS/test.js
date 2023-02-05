// let number = 123456789;

// // Initializing the result variable 
// let result = 0;

// while(number>0){
//     // Getting the rightmost digit
//     rightmost = number%10;
    
//     result = result*10 + rightmost;
    
//     // Removing the rightmost digit from the number
//     number = Math.floor(number/10);
// }
// console.log("Reversed number is : " + result)

let n = prompt("Enter a no. :  ");

let b = 0, base=1;


while(n>0){
    var r= n%10;
    b = b+(r*base);
    n = Math.floor(n/10);
    base  = base * 10;
}

document.write(b);