                                //Perform CRUD

// Array.prototype

                                    // (1) push()

// The push() method adds one or more elements to the
// end of an array and returns the new length of the array.

const animal = ['cow', 'sheep','goat']
animals.push('chicken');        //Extra element is added ONLY at the end;
console.log(animal);

const count = animal.push('chicken');
console.log(count);
// will return the value as 5. ************BUT the length is four only....is is a bug

// we can also add multiple elements to the array
const animals = ['cow', 'sheep','goat'];
animals.push('chicken','buffalo','fish')
console.log(animals);
                            

                                    
                                // (2) unshift() 


const food = ['cow', 'sheep','goat']
food.unshift('chicken','fish');        //Extra element is added ONLY at the start;
console.log(food);

const counting = food.unshift('chicken');

console.log(counting);

                            
// other example

const myNumbers = [1,2,5,7]
myNumbers.unshift(3,4)
console.log(myNumbers);



                                //(4) pop

// The pop() method removes the last element from an array and returns
// that element. This method changes the length of the array.


const vegetable  = ['carrot','cabbage','potato','onion']
console.log(vegetable.pop());   //onion will be removed
console.log(vegetable);


                                //(5) shift

                                
// The shift() method removes the first element from an array and returns
// that removed element. This method changes the length of the array.


const fruit = ['gauva','MANGO', 'GRAPES', 'kiwi']
console.log(fruit.shift());
console.log(fruit);




                                // (6) splice

const months = ['Jan', 'march', 'April', 'June', 'July'];

// Let us we have to add dec at last

// const newMonths = months.splice(index no from where we will start here 4 i.e July, element no to be deleted, element to be added)

const newMonths = months.splice(4,0,'dec');
console.log(months);










