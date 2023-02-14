                        // (1) The Case Changing

let myName ='rAHul MisHrA'
console.log(myName.toUpperCase());
console.log(myName.toLowerCase());


                    // (2) The concat() Method 

// concat() joins two or more strings

let firstName = 'RAHUL';
let lastName = ' MISHRA';

// The simplest method is to usr the + operator

console.log(firstName + lastName);

// OR

console.log(`${firstName} ${lastName}`);

// OR


console.log(firstName.concat (lastName));
console.log(firstName.concat (" ", lastName));


                        // (3) String.trim() 


// The trim() method removes whitespace from both
// sides of a string
//But it does not removes the white-spaces in between the character

let str = '                  Hello World          '
console.log(str.trim());
// This will ignore the black spaces

                        // (4) Converting a String to an Array

// A string can be converted to an array with the
// split() method

var txt = "a, b,c d,e";    //string

console.log(txt.split(","));      //Split on comma
console.log( txt.split(" "));     //Split on spaces
console.log(txt.split("|"));      //Split on pipe



