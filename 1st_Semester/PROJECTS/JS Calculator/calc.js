// Displaying the Function : 

function display(val){
    document.getElementById('result').value+=val;
    
    return val;
}

// This purpose of this function is to accept the values(as parameter) which the user will click and return the same value in big wala box...wo jo uppar mein hai sabse bada box;...ye click kiya value kuch bhi ho sakta hai EXCEPT " = " equal ko chorke....

// Function to Solve() : 

function solve(){
let a = document.getElementById('result').value;

let b = eval(a);

document.getElementById('result').value = b;

return b;

}

// This function will be called when the user clicks the " = " operator...The variale a accepts the mathematical exp provided by user...THis exp will be evaluted and will be stored then in the varaiable b..The reult will be displayed in text box(bada wala).


// Clearing Screen wala function : 

function clear_Screen(){

    // THe clear_Screen fucntion is called when the user clicks the 'C' i.e clear button
    document.getElementById('result').value='';

    // THe value of result is set into an empty string....
}


// Note : Yad rakhna ki function ka name change bhi kar sakte hain ...jo name mein change karna hia html mein bhi jake wohi likhna padega...yahan mein koi direct hi apna marji se function mat bana dena..............