
import java.util.*;
class Node{
    int data;
    Node left;
    Node right;

    Node(int data){
        this.data = data;
        left = null;
        right = null;
    }
}

class One{
    static int idx = -1;

    public static Node buildTree(int arr[]){
        idx++;
        if(arr[idx]==-1){
            return null;
        }

        Node newNode = new Node(arr[idx]);
        newNode.left = buildTree(arr);
        newNode.right = buildTree(arr);
        
        return newNode;
    }

    public static void preOrder(Node root){

        if(root==null){
            // System.out.print(-1 + " ");
            return;
        }

        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
    }

    public static void inOrder(Node root){
        
        if(root==null){
            // System.out.print(-1 + " ");
            return;
        }
        
        inOrder(root.left);
        System.out.print(root.data + " ");
        inOrder(root.right);
    }

    public static void postOrder(Node root){
                
        if(root==null){
            // System.out.print(-1 + " ");
            return;
        }
        
        postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.data + " ");
    }

    public static void levelOrder(Node root){
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);

        while(!q.isEmpty()){
            Node currNode = q.remove();

            if(currNode==null){
                System.out.println();
                if(q.isEmpty()){
                    break;
                }
                else{
                    q.add(null);
                }
            }
            else{
                System.out.print(currNode.data+" ");

                if(currNode.left!=null){
                    q.add(currNode.left);
                }
                
                if(currNode.right!=null){
                    q.add(currNode.right);
                }
            }
        }
    }
    public static void main(String [] args){
        int [] arr = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        Node root = buildTree(arr);
        // System.out.println(root.data);
        preOrder(root);
        System.out.println();
        inOrder(root);
        System.out.println();
        postOrder(root);
        System.out.println();
        levelOrder(root);
    }
}
