2 Write a program to implement Merge sort algorithm for sorting a list of integers in ascending order.
public class MyMergeSort {
    private int[] array;
    private int[] tempMergArr;
    private int length;
    public static void main(String a[]) {
        int[] inputArr = {45, 23, 11, 89, 77, 98, 4, 28, 65, 43};
        MyMergeSort mms = new MyMergeSort();
        mms.sort(inputArr);
        for (int i : inputArr) {
            System.out.print(i);
            System.out.print(" ");}}
    public void sort(int inputArr[]) {
        this.array = inputArr;
        this.length = inputArr.length;
        this.tempMergArr = new int[length];
        doMergeSort(0, length - 1);}
    private void doMergeSort(int lowerIndex, int higherIndex) {
        if (lowerIndex < higherIndex) {
            int middle = lowerIndex + (higherIndex - lowerIndex) / 2;
            // Below step sorts the left side of the array
            doMergeSort(lowerIndex, middle);
            // Below step sorts the right side of the array
            doMergeSort(middle + 1, higherIndex);
            // Now merge both sides
            mergeParts(lowerIndex, middle, higherIndex);}}
    private void mergeParts(int lowerIndex, int middle, int higherIndex) {
        for (int i = lowerIndex; i <= higherIndex; i++) {
            tempMergArr[i] = array[i];
        }
        int i = lowerIndex;
        int j = middle + 1;
        int k = lowerIndex;
        while (i <= middle && j <= higherIndex) {
            if (tempMergArr[i] <= tempMergArr[j]) {
                array[k] = tempMergArr[i];
                i++;
            } else {
                array[k] = tempMergArr[j];
                j++;
            }
            k++;}
        while (i <= middle) {
            array[k] = tempMergArr[i];
            k++;
            i++;}}}
Output::
4 11 23 28 43 45 65 77 89 98

2 Write a program to implement Merge sort algorithm for sorting a list of integers in ascending order.
public class MyMergeSort {
    private int[] array;
    private int[] tempMergArr;
    private int length;
    public static void main(String a[]) {
        int[] inputArr = {45, 23, 11, 89, 77, 98, 4, 28, 65, 43};
        MyMergeSort mms = new MyMergeSort();
        mms.sort(inputArr);
        for (int i : inputArr) {
            System.out.print(i);
            System.out.print(" ");}}
    public void sort(int inputArr[]) {
        this.array = inputArr;
        this.length = inputArr.length;
        this.tempMergArr = new int[length];
        doMergeSort(0, length - 1);}
    private void doMergeSort(int lowerIndex, int higherIndex) {
        if (lowerIndex < higherIndex) {
            int middle = lowerIndex + (higherIndex - lowerIndex) / 2;
            // Below step sorts the left side of the array
            doMergeSort(lowerIndex, middle);
            // Below step sorts the right side of the array
            doMergeSort(middle + 1, higherIndex);
            // Now merge both sides
            mergeParts(lowerIndex, middle, higherIndex);}}
    private void mergeParts(int lowerIndex, int middle, int higherIndex) {
        for (int i = lowerIndex; i <= higherIndex; i++) {
            tempMergArr[i] = array[i];
        }
        int i = lowerIndex;
        int j = middle + 1;
        int k = lowerIndex;
        while (i <= middle && j <= higherIndex) {
            if (tempMergArr[i] <= tempMergArr[j]) {
                array[k] = tempMergArr[i];
                i++;
            } else {
                array[k] = tempMergArr[j];
                j++;
            }
            k++;}
        while (i <= middle) {
            array[k] = tempMergArr[i];
            k++;
            i++;}}}
Output::
4 11 23 28 43 45 65 77 89 98

2 Write a program to implement Merge sort algorithm for sorting a list of integers in ascending order.
public class MyMergeSort {
    private int[] array;
    private int[] tempMergArr;
    private int length;
    public static void main(String a[]) {
        int[] inputArr = {45, 23, 11, 89, 77, 98, 4, 28, 65, 43};
        MyMergeSort mms = new MyMergeSort();
        mms.sort(inputArr);
        for (int i : inputArr) {
            System.out.print(i);
            System.out.print(" ");}}
    public void sort(int inputArr[]) {
        this.array = inputArr;
        this.length = inputArr.length;
        this.tempMergArr = new int[length];
        doMergeSort(0, length - 1);}
    private void doMergeSort(int lowerIndex, int higherIndex) {
        if (lowerIndex < higherIndex) {
            int middle = lowerIndex + (higherIndex - lowerIndex) / 2;
            // Below step sorts the left side of the array
            doMergeSort(lowerIndex, middle);
            // Below step sorts the right side of the array
            doMergeSort(middle + 1, higherIndex);
            // Now merge both sides
            mergeParts(lowerIndex, middle, higherIndex);}}
    private void mergeParts(int lowerIndex, int middle, int higherIndex) {
        for (int i = lowerIndex; i <= higherIndex; i++) {
            tempMergArr[i] = array[i];
        }
        int i = lowerIndex;
        int j = middle + 1;
        int k = lowerIndex;
        while (i <= middle && j <= higherIndex) {
            if (tempMergArr[i] <= tempMergArr[j]) {
                array[k] = tempMergArr[i];
                i++;
            } else {
                array[k] = tempMergArr[j];
                j++;
            }
            k++;}
        while (i <= middle) {
            array[k] = tempMergArr[i];
            k++;
            i++;}}}
