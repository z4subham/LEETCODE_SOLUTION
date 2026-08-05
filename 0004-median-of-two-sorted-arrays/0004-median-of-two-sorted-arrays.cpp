class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() ;
        int n2 = nums2.size() ;
        
        int n = n1 + n2 ;

        int ind2 = n/2 ;
        int ind1 = ind2 - 1 ;

        int i=0 ; 
        int j=0 ;
        int ctr = 0 ;
        
        int ind1_el = -1 ;
        int ind2_el = -1 ;

        while(i<n1 && j<n2){
            if(nums1[i] <= nums2[j]){
                if(ctr == ind1){
                    ind1_el = nums1[i] ;
                }
                if(ctr == ind2){
                    ind2_el = nums1[i] ;
                }
                ctr++ ;
                i++ ;
            }
            else{
                if(ctr == ind1){
                    ind1_el = nums2[j] ;
                }
                if(ctr == ind2){
                    ind2_el = nums2[j] ;
                }
                ctr++ ;
                j++ ;
            }
        }
        while(i<n1){
            if(ctr == ind1){
                ind1_el = nums1[i] ;
            }
            if(ctr == ind2){
                ind2_el = nums1[i] ;
            }
            ctr++ ;
            i++ ;
        }

        while(j<n2){
            if(ctr == ind1){
                ind1_el = nums2[j] ;
            }
            if(ctr == ind2){
                ind2_el = nums2[j] ; 
            }
            ctr++ ;
            j++ ;
        }
        if(n%2 == 1){
            return ind2_el ;

        }
        return (double)(ind1_el + ind2_el) / 2.0 ;
    }
};