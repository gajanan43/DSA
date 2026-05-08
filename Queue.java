import java.util.*;
// Implementation of Queue using Array

// class Queue{
//     int arr[];
//     int front;
//     int rear;
//     int size;

//     Queue(int n){
//         arr = new int[n];
//         size = n;
//         front = rear=-1; 
//     }

//     void enqueue(int x){
//         if(isFull()){
//             System.out.println("Queue is full");
//         }
//         else if(isEmpty()){
//             front=rear=0;
//             arr[rear]=x;
//         }
//         else{
//             rear++;
//             arr[rear]=x;
//         }
//     }

//     void dequeue(){
//         if(isEmpty()){
//             System.out.println("Queue is empty");
//         }
//         else if(rear==front){
//             rear=front=-1;
//         }
//         else{
//             front++;
//         }
//     }

//     boolean isEmpty(){
//         return front==-1;
//     }
//     boolean isFull(){
//         return rear==size-1;
//     }
//     void display(){
//         if(isEmpty()){
//             System.out.println("Queue is empty");
//         }
//         else{
//             for(int i=front; i<=rear; i++){
//                 System.out.print(arr[i]+" ");
//             }
//             System.out.println();
//         }
//     }
// }

// class One{
//     public static void main(String[] args){
//         Queue q = new Queue(5);
//         q.enqueue(10);
//         q.enqueue(20);
//         q.enqueue(30);
//         q.enqueue(40);
//         q.enqueue(50);
//         q.display();
//         q.dequeue();
//         q.display();
//         q.dequeue();
//         q.display();
//     }
// }

// Implementation of Queue using Linked List

// class Node {
//     int data;
//     Node next;

//     Node(int x) {
//         data = x;
//         next = null;
//     }
// }

// class Queue {
//     Node head = null;
//     Node tail = null;

//     void enqueue(int x) {
//         Node newNode = new Node(x);
//         if(head == null){
//             head = tail = newNode;
//         }
//         else{
//             tail.next = newNode;
//             tail = newNode;
//         }
//     }

//     void dequeue() {
//         if(head == null){
//             System.out.println("Queue is empty");
//         }
//         else{
//             head = head.next;
//             if(head == null){
//                 tail = null;
//             }
//         }

//     }

//     void peek(){
//         if(head==null){
//             System.out.println("Queue is empty");
//         }
//         else{
//             System.out.println(head.data);
//         }
//     }

//     void display() {
//         if(head == null){
//             System.out.println("Queue is empty");
//         }
//         else{
//             Node temp = head;
//             while(temp != null){
//                 System.out.print(temp.data + " ");
//                 temp = temp.next;
//             }
//             System.out.println();
//         }
//     }

//     public static void main(String[] args) {
//         Queue q = new Queue();
//         q.enqueue(10);
//         q.enqueue(20);
//         q.enqueue(30);
//         q.enqueue(40);
//         q.enqueue(50);
//         q.display();
//         q.dequeue();
//         q.display();
//         q.dequeue();
//         q.display();
//     }

// }

// Implementation of Queue using Stack

// class Queue {
//     Stack<Integer> s1 = new Stack<>();
//     Stack<Integer> s2 = new Stack<>();

//     void enqueue(int x) {
//         s1.push(x);
//     }

//     void dequeue() {
//         if(s2.isEmpty()){
//             while(!s1.isEmpty()){
//                 s2.push(s1.pop());
//             }
//         }
//         if(s2.isEmpty()){
//             System.out.println("Queue is empty");
//         }
//         else{
//             s2.pop();
//         }
//     }

//     void peek(){
//         if(s2.isEmpty()){
//             while(!s1.isEmpty()){
//                 s2.push(s1.pop());
//             }
//         }
//         if(s2.isEmpty()){
//             System.out.println("Queue is empty");
//         }
//         else{
//             System.out.println(s2.peek());
//         }
//     }

//     void display() {
//         if(s1.isEmpty() && s2.isEmpty()){
//             System.out.println("Queue is empty");
//         }
//         else{
//             for(int i=s2.size()-1; i>=0; i--){
//                 System.out.print(s2.get(i)+" ");
//             }
//             for(int i=0; i<s1.size(); i++){
//                 System.out.print(s1.get(i)+" ");
//             }
//             System.out.println();
//         }
//     }

