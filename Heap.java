import java.util.Comparator;
import java.util.PriorityQueue;

class Heap {
    int arr[] = new int[100];
    int size;

    public Heap() {
        arr[0] = -1;
        size = 0;
    }

    public void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                int temp = arr[parent];
                arr[parent] = arr[index];
                arr[index] = temp;

                index = parent;
            } else {
                return;
            }
        }
    }

    public void delete() {
        if (size == 0) {
            System.out.println("Nothing to delete");
            return;
        }

        // step1: put last element into first index
        arr[1] = arr[size];

        // Step2: remove last element
        size--;

        // Step3: take root node its correct position
        int i = 1;
        while (2 * i <= size) {

            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            int largest = i;

            if (leftIndex <= size && arr[leftIndex] > arr[largest]) {
                largest = leftIndex;
            }

            if (rightIndex <= size && arr[rightIndex] > arr[largest]) {
                largest = rightIndex;
            }

            if (largest != i) {
                int temp = arr[i];
                arr[i] = arr[largest];
                arr[largest] = temp;

                i = largest;
            } else {
                return;
            }
        }
    }

    public void heapify(int arr[], int n, int i) {
        int largest = i;
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;

        if (leftIndex <= n && arr[largest] < arr[leftIndex]) {
            largest = leftIndex;
        }
        if (rightIndex <= n && arr[largest] < arr[rightIndex]) {
            largest = rightIndex;
        }

        if (largest != i) {
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;

            heapify(arr, n, largest);
        }
    }

    public void heapSort(int arr[], int n) {
        int size = n;

        while (size > 1) {
            // Step1: swap first and last
            int temp = arr[size];
            arr[size] = arr[1];
            arr[1] = temp;

            size--;

            // Step2 :give root node its correct position
            heapify(arr, size, 1);

        }
    }

    public void display() {
        for (int i = 1; i <= size; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

class Main {

    public static void main(String[] args) {
        Heap hp = new Heap();
        // hp.insert(10);
        // hp.insert(20);
        // hp.insert(30);
        // // hp.insert(52);
        // // hp.insert(54);

        // hp.display();
        // hp.delete();
        // System.out.println();
        // hp.display();

        // int arr[] = { -1, 54, 53, 55, 52, 50 };
        // int n = 5;

        // for (int i = n / 2; i > 0; i--) {
        // hp.heapify(arr, n, i);
        // }
        // for (int i = 1; i <= n; i++) {
        // System.out.print(arr[i] + " ");
        // }

        // System.out.println();

        // hp.heapSort(arr,n);
        // for (int i = 1; i <= n; i++) {
        // System.out.print(arr[i] + " ");
        // }

        // Min-Heap
        PriorityQueue<Integer> pq = new PriorityQueue<>();

        // Add elements out of order
        pq.offer(30);
        pq.offer(10);
        pq.offer(20);

        // Peek at the front element
        System.out.println("Highest priority element: " + pq.peek()); // Outputs 10

        // Pull elements out in priority order
        while (!pq.isEmpty()) {
            System.out.print(pq.poll() + " "); // Outputs 10, then 20, then 30
        }
        System.out.println();

        // Max-Heap
        PriorityQueue<Integer> maxPq = new PriorityQueue<>(Comparator.reverseOrder());
        maxPq.offer(10);
        maxPq.offer(50);
        maxPq.offer(25);

        System.out.println(maxPq.poll());

    }
}
