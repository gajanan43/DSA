import java.util.Scanner;

class Main {

    public static int kadanes(int arr[],int n){
        int sum=0;
        int maxSum = Integer.MIN_VALUE;

        for(int i=0;i<n;i++){
            //Adding the current element to the sum
            sum = sum + arr[i];

            //updating the maxSum if the current sum is greater than the maxSum
            if(sum>maxSum){
                maxSum = sum;
            }

            //If the sum is negative then we will reset the sum to 0 because we are looking for the maximum sum of a subarray and if the sum is negative then it will not contribute to the maximum sum of a subarray
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }
        
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("Enter the elements of the array:");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();  
        }

        int maxSum = kadanes(arr,n);
        System.out.println(maxSum);
    }
}
