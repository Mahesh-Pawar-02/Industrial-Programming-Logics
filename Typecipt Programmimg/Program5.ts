/*
Problem statement : Write a typescript program which contains one function named as Fibonacci. That function accept 
one number from user and print Fibonacci series till that number. 
Input  : 21 
Output : 1  1   2   3   5   8   13  21 

*/

function Fibonacci(iNo : number, iNum1 : number, iNum2 : number, fib : number): number
{
    var iCnt : number = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt == iNo)
        {
            fib = value2+value3;
            fib = value3;
            value3 = fib;
        }
    }
    return fib;
}

var value1 : number = 21;
var value2 : number = 0;
var value3 : number = 1;
var fib : number = 0;
var iRet : number = 0;

iRet = Fibonacci(value1,value2,value3, fib);
console.log("Fibonacci series : "+iRet);

/* 
TASE CASES : 

INPUT  : 21
OUTPUT : 1  1   2   3   5   8   13  21 

*/