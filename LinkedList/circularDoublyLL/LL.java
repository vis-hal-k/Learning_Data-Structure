import java.util.*;
public class LL
{
    static class Node
    {
        int value;
        Node next;
        Node(int value)
        {
            this.value=value;
            this.next=null;
        }   
    }

static Node head;

    public void print(){
        Node curr=head;
        while(curr!=null)
        {
            System.out.print(curr.value +" --> ");
            curr=curr.next;
        }
    }

    public void addFirst(int value )
    //
    {
        Node temp ;
        temp = head;
        Node t=new Node(value);
        t.next= null ;
        if(temp==null) {
            System.out.println("dghd");
            head=t;
            return;
        } 
        temp.next=t ;
      // t.next=head;
        temp = t ;
    }
    public void addLast(int value)
    {
        Node newNode=new Node(value);
        if(head==null)
        {
            head=newNode;
            return;
        }
        Node curr=head;
        while(curr.next!=null)
        {
            curr=curr.next;
        }
            head=newNode;
    }
    public static void main(String[] args) 
    {
        LL lst=new LL();
        lst.addFirst(2);
        lst.addFirst(4);
        lst.print();
    }
}