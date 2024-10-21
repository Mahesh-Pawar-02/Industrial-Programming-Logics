//  Problem statement   :   Write a typescript program with contains on function named as Summation. That function accepts array of
//  numbers and returns the Summation of each number from array.
/*  
    Input   :   23  6   7   4   5   7
    Output  :   Addition is 52
 */


    function Summation(Arr : number[]) : number
    {
        var iCnt : number = 0;
        var iSum : number = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++) 
        {
            iSum =  iSum + Arr[iCnt];
        }   
        return iSum;
    }
    
    var Values : number[] = [23,6,7,4,5,7];
    var iRet : number = 0;

    iRet = Summation(Values);

    console.log("Addition is : "+iRet);

    //  TEST CASES : 
    /*  
        Input   :   23  6   7   4   5   7
        Output  :   Addition is 52
     
    */