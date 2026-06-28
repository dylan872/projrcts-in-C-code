#include <stdio.h>
#include <math.h>
extern float height;
extern float radius;
extern float const PI=3.14159;
float volume(float height,float radius)
{
return PI*pow(radius,2)*height;
}
float csa(float height,float radius)
{
return 2*PI*pow(radius,2)+PI*radius*2*height;
}
int main()
{
    float height=14;
    float radius=7;
    printf("the volume of this cylinder is %.2f\n",volume(height,radius));
    
    printf("the cross section area of this cylinder is %.2f\n",csa(height,radius));
    return 0;
}