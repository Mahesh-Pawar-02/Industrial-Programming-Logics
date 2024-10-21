//  Problem statement   :   Write a typescript program with contains on function named as Maximum. That function accepts array of
//  numbers and returns the second largest number from array.
/*  
    Input   :   23 89 6 29 56 45 77 32
    Output  :   Second Maximum number is 77

 */

    function Maximum(Arr : number[]) : number
    {
        var iCnt : number = 0;
        var iMax : number = 0
        var Second : number = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++) 
        {
            if(Arr[iCnt]>iMax)
            {
                Second = iMax;
                iMax = Arr[iCnt];
            }
            else if((Arr[iCnt] > Second) && (Arr[iCnt] != iMax))
            {
                Second = Arr[iCnt];
            }
        }   
        return Second;
    }
    
    var Values : number[] = [23,89,6,29,56,45,77,32];
    var iRet : number = 0;

    iRet = Maximum(Values);

    console.log("Second Maximum number is : "+iRet);

    //  TEST CASES : 
    /*  
        Input   :   23 89 6 29 56 45 77 32
        Output  :   Second Maximum number is 77
     
    */