var myName='Rahul mishra';
console.log(myName);
// Note that special character such as % sign can not be used a s a variable name

var _myName='Raj';
var $myName='Divya';
var _my__Name='Ramesh';
var myAge=20
// var 1myName='Ajit';
// This can nor be used a s a variable name as it includes a number before  the var
console.log(_myName);


// Determining the type of data



// (1) String

var _myName='Raj';
console.log(_myName);


// (2) Number
 
var myAge=20
console.log(typeof(myAge));

// (3) Boolean

var iAmRahul = true;
console.log(iAmRahul);
console.log(typeof(iAmRahul));


// (4) Undefined

// When no value is defined to the variable then the result is undefined

var iAmHero;
console.log(iAmHero);
// This will be undefined

// NULL
var isIAmHero = null; 
console.log(isIAmHero);


// Will result in undefined
console.log(typeof(isIAmHero));

// this is also a bug as how nothing can be object.. **object------------------------------------------------------------------------------------------------------------------------------------------------------------BUG NO 1









var muName = 'Rahul';
var myPhoneNo = 9062846348;
// console.log(myName,myPhoneNo);
// OR
console.log(isNaN(myName));
console.log(isNaN(myPhoneNo));

if(isNaN(myPhoneNo));
{
    console.log('Please enter a valid no');

}

