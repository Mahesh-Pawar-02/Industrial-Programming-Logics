
function CheckEven(No : number) : boolean
{
    if((No % 2) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

var Value : number = 11;
var Result : boolean;

Result = CheckEven(Value);
if(Result == true)
{
    console.log("It is even");
}
else
{
    console.log("It is odd");
}