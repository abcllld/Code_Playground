// 1: Add Dec at the end of an array?
// 2: What is the return value of splice method?
// 3: update march to March (update)?
// 4: Delete June from an array?

// const months = ['Jan', 'march', 'April', 'June', 'July'];


// soln 1

const months = ['Jan', 'march', 'April', 'June', 'July'];
months.push('Dec');
console.log(months);

// this can also be done using splice method

const mahina = ['Jan', 'march', 'April', 'June', 'July'];
const newMahina = mahina.splice(4,0,'dec')  //or

// if we do not know the length then
const month = ['Jan', 'march', 'April', 'June', 'July'];

const newMonths = month.splice(4,0,'dec')
console.log(month);





// soln 2

// empty array


// soln 3

const moth = ['Jan', 'march', 'April', 'June', 'July'];
const updateMoth = moth.splice(1,1,'March')    //Hre march is at index1 we delete index 1 and updated march to 'March'
console.log(moth);

// if index no i.e, length is unknown then we use the following
const year = ['Jan', 'march', 'April', 'June', 'July'];
const indexOfYear = year.indexOf('June')

if(indexOfYear != -1){
    const updateMoth = moth.splice(indexOfYear,1,'june')    
}else{
    console.log('No Such dta is found!');

}



// /soln 4

const Year = ['Jan', 'march', 'April', 'June', 'July'];
const indexOfyear = year.indexOf('June')

if(indexOfYear != -1){
    const updateMoth = moth.splice(indexOfYear,1) //this will delte june from array
    console.log(moth);  
    console.log(updateMoth);    //*************This will show june as output because splice method returns the vale of the deleted element */

}else{
    console.log('No Such dta is found!');

}













