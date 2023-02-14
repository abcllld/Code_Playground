// Switch Statement
// Evaluates an expression, matching the expression's value to a
// case clause, and executes statements associated with that case.


// break
// Terminates the current loop, switch, or label 
// statement and transfers 
// program control to the statement following the terminated statement.



// continue
// Terminates execution of the statements in the current iteration of the 
// current or labeled loop, and continues execution of the loop with the 
// next iteration.

var area = 'triangle';
var PI = 3.142, l = 3, r = 5, h = 7;

if (area == 'circle') {
    console.log('The area of a circle is ' + PI * r ** 2);
}
else if (area == 'triangle') {
    console.log('The area of a triangle is ' + (l * h) / 2);
}
else if (area == 'rectangle') {
    console.log('The area of a rectangle is ' + (l * b));

}
else {
    console.log('please enter the valid data');
}

// BY SWITCH STATEMENT

var area = 'triangle';
var l = 4, b = 6, h = 8, pi = 3.142

switch (area) {
    case 'triangle':
        console.log('The area of the triangle is' + (l * h) / 2);
        break;
    case 'rectangle':
        console.log('The area of rectangle is' + (l * b));
        break;
    case 'circle':
        console.log('The area of the circle is' + pi * l ** 2);
        break;
    case 'square':
        console.log('The area of the square is' + l * l);
        break;
    default:
        console.log('Please enter a valid data');

}
