// Challenge Time
// write a program that works out whether if a given year is a leap year or not?
// A normal year has 365 days, leap years have 366, with an extra day in february
//If a year is divisible by 4 then it is a leap year

var year = 2022;

if((year % 4 )=== 0){
    if((year % 100 ) ===0){
        if((year % 400 )=== 0){
            console.log('The year '+ year +' is a leap year');
        }
        else{
            console.log('The year '+ year +' is  not a leap year');
        }
    }
else{
    console.log('The year '+ year +' is  a leap year');
}
}

else{
console.log('The year '+ year+' is not a leap year');
}



// What is truthy and falsy values in Javascript?
// we have total 5 falsy values in javascript
// 👉 0,"",undefined,null,NaN,false** is false anyway********************************************

if (score = 0){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed

}



if (null){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed
    
}



if (undefined){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed
    
}




if (score = 0){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed
    
}




if (score = 10){
    console.log('Shit!We lose the game');//this time this wii be printed as no falsy values
}

else{
    console.log('Yeah! we won the game');///this part will not be console as it has one of the falsy values i.e 0
    
}




if (NaN){
    console.log('Shit!We lose the game');///this part will not be console as it has one of the falsy values i.e 0
}

else{
    console.log('Yeah! we won the game');//this will get printed
    
}