Output::
4 11 23 28 43 45 65 77 89 98

4 .Write a. program to implement the BFS algorithm for a graph.

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
public class BreadthFirstSearchExampleNeighbourList {
    private Queue<Node> queue;
    static ArrayList<Node> nodes = new ArrayList<Node>();
    static class Node {
        int data;
        boolean visited;
        List<Node> neighbours;
        Node(int data) {
            this.data = data;
            this.neighbours = new ArrayList<>();
        }
        public void addNeighbours(Node neighbourNode) {
            this.neighbours.add(neighbourNode);
        }
        public List<Node> getNeighbours() {
            return neighbours;
        }
        public void setNeighbours(List<Node> neighbours) {
            this.neighbours = neighbours;
   }}
    public BreadthFirstSearchExampleNeighbourList() {
        queue = new LinkedList<Node>();
    }
    public void bfs(Node node) {
        queue.add(node);
        node.visited = true;
        while (!queue.isEmpty()) {
            Node element = queue.remove();
            System.out.print(element.data + "\t");
            List<Node> neighbours = element.getNeighbours();
            for (int i = 0; i < neighbours.size(); i++) {
                Node n = neighbours.get(i);
                if (n != null && !n.visited) {
                    queue.add(n);
                    n.visited = true;
                }}}}
 public static void main(String arg[]) {
        Node node40 = new Node(40);
        Node node10 = new Node(10);
        Node node20 = new Node(20);
        Node node30 = new Node(30);
        Node node60 = new Node(60);
        Node node50 = new Node(50);
        Node node70 = new Node(70);
        node40.addNeighbours(node10);
        node40.addNeighbours(node20);
        node10.addNeighbours(node30);
        node20.addNeighbours(node10);
        node20.addNeighbours(node30);
        node20.addNeighbours(node60);
        node20.addNeighbours(node50);
        node30.addNeighbours(node60);
        node60.addNeighbours(node70);
        node50.addNeighbours(node70);
        System.out.println("The BFS traversal of the graph is ");
        BreadthFirstSearchExampleNeighbourList bfsExample = new BreadthFirstSearchExampleNeighbourList();
        bfsExample.bfs(node40);
    }}
Output::
The BFS traversal of the graph is
40      10      20      30      60      50      70

6. Write a program to implement the backtracking algorithm for the sum of subsets problem.

import java.util.Scanner;
public class Subset {
    static int c = 0;
    public static void main(String[] args) {
        int w[] = new int[10];
        int n, d, i, sum = 0;
        int x[] = new int[10];
        Scanner in = new Scanner(System.in);
        System.out.println("********** SUBSET PROBLEM ************");
        System.out.println("Enter the number of elements: ");
        n = in.nextInt();
        System.out.println("Enter the elements in increasing order");
        for (i = 0; i < n; i++)
            w[i] = in.nextInt();
        System.out.println("Enter the value of d: ");
        d = in.nextInt();
        for (i = 0; i < n; i++)
            sum = sum + w[i];
        System.out.println("SUM =" + sum);
        if (sum < d || w[0] > d) {
            System.out.println("Subset is not possible ! ");
            System.exit(0);
        }
        subset(0, 0, sum, x, w, d);

        if (c == 0)
            System.out.println("Subset is not possible ! ");
        System.out.println("\n********** ********* *************");
    }

    static void subset(int cs, int k, int r, int x[], int w[], int d) {
        x[k] = 1;
        if (cs + w[k] == d) {
            c++;
            System.out.print("\nSolution " + c + " is {");
            for (int i = 0; i <= k; i++)
                if (x[i] == 1) {
                    System.out.print(w[i] + " ");
                }
            System.out.print("}");
        } else if ((cs + w[k] + w[k + 1]) <= d) {
            subset(cs + w[k], k + 1, r - w[k], x, w, d);
        }
        if ((cs + r - w[k]) >= d && (cs + w[k + 1]) <= d) {
            x[k] = 0;
            subset(cs, k + 1, r - w[k], x, w, d);}}}
