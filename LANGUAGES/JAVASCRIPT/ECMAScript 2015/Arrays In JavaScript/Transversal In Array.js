
// // //                 // Arrays In JavaScript

// // // // When we use var, we can stored only one value at a time.

// // // // let we want to store three friends name
// // var friend1 = 'raju'
// // var friend2 = 'kaju'
// // var friend3 = 'maju'

// // // // But this is a tedious process

// // // // When we feel like storing multiple values in one variable then
// // // // instead of var, we will use an Array.

var myFriends = ['raju','kaju','maju']

// // // // Moreover JS provides the freedom to store boolean, strings, integer all ata a time in a single array unlike other programmimg languages

// // // // The first element in a array is called 'LOWER INDEX/LOWER BOUNDARY'

// // // // The last element in a array is called 'UPPER INDEX/UPPER BOUNDARY'

// // // // The index starts from "0"

// // // // In JavaScript, we have an Array class, and
// // // // arrays are the prototype of this class.









// // //                 // Traversal in array

// // // // navigate through an array
// // // // if we want to get the single data at a time and also
// // // // if we want to change the data


var myFriends = ['raju','kaju','maju','paju']
console.log(myFriends[1]);


// // // // If we wan tto check the length of an element of an array then #LENGTH property is used
// // // console.log(myFriends.length);// this will print the length of the array as 4

// // // console.log(myFriends.length-1); //This will give us the index


// // // // We use loop to navigate
var myFriends = ['raju','kaju','maju','paju']

for(i = 0; i<myFriends.length; i++){
    console.log(myFriends[i]);

}


// // // for in loop

var myFriends = ['raju','kaju','maju','paju']

for(let elements in myFriends){ //Read it as let elements in array
    console.log(elements);

}

// // The for in loop is used to give the index no of the array


// // for of loop
var myFriends = ['raju','kaju','maju','paju']

for(let elements of myFriends){
// console.log(elements);
}

// Thus for of loop is used to print the name of each element in the array

// for each() loop

// It calls a function for each element in the array

// var myFriends = ['raju','kaju','maju','paju']

// myFriends.forEach(function(element, index, array){     //where index,elements (not elements),index are arguments

//     console.log(element);
// console.log(element+ ' index = ' + index );
// console.log(element+ ' index = ' + index + ' ' + array);


// }
// Thus By using forEach we can get index no  array and elements also together



// Using Fat Arrow Function

var myFriends = ['raju','kaju','maju','paju']

myFriends.forEach((element, index, array) => {
    console.log(element+ ' index = ' + index + ' ' + array);

});
