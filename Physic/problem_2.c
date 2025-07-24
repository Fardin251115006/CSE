#include<stdio.h>
#include<math.h>
int main() 
{
   
    float λ1 = 530e-9;   
    float λ2 = 700e-9;   
    float θ1 = 65.0;     
    float θ1_rad, d, sint2, θ2_rad, θ2_deg;
    int m1 = 3;          
    int m2 = 2;          

   
    θ1_rad = θ1 * M_PI / 180.0;

    
    d = (m1 * λ1) / sin(θ1_rad);

    
    sint2 = (m2 * λ2) / d;

   
    if (sint2 > 1.0) {
        printf("Invalid result: sin(θ2) exceeds 1. No real solution.\n");
    } else {
        θ2_rad = asin(sint2);
        θ2_deg = θ2_rad * 180/ M_PI;

        
        printf("The second angle θ2: %.2f degrees\n", θ2_deg);
    }

    return 0;
}
