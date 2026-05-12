// Implementation of LL 

import java.util.*;

class Node{
    int data;
    Node next;
    
    public Node(int data){
        this.data = data;
        next = null;
    }
}

class Main{
    public static Node insertAtStart(Node head, int data){
        Node newNode = new Node(data);

        if(head==null){
            return newNode;
        }
        
        newNode.next = head;
        return newNode;
    }

    public static Node insertAtEnd(Node head,int data){
        Node newNode = new Node(data);

        if(head==null){
            return newNode;
        }

        Node temp = head;
        while(temp.next!=null){
            temp = temp.next;
        }

        temp.next = newNode;
        return head;
    }

    public static void display(Node head){
        Node temp = head;

        while(temp!=null){
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public static Node insertAtMiddle(Node head, int data, int index){

        Node newNode = new Node(data);

        // insert at beginning
        if(index == 1){
            newNode.next = head;
            return newNode;
        }

        Node curr = head;
        int cnt = 1;

        while(cnt < index - 1 && curr.next != null){
            curr = curr.next;
            cnt++;
        }

        // invalid index
        if(curr == null){
            return head;
        }

        newNode.next = curr.next;
        curr.next = newNode;

        return head;
    }

    public static Node deleteAtStart(Node head){
        if(head==null){
            return head;
        }

        return head.next;
    }

    public static Node deleteAtEnd(Node head){

        // empty list
        if(head == null){
            return null;
        }

        // single node
        if(head.next == null){
            return null;
        }

        Node temp = head;

        while(temp.next.next != null){
            temp = temp.next;
        }

        temp.next = null;

        return head;
    }

    public static Node deleteAtMiddle(Node head, int index){

        if(head==null){
            return null;
        }

        // delete first node
        if(index == 1){
            return head.next;
        }
        
        int cnt = 1;
        Node curr = head;
        while(cnt<index-1 && curr.next!=null){
            curr = curr.next;
            cnt++;
        }

        if(curr.next == null){
            return head;
        }

        curr.next = curr.next.next;

        return head;
    }

    public static void main(String [] args){
        Node head = new Node(10);
        head = insertAtStart(head,20);
        display(head);
        head = insertAtEnd(head,30);
        display(head);
        head = insertAtMiddle(head,40,2);
        display(head);
        // head = deleteAtStart(head);
        // display(head);
        // head = deleteAtEnd(head);
        // display(head);
        head = deleteAtMiddle(head,2);
        display(head);
    }
}
