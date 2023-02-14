                //  challenge Time 

// Display only 280 characters of a string like the one used in Twitter?


let myTweets = "Lorem Ipsum is simply dummy text of the printing andtypesetting industry. Lorem Ipsum has been the industry's standard dummy textever since the 1500s, when an unknown printer took a galley of type andscrambled it to make a type specimen book. It has survived not only fivecenturies, but also the leap into electronic typesetting, and more recently withdesktop publishing software like Aldus PageMaker including versions of LoremIpsum. Why do we use it? ";

let myActualTweet = myTweets.slice(0,280)
console.log(myActualTweet);
console.log(myActualTweet.length);  //Yes it is 280 character

