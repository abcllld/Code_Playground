
                        // (3) Default Parameters

                        
// Default function parameters allow named parameters to be
// initialized with default values if no value or undefined is passed.

function multi(a,b){
    return a*b;
    }
    console.log(multi(7,8));
    
    // This will print 56 , OK
    
    
    function multi(a,b){
        return a*b;
        }
        console.log(multi(7,));
    
        // this will print NaN as both values are not given
    
    
        function multi(a,b=9){
            return a*b;
            }
            console.log(multi(7));
            // this will print 63 i.e the first no is passed to a and dif second is not present we can put it value in function itself
    