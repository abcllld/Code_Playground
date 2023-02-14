                    // Finding a String in a String

                // (1) indexOf(searchValue [, fromIndex]) 

// The indexOf() method returns the index of (the position of) the first occurrence of a specified text in a string

let myBio = 'I am a good food Student'
console.log(myBio.indexOf('student'));     //This will give us -1 as student is not Student i.e case sensitive
console.log(myBio.indexOf('Student'));      //Prints 7 as output

console.log(myBio.indexOf('  '));  //  -1

console.log(myBio.indexOf(''));  //  0

console.log(myBio.indexOf('  ')); //  -1

// The above all are index no's which starts from zero


console.log(myBio.indexOf('o',6));      //This will starts counting from index no 6 and will print the first zero


// // JavaScript counts positions from zero.
// // 0 is the first position in a string, 1 is the second, 2 is the third ...

                // (2) lastIndexOf(searchValue [, fromIndex])

// // Returns the index within the calling String object of the
// // last occurrence of searchValue, or -1 if not found.


let myBioData = ' I am Phenomenal'
console.log(myBioData.lastIndexOf('m'));