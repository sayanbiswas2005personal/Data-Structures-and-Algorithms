package Basic.Basic_String;
public class p1_reverse_string {
    public static  void reverseString(char[] s) {
        int low = 0,high = s.length-1;
        while(low < high){
            char temp = s[low];
            s[low++] = s[high];
            s[high--] = temp;
        }
    }
    public static void main(String[] args) {
        char[] s = {'h','e','l','l','o'};
        System.out.println(s);
        reverseString(s);
        System.out.println(s);
    }
}
