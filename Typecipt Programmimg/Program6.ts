//  Problem statement   :   Write a typescript program with contains on function named as Maximum. That function accepts array of
//  numbers and returns the largest number from array.
/*  
    Input   :   23 89 6 29 56 45 77 32
    Output  :   Maximum number is 89
 */


    function Maximum(Arr : number[]) : number
    {
        var iCnt : number = 0;
        var iMax : number = 0

        for(iCnt = 0; iCnt <= Arr.length; iCnt++) 
        {
            if(Arr[iCnt]>iMax)
            {
                iMax = Arr[iCnt];
            }
        }   
        return iMax;
    }
    
    var Values : number[] = [23,89,6,29,56,45,77,32];
    var iRet : number = 0;

    iRet = Maximum(Values);

    console.log("Maximum number is : "+iRet);

    //  TEST CASES : 
    /*  
        Input   :   23 89 6 29 56 45 77 32
        Output  :   Maximum number is 89
     
    */