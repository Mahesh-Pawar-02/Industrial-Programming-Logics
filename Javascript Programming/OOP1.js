function Addition(No1, No2) {
    var Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
function Substraction(No1, No2) {
    var Ans = 0;
    Ans = No1 - No2;
    return Ans;
}
var Valule1 = 11;
var Valule2 = 10;
var Result = 0;
Result = Addition(Valule1, Valule2);
console.log("Addition is : " + Result);
Result = Substraction(Valule1, Valule2);
console.log("Substraction is : " + Result);
