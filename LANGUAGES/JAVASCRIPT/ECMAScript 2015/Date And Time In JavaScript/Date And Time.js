// JavaScript Date objects represent a single moment in time in a
// platform-independent format. Date objects contain a Number
// that represents milliseconds since 1 January 1970 UTC.

//  Creating Date Objects

// There are 4 ways to create a new date object:

// (1) new Date()

// (2) new Date(year, month, day, hours, minutes, seconds, milliseconds)
// // it takes 7 arguments

// (3) new Date(milliseconds)
// we cannot avoid month section

// (4) new Date(date string)



                        // (1) new Date()

// Date objects are created with the new Date() constructor.     

let currDate = new Date();
console.log(currDate); 
// The time shown is of GreenWhich time and not of india

//Or

console.log(new Date());

// to print the IST Time do the following

console.log(new Date().toLocaleString());  //IST Time

// The mre info timing is known by

console.log(new Date().toString());  
// The 530 in output means that IST is 5hr and 30min forward than GreenWhich Time 





                            // Date.now() 


// Returns the numeric value corresponding to the current time—the number
// of milliseconds elapsed since January 1, 1970 00:00:00 UTC

console.log(Date.now());
// This gives us the no of millisecond increasing since 1970






                        // (2) new Date(year, month, ...)


// 7 numbers specify year, month, day, hour, minute, second,
// and millisecond (in that order)

// Note: JavaScript counts *******months from 0 to 11.************

// January is 0. December is 11.


let date = new Date(2022, 07, 15, 9, 23, 40, 0)
console.log(date.toLocaleString());
// It follows the 24 hr clock system



                    // (3)new Date(dateString) 

// new Date(dateString) creates a new date object from a date string

var d = new Date("October 13, 2021 11:13:00");
console.log(d.toLocaleString());



                // (4) new Date(milliseconds) 

// new Date(milliseconds) creates a new date object as zero time plus milliseconds:

var d = new Date(0);
var d = new Date(1609574531435);
var d = new Date(86400000*2);
console.log(d.toLocaleString());

// The numbers above are unique which has unique time and date values



new Date().toLocaleTimeString(); // 11:18:48 AM-------Sets Only Time
// //---
new Date().toLocaleDateString(); // 11/16/2015--------Sets Only Date
// //---
new Date().toLocaleString(); // 11/16/2015, 11:18:48 PM-------Sets Both Date And Time

                 






