//     public static void main(String[] args) {
//         Queue q = new Queue();
//         q.enqueue(10);
//         q.enqueue(20);
//         q.enqueue(30);
//         q.enqueue(40);
//         q.enqueue(50);
//         q.display();
//         q.dequeue();
//         q.display();
//         q.dequeue();
//         q.display();
//     }
// }

// Implementation of Queue using Inbuild Queue
// import java.util.LinkedList;
// import java.util.ArrayDeque;

// class QueueX {
//     Queue<Integer> q = new LinkedList<>();

//     void enqueue(int x) {
//         q.add(x);
//     }

//     void dequeue() {
//         if(q.isEmpty()){
//             System.out.println("Queue is empty");
//         }
//         else{
//             q.remove();
//         }
//     }

//     void peek(){
//         if(q.isEmpty()){
//             System.out.println("Queue is empty");
//         }
//         else{
//             System.out.println(q.peek());
//         }
//     }

//     void display() {
//         if(q.isEmpty()){
//             System.out.println("Queue is empty");
//         }
//         else{
//             for(int x : q){
//                 System.out.print(x+" ");
//             }
//             System.out.println();
//         }
//     }

//     public static void main(String[] args) {
//         QueueX queue = new QueueX();
//         queue.enqueue(10);
//         queue.enqueue(20);
//         queue.enqueue(30);
//         queue.enqueue(40);
//         queue.enqueue(50);
//         queue.display();
//         queue.dequeue();
//         queue.display();
//         queue.dequeue();
//         queue.display();
//     }
// }

// class QueueX {
//     Queue<Integer> q = new ArrayDeque<>();

//     void enqueue(int x) {
//         q.add(x);
//     }

//     void dequeue() {
//         if (q.isEmpty()) {
//             System.out.println("Queue is empty");
//         } else {
//             q.remove();
//         }
//     }

//     void peek() {
//         if (q.isEmpty()) {
//             System.out.println("Queue is empty");
//         } else {
//             System.out.println(q.peek());
//         }
//     }

//     void display() {
//         if (q.isEmpty()) {
//             System.out.println("Queue is empty");
//         } else {
//             for (int x : q) {
//                 System.out.print(x + " ");
//             }
//             System.out.println();
//         }
//     }

//     public static void main(String[] args) {
//         QueueX queue = new QueueX();
//         queue.enqueue(10);
//         queue.enqueue(20);
//         queue.enqueue(30);
//         queue.enqueue(40);
//         queue.enqueue(50);
//         queue.display();
//         queue.dequeue();
//         queue.display();
//         queue.dequeue();
//         queue.display();
//     }
// }

// Implementation of Circular Queue using Array

// class Queue{
// int arr[];
// int front;
// int rear;
// int size;

// Queue(int n){
// arr = new int[n];
// size = n;
// front = rear=-1;
// }

// void enqueue(int x){
// if(isFull()){
// System.out.println("Queue is full");
// }
// else if(isEmpty()){
// front=rear=0;
// arr[rear]=x;
// }
// else{
// rear=(rear+1)%size;
// arr[rear]=x;
// }
// }

// void dequeue(){
// if(isEmpty()){
// System.out.println("Queue is empty");
// }
// else if(rear==front){
// rear=front=-1;
// }
// else{
// front=(front+1)%size;
// }
// }

// boolean isEmpty(){
// return front==-1;
// }
// boolean isFull(){
// return (rear+1)%size==front;
// }
// void display(){
// if(isEmpty()){
// System.out.println("Queue is empty");
// }
// else{
// for(int i=front; i!=rear; i=(i+1)%size){
// System.out.print(arr[i]+" ");
// }
// System.out.print(arr[rear]);
// System.out.println();
// }
// }

// public static void main(String[] args) {
// Queue q = new Queue(5);
// q.enqueue(10);
// q.enqueue(20);
// q.enqueue(30);
// q.enqueue(40);
// q.enqueue(50);
// q.display();
// q.dequeue();
// q.display();
// q.dequeue();
// q.display();
// }
// }
