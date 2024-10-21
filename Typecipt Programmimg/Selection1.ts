
    function CheckEven(No : number): void
    {
        if((No % 2) == 0)
        {
            console.log("It is even number");
        }
        else 
        {
            console.log("It is odd number");
        }
    }

    var Value1 : number = 11;
    var Value2 : number = 10;

    CheckEven(Value1);
    CheckEven(Value2);