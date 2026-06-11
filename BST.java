import java.util.*;

class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}

public class Main {

    // Inserting Operation
    public static Node insert(Node root, int val) {
        if (root == null) {
            return new Node(val);
        }

        if (val < root.data) {
            root.left = insert(root.left, val);
        } else {
            root.right = insert(root.right, val);
        }

        return root;
    }

    public static Node buildTree(int arr[]) {
        Node root = null;

        for (int num : arr) {
            root = insert(root, num);
        }

        return root;
    }

    // InOrder Traversal
    public static void inOrder(Node root) {
        if (root == null) {
            return;
        }

        inOrder(root.left);
        System.out.print(root.data + " ");
        inOrder(root.right);
    }

    // Searching a Node

    public static boolean search(Node root, int key) {
        if (root == null) {
            return false;
        }
        if (root.data == key) {
            return true;
        }

        if (root.data > key) {
            return search(root.left, key);
        } else {
            return search(root.right, key);
        }
    }

    public static Node getInOrderSuccessor(Node root) {
        while (root != null && root.left != null) {
            root = root.left;
        }

        return root;
    }

    public static Node deleteNode(Node root, int key) {
        if (root == null) {
            return null;
        }

        if (root.data > key) {
            root.left = deleteNode(root.left, key);
        } else if (root.data < key) {
            root.right = deleteNode(root.right, key);
        } else {
            // key == root

            if (root.left == null) {
                return root.right;

            } else if (root.right == null) {
                return root.left;

            } else {
                Node inorderSuccessor = getInOrderSuccessor(root.right);
                root.data = inorderSuccessor.data;
                root.right = deleteNode(root.right, inorderSuccessor.data);
            }
        }

        return root;
    }

    public static void main(String[] args) {
        int[] arr = { 3, 2, 1, 5, 6, 4 };
        Node root = buildTree(arr);

        inOrder(root);
        System.out.println();

        // boolean ans = search(root, 10);
        // if (ans) {
        // System.out.println("Node present in the tree");
        // } else {
        // System.out.println("Node is not present in tree");
        // }
        root = deleteNode(root, 5);

        inOrder(root);
        System.out.println();
    }
}
