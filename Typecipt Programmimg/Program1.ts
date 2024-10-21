//  Problem statement   :   Write a typescript program with contains on function named as Maximum. That function accepts three parameter and it should return largest value from therr input parameters.
/*  
    Input   :   23  89  6
    Output  :   Maximum number is 89
 */


function Maximum(Value1 : number, Value2 : number, Value3 : number) :   any
{
    if((Value1 >= Value2) && (Value2 <= Value1))
    {
        console.log("Maximum number is : "+Value1);
    }
    else if((Value2 >= Value1) && (Value2 >= Value3))
    {
        console.log("Maximum number is : "+Value2);
    }
    else
    {
        console.log("Maximum number is : "+Value3);
    }

}

var Value1 : number = 23;
var Value2 : number = 89;
var Value3 : number = 6;

Maximum(Value1,Value2, Value3);

//  TEST CASES : 
/*  
    Input   :   23  89  6
    Output  :   Maximum number is 89
 
*/