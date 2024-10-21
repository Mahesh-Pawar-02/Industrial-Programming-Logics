
function Demo() : string[]
{
    var Languages : string[] = ["C","Java","Python","Typescript"];
    return Languages;
}

var Arr : string[];
Arr = Demo();

console.log("Elements of array are : ");
var i : number = 0;

for(i = 0; i < Arr.length; i++)
{
    console.log(Arr[i]);
}