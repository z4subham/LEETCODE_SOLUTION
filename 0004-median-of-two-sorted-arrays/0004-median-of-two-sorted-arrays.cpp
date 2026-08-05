class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() ;
        int n2 = nums2.size(); 

        int m = n1 + n2 ;
        vector<int> nums3(m ,0) ;

        int i=0 ; 
        int j=0 ;
        int k=0 ;


        while(i<n1 && j<n2){
            if(nums1[i] <= nums2[j]){
                nums3[k] = nums1[i] ;
                i++ ;
                k++ ;
            }
            else{
                nums3[k] = nums2[j] ;
                k++ ;
                j++ ; 
            }
        }

        while(i<n1){
            nums3[k] = nums1[i] ;
            i++ ;
            k++ ;
        }
        while(j<n2){
            nums3[k] = nums2[j] ;
            k++ ;
            j++ ;
        }

        if(m % 2 == 1){
            return nums3[m/2] ;
        }
        return (nums3[m/2] + nums3[m/2 - 1]  ) / 2.0 ;
    }
};