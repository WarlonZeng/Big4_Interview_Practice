class Solution {
    public int numJewelsInStones(String J, String S) {
        
        int jewels = 0;
        HashMap<Character, Integer> map = new HashMap<Character, Integer>();
        
        for (int i = 0; i < S.length(); i++) {
            map.put(S.charAt(i), map.getOrDefault(S.charAt(i), 0) + 1);
        }
        
        for (int i = 0; i < J.length(); i++) {
            if (map.get(J.charAt(i)) != null) {
                
                jewels = jewels + map.get(J.charAt(i));
            }
        }
        
        return jewels;
    }
}