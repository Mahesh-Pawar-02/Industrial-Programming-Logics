# Name = lambda Parameters : Logic
# Name(___, ___, .....)

def Cube(A):
    return A**3

CubeX = lambda A : A**3

def main():
    Ret = CubeX(10)
    print("Cube is : ",Ret)

if __name__ == "__main__":
    main()