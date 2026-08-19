class Solution {
public:

    int binarysearch(vector<int>& arr, int tar,int st,int end){
        if(st<=end){
            int mid=(st+end)/2;
            if(arr[mid]==tar) return mid;
            else if(arr[mid]<=tar) {
                return binarysearch(arr,tar,mid+1,end); 

        }else{
            return binarysearch(arr,tar,st,mid-1);
        }
        }
        return -1;
    }
    int search(vector<int>& arr, int tar) {
        int st=0, end=arr.size()-1;
        return binarysearch(arr,tar,st,end);
        
    }
};