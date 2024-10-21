/*
Problem statement : Write a typescript program which contains arrow function named as ChkArmstrong. That function should 
accept one number and check whether number is Armstrong number or not. 

INPUT  : 153
OUTPUT : It is Armstrong number 

*/

function ChkArmstrong(iNo : number) : any
{
    var iRem : number = 0;
    var iSum : number = 0;
    var temp : number = iNo;

    while(iNo > 0)
    {
        iRem = iNo % 10;
        iSum = (iSum) + (iRem * iRem * iRem);
        iNo = iNo / 10;
    }
    
    if(temp == iSum)
    {
        return true;
    }
    return false;
}

var value : number = 153;
var bRet : boolean;

bRet = ChkArmstrong(value);

if(bRet == true)
{
    console.log("It is Armstrong number");
}
else
{
    console.log("It is not Armstrong number");
}

/* 
TASE CASES : 
INPUT  : 153
OUTPUT : It is Armstrong number

INPUT  : 150
OUTPUT : It is not Armstrong number
*/