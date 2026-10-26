package Basic.Basic_String;
public class p2_String_palindrome_check {
    public boolean isPalindrome(String s) {
        int low = 0,high = s.length()-1;
        while(low < high){
            while(low < high && !Character.isLetterOrDigit(s.charAt(low))) low++;
            while(low < high && !Character.isLetterOrDigit(s.charAt(high))) high--;
            if(Character.toLowerCase(s.charAt(low++)) != Character.toLowerCase(s.charAt(high--))) return false;
        }return true;
    }
    public static void main(String[] args) {
        String s = "sayan";
        p2_String_palindrome_check obj = new p2_String_palindrome_check();
        System.out.println(obj.isPalindrome(s) ? "True" : "False");
    }
}
