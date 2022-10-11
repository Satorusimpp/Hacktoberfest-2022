class Solution {
    public int romanToInt(String s) {
        HashMap<Character,Integer>helper=new HashMap<>();
        initHelper(helper);
        int res=0;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() && helper.get(s.charAt(i))<helper.get(s.charAt(i+1)))
                res-=helper.get(s.charAt(i));
            else
                res+=helper.get(s.charAt(i));
        }
        return res;
    }
    private void initHelper(HashMap<Character, Integer> helper) {
        helper.put('M', 1000);
        helper.put('D', 500);
        helper.put('C', 100);
        helper.put('L', 50);
        helper.put('X', 10);
        helper.put('V', 5);
        helper.put('I', 1);

    }
}
