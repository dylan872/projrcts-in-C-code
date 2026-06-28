#include<stdio.h>
#include<math.h>
#include<string.h>

float const PI=3.142;
float checkLongestSide(float a,float b,float c){
    if(a>=b &&a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }else {
        return c;
    }
}
int triangleCheck(float a,float b,float c){
   float temp=checkLongestSide(a,b,c);
    if(temp==a){
        if((b+c)>temp){
            return 1;
        }

    }else if(temp==b){
         if((a+c)>temp){
            return 1;
        }

    }else if(temp==c){
         if((b+a)>temp){
            return 1;
        }

    }
    return -1;
}
void Triangletype(float a,float b,float c){
    //right angled triangle==one side is 90 degree angle follows the rule of asquared +b squared =c squared
    int temp=checkLongestSide(a,b,c);
    int result=temp*temp;
   if(temp==a && (b*b+c*c)==result){
        printf("This triangle is a Right angled triangle\n");
    }else if(temp==b && (a*a+c*c)==result){
        printf("This triangle is a Right angled triangle\n");
    }else if(temp==c &&(a*a+b*b)==result){
        printf("This triangle is a Right angled triangle\n");
    }
    //iscosceles triangle has 2 sides that are equal to each other
     if( (a==b || a==c)&&!(a==b&&a==c)){
        printf("this triangle is an iscosceles triangle\n");
    }else if( (b==a|| b==c)&&!(b==a&&b==c)){
        printf("this triangle is an iscosceles triangle\n");
    }else if ((c==a||c==b)&&!(c==a&&c==b)){
       printf("this triangle is an iscosceles triangle\n");
    }

    //equilateral triangle has all sides equal
    if(temp==a && (a==b && a==c)){
        printf("this triangle is an equilateral triangle\n");
    }else if(temp==b&&( b==a&& b==c)){
        printf("this triangle is an equilateral triangle\n");
    }else if(temp==c&& (c==a&&c==b)){
       printf("this triangle is an equilateral triangle\n");
    }
    //a scalene triangle has no sides equal to the others
    if(a!=b&&a!=c&&b!=a&&b!=c&&c!=a&&c!=b){
        printf("This is a scalene triangle\n");
    }
}
void anglesFinder(float a,float b,float c){
    float sum=0;
    float result=0;
    printf("The angles on this triangle with sides %.2f,%.2f,%.2f are: \n",a,b,c);
    result=round((acos(((c*c)-((a*a)+(b*b)))/(-2*a*b)))*(180/PI));
    sum+=result;
    printf(" %f degrees\n",result);
   
    result=round((acos(((a*a)-((c*c)+(b*b)))/(-2*c*b)))*(180/PI));
    printf(" %f degrees\n",result);
    sum+=result;
  
    result=round((acos(((b*b)-((a*a)+(c*c)))/(-2*a*c)))*(180/PI));
    printf(" %f degrees\n",result);
    sum+=result;
    printf("The sum of all angles in a triangle add up to %.2f(+-1)degrees\n",sum);
}
void triangleArea(float a,float b,float c){
    float s=(a+b+c)/2;
     
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle with dimensions %.2f %.2f and %.2f is %.2f",a,b,c,area);
}

  
int main(){
    float a,b,c;
    char* answer;
   
    printf("enter the values of the sides: \n");
    scanf("%f\n%f\n%f",&a,&b,&c);
    if(triangleCheck(a,b,c)==1){
        Triangletype(a,b,c);
        
    }else if(triangleCheck(a,b,c)==-1){
        printf("These dimantions cannot form a triangle\n");
        return 0;
    }
    
        printf("do you wanna know the angles too? (yes/no): ");
        scanf("%s",answer);
        if(strcmp(answer,"yes")==0){
            anglesFinder(a,b,c);
        }else{
           printf("Thanks for vivsiting my program\n");
        }
        printf("do you also wanna know the area of this triangle?:(yes/no) ");
        scanf("%s",answer);
        if(strcmp(answer,"yes")==0){
            triangleArea(a,b,c);
        }else{
            printf("Thanks for visiting my program\n");
        }
    return 0;
}