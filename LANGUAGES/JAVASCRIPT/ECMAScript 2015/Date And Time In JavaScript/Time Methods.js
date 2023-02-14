                            // Time Methods


// const curTime = new Date();

// how to GET the individual Time

console.log(curTime.getTime());

// The getTime() method returns the number of milliseconds since January 1, 1970

console.log(curTime.getHours());

// The getHours() method returns the hours of a date as a number (0-23)

console.log(curTime.getMinutes());
console.log(curTime.getSeconds());
console.log(curTime.getMilliseconds());

// how to SET the individual Time

let curTime = new Date();

console.log(curTime.setTime());
console.log(curTime.setHours(5));
console.log(curTime.setMinutes(5));
console.log(curTime.setSeconds(5));
console.log(curTime.setMilliseconds(5));