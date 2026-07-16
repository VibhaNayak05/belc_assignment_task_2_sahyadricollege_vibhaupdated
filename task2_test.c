#include <stdio.h>
#include <string.h>

// Updated logic matching the new Valley-centered sheet rules
const char* get_crease(int n, int x) {
    // Base Case: 1 fold is a Valley
    if (n == 1) {
        return "Valley";
    }

    // Calculate the midpoint: 2^(n-1)
    int mid = 1 << (n - 1); 

    if (x == mid) {
        // The absolute center crease is now always a Valley
        return "Valley"; 
    } 
    else if (x < mid) {
        // Left side stays identical to the previous stage
        return get_crease(n - 1, x);
    } 
    else {
        // Right side mirrors the left side and flips the value
        int mirrored_x = mid - (x - mid);
        const char* left_val = get_crease(n - 1, mirrored_x);
        
        if (strcmp(left_val, "Valley") == 0) {
            return "Mountain";
        } else {
            return "Valley";
        }
    }
}