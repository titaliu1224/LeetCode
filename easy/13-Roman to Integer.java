class Solution {
    public int romanToInt(String s) {
        Integer ans = 0;
        
        var roman = new HashMap<Character, Integer>();
        roman.put('I', 1);
        roman.put('V', 5);
        roman.put('X', 10);
        roman.put('L', 50);
        roman.put('C', 100);
        roman.put('D', 500);
        roman.put('M', 1000);
        
        int i = 0;
        for(i = 0; i < s.length() - 1; ++i){
            if(s.charAt(i) == 'I'){
                if(s.charAt(i + 1) == 'V'){
                    ans += 4;
                    i++;
                }
                else if(s.charAt(i + 1) == 'X'){
                    ans += 9;
                    i++;
                }
                else{
                    ans += roman.get(s.charAt(i));
                }
            }
            else if(s.charAt(i) == 'X'){
                if(s.charAt(i + 1) == 'L'){
                    ans += 40;
                    i++;
                }
                else if(s.charAt(i + 1) == 'C'){
                    ans += 90;
                    i++;
                }
                else{
                    ans += roman.get(s.charAt(i));
                }
            }
            else if(s.charAt(i) == 'C'){
                if(s.charAt(i + 1) == 'D'){
                    ans += 400;
                    i++;
                }
                else if(s.charAt(i + 1) == 'M'){
                    ans += 900;
                    i++;
                }
                else{
                    ans += roman.get(s.charAt(i));
                }
            }
            else{
                ans += roman.get(s.charAt(i));
            }
        }
        if(i < s.length())
            ans += roman.get(s.charAt(i));
        
        return (int)ans;
    }
}
