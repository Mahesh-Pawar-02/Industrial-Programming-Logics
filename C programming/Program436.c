    #include<stdio.h>

    void DisplayR()
    {
        static int iCnt = 1;

        if(iCnt <= 4)
        {
            printf("Jay Ganesh...\n");
            iCnt++;
            DisplayR();
        }
    }

    int main()
    {
        DisplayR();

        printf("End of application\n");
        return 0;
    }

// 1 : Memory for local variables
// 2 : Input parameters
// 3 : Address of Next Instruction
// 4 : Value of old EBP