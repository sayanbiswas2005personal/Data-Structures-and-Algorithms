package Basic.Basic_Array;
public class p4_reverse_array{
    public static void func(int[] arr){
        int start = 0,end = arr.length-1;
        while(start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    public static void main(String[] args) {
        int[] arr = {21,32,4,2,5,6,2};
        func(arr);
        System.out.println(arr);
    }
}