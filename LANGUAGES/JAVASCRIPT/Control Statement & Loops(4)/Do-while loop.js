

// var num = 0;
// while(num <=10);{
// console.log(num); //If here left only then it will be infinite loop
// num++;
// }
// THIS IS WHILE LOOP

var num = 0;
do{
    console.log(num);
    num++;
}while(num <=10);

// THEY GAVE US THE SAME OUTPUT WITH SAME CODE , JUST AN EXTRA DO WORD IS ADDED

// IN WHILE LOOP, AT LEAST ONE CODE WILL BE PRINTED IRRESPECTIVE OF WHAT THE CONDITION IS BECAUSE IT FIRST EXECUTES THE LINE ONLY AND THEN IT CHECKS THE WHERE CONDITION IS SATISFIED OR NOT. FOR e.g,


var num = 20;
do{
    console.log(num);
    num++;
}while(num <=10);

// ALTHOUGH THIS CONDITION IS FALSE BUT IT WILL AT LEAST PRINT 20 BECAUSE BY LINE 23 IT WILL FIRST PRINT 20 USING LOG , AND THEN IT WILL CHECK THE CONDITION WHICH IS NOT THE CASE IN WHILE LOOP
