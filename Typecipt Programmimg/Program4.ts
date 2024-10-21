/*
Problem statement : Write a typescript program which contains one function named as ChkPrime. That function should 
accept one number and it should return true if the given number is prime and otherwise return false. 

Input : 11 
Output : It is prime number 

*/

function CheckPrime(iNo : number) : any
{
    var iCnt : number = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            return false;
        }
    }
    return 0;
}

var value : number = 10;
var bRet : boolean;

bRet = CheckPrime(value);

if(bRet == true)
{
    console.log("It is prime number");
}
else
{
    console.log("It is not prime number");
}

/* 
TASE CASES : 
INPUT  : 11
OUTPUT : It is prime number

INPUT  : 10
OUTPUT : It is not prime number
*/