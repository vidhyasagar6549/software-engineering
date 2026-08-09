#include <stdio.h>
void incrementFollowers(int *followers, int n) {
	
    
	int i;
    
    for ( i = 0; i < n; i++) {
    	*followers = *followers + 100;
        printf("Followers = %d\n", *followers);
        followers++;
    }
}
 main() {
        int followers[]= {250, 180, 320, 150, 400};
	 incrementFollowers(followers, 5);
}
