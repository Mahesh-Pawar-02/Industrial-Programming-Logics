1. We can overload the function by changing number of arguments

class Demo
{
    int Addition(int a, int b){}
    int Addition(int a, int b, int c){}
}

2. We can overload the function by changing datatyes of arguments

class Demo
{
    int Addition(int a, int b){}
    float Addition(float a, float b){}
}

3. We can overload the function by changing sequance of arguments

class Demo
{
    void Addition(int a, float b){}
    void Addition(float a, int b){}
}

4. We can not overload the function by changing its return value

class Demo
{
    void Addition(int a, int b){}
    int Addition(int a, int b){}
}

5. We can not overload the function by changing its access specifier

class Demo
{
    public:
    void Addition(int a, int b){}
    private:
    void Addition(int a, int b){}
}

