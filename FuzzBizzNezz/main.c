//
//  main.c
//  FuzzBizzNezz
//
//  Created by Karlo Pagtakhan on 01/04/2016.
//  Copyright © 2016 AccessIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int Fuzz, Bizz, Nezz;
    int ctr = 1;
    
    // Get 3 integers
    printf("Enter a number#1 (Fuzz)");
    scanf("%d", &Fuzz);
    printf("Enter a number#2 (Bizz)");
    scanf("%d", &Bizz);
    printf("Enter a number#3 (Nezz)");
    scanf("%d", &Nezz);
    
    
    // Display numbers
    do{
        if (ctr % Fuzz == 0 && ctr % Bizz == 0 ){
            printf("FuzzBizz \n");
        } else if (ctr % Fuzz == 0){
            printf("Fuzz \n");
        }else if (ctr % Bizz == 0){
            printf("Bizz \n");
        }
        else{
            printf("%d \n", ctr);
        }
        ctr++;
        
    }while(ctr <= Nezz);
    
    return 0;
}
