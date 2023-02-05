// var s;
// console.log(s); --undefined

// var a =" ";
// console.log(a);--empty

// var s = "this is first \"this\" is second "
// var s = "this is first \vthis is second " //will print "this is second" in next para
// var s = "this is first\b this is second "//will remove(backspace) t in first
// var s = "this is first\this is second " //same as \v
// var s = "this is first\\this is second " //apply a backslash(\)
// console.log(s);

// var n = null;
// console.log(n);


//OPERATORS
var x=10,y=5;
console.log(x&&y);//0
console.log(x||y); //10
console.log(!y); //true
console.log(!x); //false

console.log(true&&false); //f
console.log(true||false); //t
console.log(!true); //f
console.log(!false); //t


// Exponentiation
console.log(2*4); //8
console.log(2**4);//16
console.log((2**4)**3);//1792
console.log(10**-3);//0.001
console.log(2**-3);//0.125

// NOTE : *** is not allowed

var var_name;
console.log(var_name);

//increment and decrement
var x = 10;
console.log(++x); //11
console.log(x);//11
console.log(x++);//11
console.log(x++);//12
console.log(++x + --x); //14 + (14-1=13) = 27

var x=2;
console.log(" --x = " + (--x));
console.log(x);



var s1 = "hello";
var s2 = "world";
// console.log(s1 + " "+ s2);


var x = 10;
var s = "10";
console.log(x==s);//checks only value 
// console.log(typeof(x==s));

var y = 10;
var s1 = "10";
console.log(y===s1); //check the data type also
// console.log(typeof(y===s1));

//FOR LOOP IN JS
 var skills = ["coder","mechanic","electrician","engineer","plumber"] ;
 for(var i in skills){
    // console.log(skills);//more is the element inside the array more it will print longer//remove"plumber and then check the result once

     console.log(skills[i]);
 }








