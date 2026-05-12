import java.util.Scanner;

class Main{
    public static void bubbleSort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    public static void selectionSort(int arr[], int n){
        for(int i=0;i<n-1;i++){
            int minIndex = i;

            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[minIndex]){
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    public static void insertionSort(int arr[], int n){
        for(int i=1;i<n;i++){
            int key = arr[i];
            int j = i-1;

            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }

    public static int partition(int arr[], int s, int e){
        int pivot = arr[s];

        int cnt = 0;
        for(int i=s+1;i<=e;i++){
            if(arr[i]<pivot){
                cnt++;
            }
        }

        int pivotIndex = s+cnt;

        int temp = arr[pivotIndex];
        arr[pivotIndex] = pivot;
        arr[s] = temp;

        int i=s;
        int j=e;

        while(i<pivotIndex && j>pivotIndex){
            while(arr[i]<pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }

            if(i<pivotIndex && j>pivotIndex){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
        return pivotIndex;
    }

    public static void quickSort(int arr[], int s, int e){
        if(s>=e){
            return;
        }
        int pivot = partition(arr, s, e);
        quickSort(arr, s, pivot-1);
        quickSort(arr, pivot+1, e);
    }

    public static void merge(int arr[],int s,int e){
        int mid = s+(e-s)/2;

        int len1 = mid-s+1;
        int len2 = e-mid;

        int left[] = new int[len1];
        int right[] = new int[len2];

        int mainArrayIndex = s;

        for(int i=0;i<len1;i++){
            left[i] = arr[mainArrayIndex++];
        }

        mainArrayIndex = mid+1;

        for(int i=0;i<len2;i++){
            right[i] = arr[mainArrayIndex++];
        }
        
        int i=0;
        int j=0;
       
        mainArrayIndex = s;

        while(i<len1 && j<len2){
            if(left[i]<right[j]){
                arr[mainArrayIndex++] = left[i++];
            }
            else{
                arr[mainArrayIndex++] = right[j++];
            }
        }
        while(i<len1){
            arr[mainArrayIndex++] = left[i++];
        }
        while(j<len2){
            arr[mainArrayIndex++] = right[j++];
        }

    }

    public static void mergeSort(int arr[], int s,int e){
        if(s>=e){
            return;
        }
        int mid = s+(e-s)/2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);

        merge(arr, s, e);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n = sc.nextInt();

        System.out.println("Enter elements in the array:");

        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        // bubbleSort(arr, n);
        // selectionSort(arr, n);
        // insertionSort(arr, n);
        // quickSort(arr,0,n-1);
        mergeSort(arr, 0, n-1);
        System.out.println("Sorted array:");
        for(int i=0; i<n; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
