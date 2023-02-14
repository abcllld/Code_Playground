$(document).ready(function(){

// Save button functionality
$('.save').click(function() {
  var text = $("#text").val();
  localStorage.setItem("text", text);
  alert("Text Saved!");
})


// Italic button functionality
$('.italicFont').click(function(){
    $('#text').css("font-style", "italic");
});

// Bold button functionality
$('.boldFont').click(function(){
    $('#text').css("font-weight", "bold");
});

// Underline button functionality
$('.underlineFont').click(function(){
    $('#text').css("text-decoration", "underline");
});

// Strikethrough button functionality
$('.fontStrikethrough').click(function(){
    $('#text').css("text-decoration", "line-through");
});

// Change font dropdown functionality
$('.font_Style').change(function(){
    var font = $(this).val();
    $('#text').css("font-family", font);
});

// Change font size dropdown functionality
$('.fontSize').change(function(){
    var fontSize = $(this).val();
    $('#text').css("font-size", fontSize+"em");
});

// Right align button functionality
$('.fontRight_Aligned').click(function(){
    $('#text').css("text-align", "right");
});

// Left align button functionality
$('.fontLeft_Aligned').click(function(){
    $('#text').css("text-align", "left");
});

// Center align button functionality
$('.fontCenter_Aligned').click(function(){
    $('#text').css("text-align", "center");
});

// Justify align button functionality
$('.fontJustify_Aligned').click(function(){
    $('#text').css("text-align", "justify");
});

// Color picker button functionality
$('.color').change(function(){
    var color = $(this).val();
    $('#text').css("color", color);
});


// Redo Functionality
var undoStack = [];
var redoStack = [];
$('.redo').click(function() {
  var text = undoStack.pop();
  redoStack.push(text);
  $("#text").val(text);
});

// Undo Functionality
$('.undo').click(function() {
  var text = $("#text").val();
  undoStack.push(text);
  var previousText = redoStack.pop();
  $("#text").val(previousText);
});


// Minimize button functionality

$('.minimize').click(function() {
  $("#text").toggle();
});

// close function :
$(".close").click(function() {
    $("#container").hide();
});


// color function:

$(document).ready(function() {
    $("#myColor").click(function() {
      var colorPicker = $("<input type='color'>");
      colorPicker.on("change", function() {
        var selectedColor = colorPicker.val();
        document.execCommand("foreColor", false, selectedColor);
      });
      colorPicker.click();
    });
  });
  


});
