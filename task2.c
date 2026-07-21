#include <stdio.h>
#include <string.h>


const char* get_crease(int n, int x) {
  
    if (n == 1) {
        return "Valley";
    }

    
    int mid = 1 << (n - 1); 

    if (x == mid) {
     
        return "Valley"; 
    } 
    else if (x < mid) {
        
        return get_crease(n - 1, x);
    } 
    else {
       
        int mirrored_x = mid - (x - mid);
        const char* left_val = get_crease(n - 1, mirrored_x);
        
        if (strcmp(left_val, "Valley") == 0) {
            return "Mountain";
        } else {
            return "Valley";
        }
    }
}
