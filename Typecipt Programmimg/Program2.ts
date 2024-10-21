//  Problem statement   :   Write a typescript program which contains one function named as Area. That function calculate area of circle .
//  Accepts value of radius from user and return its area. Default value PI should be 3.14 if it is not provided by the caller 
/*  
    Input   :   5
    Output  :   Area of circle is 78.5  
 */


function Area(PI : number, Radius : number) : number
{
    var Area : number = PI*Radius*Radius;
    return Area;
}

var PI : number = 3.14;
var Value : number = 5;
var iRet : number = 0;

iRet = Area(PI, Value);

console.log("Area of circle is : "+iRet);

//  TEST CASES :
/*  
    Input   :   5
    Output  :   Area of circle is 78.5      
 */