Output::
********** SUBSET PROBLEM ************
Enter the number of elements:
6
Enter the elements in increasing order
1
3
5
6
7
8
Enter the value of d:
13
SUM =30

Solution 1 is {1 5 7 }
Solution 2 is {5 8 }
Solution 3 is {6 7 }
********** ********* *************

8. Write a program to implement greedy algorithm for job sequencing with deadlines.
import java.util.Arrays;
import java.util.Scanner;
class Job {
    int p; // for profit of a job
    int d; // for deadline of a job
    boolean v; // for checking if that job has been selected
    Job(int x, int y) // parameterised constructor
    {
        p = x;
        d = y;
        v = false;
    }}
class JobScheduling {
    static void out(Job jb[], int x) {
        for (int i = 0; i < jb.length; ++i)
            if (jb[i].p == x) {
                jb[i].v = false;
                return;
            }}
    public static void main(String args[]){
        Scanner scr = new Scanner(System.in);
        System.out.println("Enter the number of jobs");
        int n = scr.nextInt();
        int max = 0; // this is to find the maximum deadline
        Job jb[] = new Job[n];
        for (int i = 0; i < n; ++i) {
            System.out.println("Enter profit and deadline(p d)");
            int p = scr.nextInt();
            int d = scr.nextInt();
     max = Math.max(max, d); // assign maximum value of deadline to "max" variable
            jb[i] = new Job(p, d);
        }
        // Sort jobs by deadline in ascending order
        Arrays.sort(jb, (a, b) -> a.d - b.d);
        // Display sorted jobs
        System.out.println("The jobs are as follows ");
        for (int i = 0; i < n; ++i)
            System.out.println("Job " + i + " Profit = " + jb[i].p + " Deadline = " + jb[i].d);
        int count;
        int hold[] = new int[max];
        Arrays.fill(hold, -1); // Fill with -1 to indicate empty slots
        // Iterate through jobs in decreasing order of profit
        for (int i = 0; i < n; ++i) {
            count = jb[i].d - 1; // Start from the latest possible slot
            while (count >= 0) {
                if (hold[count] == -1) { // If slot is empty
                    hold[count] = jb[i].p;
                    jb[i].v = true;
                    break;
                } else { // If slot is occupied, check for a job with lower profit
                    if (jb[i].p > hold[count]) {
                        out(jb, hold[count]); // Remove the previous job
                        hold[count] = jb[i].p;
                        jb[i].v = true;
                        break;
                    }}
                count--;
       }}
        int profit = 0;
        for (int i = 0; i < max; ++i)
            if (hold[i] != -1)
                profit += hold[i];
        System.out.println("The maximum profit is " + profit);
    }
}
Output::
Enter the number of jobs
4
Enter profit and deadline(p d)
89
2
Enter profit and deadline(p d)
66
1
Enter profit and deadline(p d)
33
2
Enter profit and deadline(p d)
55
3
The jobs are as follows
Job 0 Profit = 66 Deadline = 1
Job 1 Profit = 89 Deadline = 2
Job 2 Profit = 33 Deadline = 2
Job 3 Profit = 55 Deadline = 3
The maximum profit is 210

12 .Write a program to implement Floyd’s algorithm for the all pairs shortest path problem.

import java.util.Scanner;
class Floyd {
    public static void main(String[] args) {
        int a[][] = new int[10][10];
        int i, j;
        Scanner in = new Scanner(System.in);
        System.out.println("***********FLOYD'S ALGORITHM**********");
        System.out.println("Enter the number of vertices: ");
        int n = in.nextInt();
        System.out.println("Enter the adjacency matrix");
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                a[i][j] = in.nextInt();
        System.out.println("Entered adjacency matrix is: ");
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                System.out.print(a[i][j] + "\t");
            }
            System.out.println();
        }
        floyd(a, n);
        System.out.println("All pair shortest path matrix:");
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++)
                System.out.print(a[i][j] + "\t");
            System.out.println();
        }}
    static void floyd(int a[][], int n) {
        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= n; j++)
                    a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
        }}
    static int min(int a, int b) {
        if (a > b)
            return b;
        else
            return a;
    }
}
Output::
***********FLOYD'S ALGORITHM**********
Enter the number of vertices:
3
Enter the adjacency matrix
1
4
78
23
6
1
4
78
23
Entered adjacency matrix is:
1       4       78
23      6       1
4       78      23
All pair shortest path matrix:
1       4       5
5       6       1
4       8       9
