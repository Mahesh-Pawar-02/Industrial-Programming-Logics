
class node
{
    public int data;
    public node next;

    public node(int no)
    {
        data = no;
        next = null;
    }
}

class SinglyLL
{
    private node first;
    private int Count;

    public SinglyLL()
    {
        first = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if(first == null)   // LL is empty
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node(no);

        if(first == null)   // LL is empty
        {
            first = newn;
        }
        else
        {
            node temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        Count++;
    }

    public void InsertAtPos(int no, int ipos){}

    public void DeleteFirst()
    {
        if(first == null)       // LL is empty
        {
            return;
        }
        else if(first.next == null) // LL contains single node
        {
            first = null;
        }
        else        // LL contains more than one node
        {
            first = first.next;
        }
        Count--;
    }
    
    public void DeleteLast()
    {
        if(first == null)       // LL is empty
        {
            return;
        }
        else if(first.next == null) // LL contains single node
        {
            first = null;
        }
        else        // LL contains more than one node
        {
            node temp= first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }
        Count--;
    }
    
    public void DeleteAtPos(int ipos){}

    public void Display()
    {
        node temp = first;

        System.out.println("Elements of the Linked List are : ");

        while(temp != null)
        {
                System.out.print("| "+ temp.data +" |->");
                temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return Count;
    }
}

class Program414
{
    public static void main(String arg[])
    {
        int iRet = 0;

        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteFirst();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);

        obj.DeleteLast();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are : "+iRet);
    }
}