import java.util.Scanner;

class Main{
    //Time complexity of linear search is O(n) and space complexity is O(1)
    public static boolean linearSearch(int arr[], int key){
        for(int i=0;i<arr.length;i++){
            if(arr[i] == key){
                return true;
            }
        }
        return false;
    }


    //Time complexity of binary search is O(log n) and space complexity is O(1)
    public static boolean binarySearch(int arr[],int key){
        int start = 0;
        int end = arr.length-1;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(arr[mid] == key){
                return true;
            }
            else if(arr[mid] < key){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int n = sc.nextInt();

        System.out.println("Enter the key element: ");
        int key = sc.nextInt();

        System.out.println("Enter the elements of the array: ");
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        // boolean ans = linearSearch(arr, key);
        boolean ans = binarySearch(arr, key);
        if(ans){    
            System.out.println("Element found in the array.");
        }
        else{
            System.out.println("Element not found in the array.");
        }
    }
}
