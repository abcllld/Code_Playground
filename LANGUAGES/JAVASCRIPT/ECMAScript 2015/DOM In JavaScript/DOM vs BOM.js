                // ************** DOM vs BOM *******************


// 👉 The DOM is the Document Object Model, which deals with the document,
// the HTML elements themselves, e.g. document and all traversal you
// would do in it, events, etc.


// For Ex: 👨‍🏫
// change the background color to red
// document.body.style.background = "red";*****************************************
// (Try these in console in browser)


// 👉 The BOM is the Browser Object Model, which deals with browser components
// aside from the document, like history, location, navigator and screen
// (as well as some others that vary by browser). OR
// In simple meaning all the Window operations which comes under BOM are performed using BOM



// Let's see more practical on History object
// Functions alert/confirm/prompt are also a part of BOM:
// they are directly not related to the document,
// but represent pure browser methods of communicating with the user.


// alert(location.href); // shows current URL  *******************
// if (confirm("Want to Visit ThapaTechnical?")) {

//location.href = "https://www.youtube.com/thapatechnical"; // redirect the
///browser to another URL
// }



