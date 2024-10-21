
function Display(No : number, Value ? : number) : void
{
    console.log(No);
    if(Value != undefined)
    {
        console.log(Value);
    }
}

Display(11,21);
Display(11);