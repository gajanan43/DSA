import java.util.*;

// Implementation of Stack using Array

// class Stack {
//     int arr[];
//     int top;
//     int size;

//     Stack(int n) {
//         arr = new int[n];
//         size = n;
//         top = -1;
//     }

//     void push(int x) {
//         if (top == size - 1) {
//             System.out.println("Stack is full");
//         } else {
//             top++;
//             arr[top] = x;
//         }
//     }

//     void pop() {
//         if (top == -1) {
//             System.out.println("Stack is empty");
//         } else {
//             top--;
//         }
//     }

//     int peek() {
//         if (top == -1) {
//             System.out.println("Stack is empty");
//             return -1;
//         } else {
//             return arr[top];
//         }
//     }

//     void display() {
//         if (top == -1) {
//             System.out.println("Stack is empty");
//         } else {
//             for (int i = top; i >= 0; i--) {
//                 System.out.print(arr[i] + " ");
//             }
//             System.out.println();
//         }
//     }

//     public static void main(String[] args) {
//         Stack s = new Stack(5);

//         s.push(10);
//         s.push(20);
//         s.push(30);

//         s.display();

//         s.pop();

//         s.display();

//         System.out.println(s.peek());
//     }
// }

// Implementation of Stack using ArrayList

// class Stack{
//     ArrayList<Integer> arr = new ArrayList<>();
//     int top = -1;

//     void push(int x){
//         if(top == arr.size() - 1){
//             arr.add(x);
//             top++;
//         } else {
//             top++;
//             arr.set(top, x);
//         }
//     }

//     void pop(){
//         if(top==-1){
//             System.out.println("Stack is empty");
//         } else {
//             top--;
//         }
//     }

//     int peek(){
//         if(top==-1){
//             System.out.println("Stack is empty");
//             return -1;
//         } else {
//             return arr.get(top);
//         }
//     }

//     void display(){
//         if(top==-1){
//             System.out.println("Stack is empty");
//         } else {
//             for(int i=top; i>=0; i--){
//                 System.out.print(arr.get(i) + " ");
//             }
//             System.out.println();
//         }
//     }
//     public static void main(String[] args) {
//         Stack s = new Stack();
//         s.push(10);
//         s.push(20);
//         s.display();
//         s.pop();
//         s.display();
//         System.out.println(s.peek());
//     }
// }

// Implementation of Stack using Linked List

// class Stack{
//     class Node{
//         int data;
//         Node next;

//         Node(int data){
//             this.data = data;
//             this.next = null;
//         }
//     }

//     Node top;

//     void push(int x){
//         Node newNode = new Node(x);
//         newNode.next = top;
//         top = newNode;
//     }

//     void pop(){
//         if(top==null){
//             System.out.println("Stack is empty");
//         } else {
//             top = top.next;
//         }
//     }

//     int peek(){
//         if(top==null){
//             System.out.println("Stack is empty");
//             return -1;
//         } else {
//             return top.data;
//         }
//     }

//     void display(){
//         if(top==null){
//             System.out.println("Stack is empty");
//         } else {
//             Node temp = top;
//             while(temp!=null){
//                 System.out.print(temp.data + " ");
//                 temp = temp.next;
//             }
//             System.out.println();
//         }
//     }

//     public static void main(String[] args) {
//         Stack s = new Stack();
//         s.push(10);
//         s.push(20);
//         s.display();
//         s.pop();
//         s.display();
//         System.out.println(s.peek());
//     }
// }

// Implementation of Stack using Vector
import java.util.Stack;

public class Main {

    public static void display(Stack<Integer> s) {
        if (s.empty()) {
            System.out.println("Stack is empty");
        } else {
            for (int i = s.size() - 1; i >= 0; i--) {
                System.out.print(s.get(i) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Stack<Integer> s = new Stack<>();

        s.push(10);
        s.push(20);

        display(s);

        s.pop();

        display(s);

        System.out.println(s.peek());
    }
}
