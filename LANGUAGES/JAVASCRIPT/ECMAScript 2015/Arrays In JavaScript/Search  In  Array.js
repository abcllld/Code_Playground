                        
                    // Searching in an Array

// Array.prototype.

                            // (1)indexOf() 

// Returns the first (least) index of an element within the array equal
// to an element, or -1 if none is found. ********It search the element from the
// 0th index number*********

var myFriends = ['raju','kaju','maju','paju']
console.log(myFriends.indexOf('maju', 2));

// This will give 2 as output as it stars searching from raju in forward direction

console.log(myFriends.indexOf('maju', 3));  //Will print nothing


 console.log(myFriends.indexOf('maju', 4)); //This will print -1 as nothing is found

 console.log(myFriends.indexOf('Maju', 2)); // will also print -1 as no Maju



                            //(2) lastIndexOf()
// Returns the last (greatest) index of an element within the array equal
// to an element, or -1 if none is found. *******It search the element last to first********

var myFriends = ['raju','kaju','maju','paju']
console.log(myFriends.indexOf('maju',2));



                            // (3) includes()

// Determines whether the array contains a value,
// returning true or false as appropriate.
// Note that it searches in the forward direction 

var myFriends = ['raju','kaju','maju','paju']
console.log(myFriends.includes('maju'));  //will result in true

console.log(myFriends.includes('maju',3));
// This will result in false as staring from index 3 there is no maju present so it gave us a false result


var myFriends = ['raju','kaju','maju','paju','maju']
console.log(myFriends.includes('maju',3));
// This will gain result in true as staring from 3 there is one more maju at last which  it prints as a true result

