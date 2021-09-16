class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr+l,arr+r+1);
        int ans = arr[k-1];
        return ans;
    }
};

//optimized solution:{see the method,but don't use it here - gives TLE)
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        set<int> s(arr+l,arr+r+1);
        set<int>::iterator i = s.begin();
        advance(i,k-1);
        return *i;
    }
};

//More optimization:
//see the editorial on GFG at : https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#
