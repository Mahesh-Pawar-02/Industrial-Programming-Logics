// Function Defination
function Addition(Arr) {
    var Sum = 0;
    var i = 0;
    for (i = 0; i < Arr.length; i++) {
        Sum = Sum + Arr[i];
    }
    return Sum;
}
var Marks = [67, 89, 77, 90, 88];
// Function Call
var Result = 0;
Result = Addition(Marks);
console.log("Addition is : " + Result);
