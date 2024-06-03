#include<iostream>
using namespace std;

template <class T>
class Arithematic
{
    public:
        T No1;
        T No2;

        Arithematic(T A, T B);
        T Addition();
        T Substraction();
};

template <class T>
Arithematic<T> :: Arithematic(T A, T B)
{
    this->No1 = A;
    this->No2 = B;
}

template <class T>
T Arithematic<T> :: Addition()
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

template <class T>
T Arithematic<T> :: Substraction()
{
    T Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithematic<int> obj1(11,10);
    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj1.Substraction();
    cout<<"Substraction is : "<<Ret<<"\n";
    
    return 0;
}