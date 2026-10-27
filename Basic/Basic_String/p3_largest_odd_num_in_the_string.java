package Basic.Basic_String;

public class p3_largest_odd_num_in_the_string {
    public static String largestOddNumber(String num) {
        int ind = -1;
        for(int i=num.length()-1; i>=0; i--){
            if((num.charAt(i)-'0') % 2 == 1){
                ind = i;
                break;
            }
        }
        if(ind == -1) return "";
        return num.substring(0,ind+1);
    }
    public static void main(String[] args) {
        String s = "129457235";
        System.out.println(largestOddNumber(s));
    }
}
