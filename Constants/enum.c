#include <stdio.h>

// Define an enumeration named Color
enum Match {
    CRICKET,    // 0
    FOOTBALL,  // 1
    TENNIS    // 2
};

int main() {
    


    // Using enum constants
    
        printf("The value of CRICKET %d\n",CRICKET);
    
        printf("The value of FOOTBALL %d\n",FOOTBALL);
    
        printf("The value of TENNIS %d\n",TENNIS);

       int total=CRICKET+FOOTBALL+TENNIS;
       

        printf("The total value of Matches %d\n",total);
    

    return 0;
}
