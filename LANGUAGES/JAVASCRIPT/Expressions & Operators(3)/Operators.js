                        // (1)--ASSIGNMENT OPERATORS

// ----It assign the value to its left operand

var x =10;
var y =10;
console.log('Is the value of X and Y Equal' + x==y);
// Although the value of x and y are equal then also the above will result in false

// ---------------------------------------------------------------BUG NO 3

console.log(x==y);
// This will result in True



                    // (2)-------ARITHEMATIC OPERATORS

// It takes a numerical value of its operand

console.log(6+8);
console.log(12-5);
console.log(12*4);
console.log(4/3);
console.log('Remainder Operator is', 46%4);


                    // Increment and Decrement operator

// Operator: x++ or ++x or x-- or --x
// If used postfix, with operator after operand (for example, x++),
// the increment operator increments and returns the value before incrementing.



var num = 15;                               
var newNum = num-- + 5;   //Doubt
console.log(newNum);      
console.log(num);

// The same is the case with the ++ operators Here



// Postfix increment operator means the expression is evaluated
// first using the original value of the variable and then the
// variable is incremented(increased).

// If used prefix, with operator before operand (for example, ++x),
// the increment operator increments and returns the value after incrementing.


var num = 15;
var newNum = --num + 5;  //doubt
console.log(num);
console.log(newNum);

// The same is the case with the ++ operators Here


// Prefix increment operator means the variable is incremented first and then
// the expression is evaluated using the new value of the variable.




                                // (3) Comparison operators

// A comparison operator compares its operands and
// returns a logical value based on whether the comparison is true.

var a =  10;
var b = 18;

// EQUAL TO
console.log(a==b);

// NOT EQUAL TO (!==)
console.log(a!=b);

// GREATOR THAN(>)
console.log(a>b);

// GREATOR THAN OR EQUAL Touch(>=)
console.log(a>=b);

// LESS THAN OR EQUAL Touch(<=)
console.log(a<=b);



                        // (4️)Logical operators
// Logical operators are typically used with Boolean (logical) values;
// when they are, they return a Boolean value.

var a = 20;
var b = -2;

// Logical AND (&&)(also called ampercent )
// The logical AND (&&) operator (logical conjunction) for a set of
// operands is true if and only if all of its operands are true.

console.log(a>b && b>-1);
// Here one of the conditions is false  and hence result is false

// Logical OR (||)
// The logical OR (||) operator (logical disjunction) for a set of
// operands is true if and only if one or more of its operands is true.
console.log(a>b || b<0);
console.log(a>b || b>0);
// Here at least one of them true and hence result is true

// Logical NOT (!)
// The logical NOT (!) operator (logical complement, negation)
// takes truth to falsity and vice versa.

console.log(!(a>b || b>-1));
console.log(false);
console.log(!false);
// A/Q as it is  the || operator it should be true but as we have applied ! ... so it turns out to be false


                            // (5) STRING OPERATORS 

// 5️⃣ String Concatenation(operators)
// The concatenation operator (+) concatenates two string values together,
// returning another string that is the union of the two operand strings.

console.log('Hello World');
console.log('Hello '+'  World');

var myName = 'Rahul';
console.log(myName+ ' Mishra');
    



                            // (6) CONDITIONAL OPERATOR


// Conditional (ternary) operator
// The conditional (ternary) operator is the only JavaScript operator
// that takes three operands
// This is the shorter version of if else

//by IF-ELSE
 var age = 19;

 if(age>=18){
    console.log('you are eligible');
 }
 else{
    console.log('you are not eligible')
 }

// by conditional
// variable_name = condition? value1; value2

var age = 19; 
console.log((age>=18) ? 'you are eligible': 'you are not eligible')









