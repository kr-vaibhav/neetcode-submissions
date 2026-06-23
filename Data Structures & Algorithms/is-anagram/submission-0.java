class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length())return false;
        else{
        char tempArray[] = s.toCharArray();
        char tempArray1[] = t.toCharArray();
        Arrays.sort(tempArray);
        Arrays.sort(tempArray1);

        int i =0, j = 0;
        while( i < s.length()){
            if(tempArray[i]==tempArray1[j]){
                i++;
                j++;
            }else{
                return false;
            }
        }

        return true;
            
        }
    }
}
