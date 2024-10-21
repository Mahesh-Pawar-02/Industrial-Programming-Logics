/*
Problem statement : Write a typescript program which contains one function named as DisplayFactors. That function 
should accept one number and display factors of that number. 

Input : 20 
Output : 1   2   4   5   10
*/

function DisplayFactors(iNo : number) : any
{
    var iCnt : number = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            console.log(iCnt);    
        }
    }
}

var value : number = 20;
var Factors : number = 0;

Factors = DisplayFactors(value);

/* 
TASE CASES : 
INPUT  : 20
OUTPUT : 1   2   4   5   10
*/