                    // Extracting String Characters


// There are 3 methods for extracting string characters:
// charAt(position)
// charCodeAt(position)
// Property access [ ]



                        // (1) The charAt() Method 


// The charAt() method returns the character at a
// specified index (position) in a string

let print = 'HELLO WORLD IN JAVASCRIPT';
console.log(print.charAt(1));
// This will print the letter "E" in HELLO WORLD



                    // (2) The charCodeAt() Method 

// The charCodeAt() method returns the unicode of the character at a specified index in a string:

// The method returns a UTF-16 code(an integer between 0 and 65535).

// The Unicode Standard provides a unique number for every
// character, no matter the platform, device, application,
// or language. UTF-8 is a popular Unicode encoding which
// has 88-bit code units.



let prints = 'HELLO WORLD IN JAVASCRIPT';
console.log(prints.charCodeAt(0));
// The output is 72 as the UNICODE of the Character "H" is "72"
































