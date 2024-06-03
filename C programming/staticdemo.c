        #include<stdio.h>

        void Fun()
        {
            auto int i = 10;
            i++;
            printf("Value of i is : %d\n",i);
        }

        int main()
        {
            int no = 51;
            
            Fun();
            Fun();
            Fun();

            return 0;
        }