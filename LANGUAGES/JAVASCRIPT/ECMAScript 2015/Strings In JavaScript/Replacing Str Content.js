                    // Replacing String Content()

// String.prototype.replace(searchFor, replaceWith) 

// The replace() method replaces a specified value
// with another value in a string.

let myBioData = 'My name is Rahul Kumar Rahul'
// let myNewData = myBioData.replace('kumar', 'Mishra')

let myNewData = myBioData.replace('Rahul', 'RAHUL')
// It will only change the value of first Rahul and not the last one  

console.log(myNewData);



// Points to remember

// 1: The replace() method does not change the string
// it is called on. It returns a new string.

// 2: By default, the replace() method replaces only the first match

// 3:By default, the replace() method is case sensitive.
// Writing RAHUL (with upper-case) will not work