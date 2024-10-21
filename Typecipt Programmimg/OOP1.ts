function Addition(No1 : number, No2 : number) : number
{
    var Ans : number = 0;
    Ans = No1 + No2;
    return Ans;
}

function Substraction(No1 : number, No2 : number) : number
{
    var Ans : number = 0;
    Ans = No1 - No2;
    return Ans;
}

var Valule1 : number = 11;
var Valule2 : number = 10;
var Result : number = 0;

Result = Addition(Valule1, Valule2);
console.log("Addition is : "+Result);

Result = Substraction(Valule1, Valule2);
console.log("Substraction is : "+Result);