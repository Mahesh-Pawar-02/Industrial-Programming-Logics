// 1071 Greatest Common Divisor of Strings

public class LeatCode1 {
    public String gcdOfStrings(String str1, String str2) 
    {
        // If concatenating str1 and str2 in different orders doesn't give the same result
        // then there's no common divisor string
        if (!(str1 + str2).equals(str2 + str1)) 
        {
            return "";
        }

        // Find the greatest common divisor of lengths
        int gcdLength = gcd(str1.length(), str2.length());

        // The largest string x that divides both str1 and str2
        return str1.substring(0, gcdLength);
    }

    // Function to find the greatest common divisor of two integers
    private int gcd(int a, int b) 
    {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        LeatCode1 solution = new LeatCode1();
        System.out.println(solution.gcdOfStrings("ABCABC", "ABC")); // Output: "ABC"
        System.out.println(solution.gcdOfStrings("ABABAB", "ABAB")); // Output: "AB"
        System.out.println(solution.gcdOfStrings("LEET", "CODE"));   // Output: ""
    }
}
