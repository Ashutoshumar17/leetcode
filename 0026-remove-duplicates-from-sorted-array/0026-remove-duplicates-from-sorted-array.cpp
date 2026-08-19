class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int off=1;
        int uniq=1;
        int cm=1;

        if (arr.size()==0){
            return 0;

        }

        while(cm<arr.size()){
            if(arr[cm]==arr[cm-1]){
                cm++;
            continue;    
            }
            arr[off]=arr[cm];
            off++;
            uniq++; 
            cm++;
        }
    return uniq;

        
    }
};