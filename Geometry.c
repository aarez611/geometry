#include<stdio.h>
#include<math.h>

void CYLINDER(){
    int choice;
    float height,radius,pi = 3.14;
    printf("_Enter your Choice_\n");
    printf(" 1. TOTAL SURFACE AREA \n" );
    printf(" 2. LATERAL SURFACE AREA\n" );
    printf(" 3. VOLUME\n" );
    printf(" Enter your Choice: " );
    scanf("%d",&choice);

    switch(choice){
        case 1: 
            printf(" Enter radius: ");
            scanf("%f",&radius);
            printf(" Enter height: ");
            scanf("%f",&height);
            float TSAC = (2*pi*radius*radius)+(2*pi*radius*height);
            printf("Total Surface Area of Cylinder: %.2f\n ",TSAC);
            break;

        case 2:
            printf(" Enter radius: "); 
            scanf("%f",&radius);
            printf(" Enter height: ");
            scanf("%f",&height);
            float LSAC = 2*pi*radius*height;
            printf("Lateral Surface Area of Cylinder: %.2f\n ",LSAC);
            break;

        case 3:
            printf(" Enter radius: ");
            scanf("%f",&radius );
            printf(" Enter height: ");
            scanf("%f",&height );
            float V = pi*radius*radius*height;
            printf("Volume of Cylinder: %.2f\n ",V);
            break;
           
        default:
            printf(" invalid choice\n ");    
        return;
    }
}


void TRIANGLE(){
    int choice;
    float side,height,radius,slantheight,pi = 3.14;
    printf("_Enter your Choice_\n");
    printf(" 1. PERIMETER\n" );
    printf(" 2. AREA\n" );
    printf(" 3. VOLUME\n" );
    printf(" 4. TOTAL SURFACE AREA - CONE\n" );
    printf(" 5. LATERAL SURFACE AREA - CONE\n" );
    printf(" 6. TOTAL SURFACE AREA - PYRAMID\n" );
    printf(" 7. LATERAL SURFACE AREA - PYRAMID\n" );
    printf(" Enter your Choice: " );
    scanf("%d",&choice);

    switch(choice){
        case 1: 
            printf(" Enter side: " );
            scanf("%f",&side );
            float perimeter = 3*side;
            printf(" Perimeter of Triangle: %.2f\n ",perimeter);
            break;

        case 2:
            printf(" Enter base: " );
            scanf("%f",&side );
            float height;
            printf(" Enter height: " );
            scanf("%f",&height );
            float area = (side*height)/2;
            printf("Area of Triangle: %.2f\n ",area);
            break;

        case 3:
            printf(" Enter radius: " );
            scanf("%f",&radius );
            printf(" Enter height: " );
            scanf("%f",&height );
            float volume = (pi*radius*radius*height)/3;
            printf("Volume of Cone: %.2f\n ",volume);
            break;
        
        case 4:
            printf(" Enter radius: " );
            scanf("%f",&radius );
            printf(" Enter height: " );
            scanf("%f",&height );
            printf(" Enter slant height: " );
            scanf("%f",&slantheight );
            float totalsurfacearea = (pi*radius)*(slantheight+radius);
            printf("Total Surface Area of Cone: %.2f\n ",totalsurfacearea);
            break;

        case 5:
            printf(" Enter radius: " );
            scanf("%f",&radius );
            printf(" Enter slant height: " );
            scanf("%f",&slantheight );
            float lateralsurfacearea = (pi*radius*slantheight);
            printf("Lateral Surface Area of Cone: %.2f\n ",lateralsurfacearea);
            break;

        case 6:
            printf(" Enter base: " );
            scanf("%f",&side );
            printf(" Enter height: " );
            scanf("%f",&height );
            float totalsurfaceareapyramid = ((2*side*height)+(side*side));
            printf("Total Surface Are of Pyramid: %.2f\n ",totalsurfaceareapyramid);
            break;

        case 7:
            printf(" Enter base: " );
            scanf("%f",&side );
            printf(" Enter height: " );
            scanf("%f",&height );
            float lateralsurfaceareapyramid = (2*side*height);
            printf("Lateral Surface Are of Pyramid: %.2f\n ",lateralsurfaceareapyramid);
            break;   

        default:
            printf(" invalid choice\n ");  
        return; 
    }
}


void RECTANGLE(){
    int choice;
    printf("_Enter your Choice_\n");
    printf(" 1. PERIMETER\n" );
    printf(" 2. AREA\n" );
    printf(" 3. VOLUME\n" );
    printf(" 4. DAIGNOL\n" );
    printf(" Enter your Choice: " );
    scanf("%d",&choice);

    float length;
    printf(" Enter Length: " );
    scanf("%f",&length );
    float breadth;
    printf(" Enter breadth: " );
    scanf("%f",&breadth );
    float height;
    printf(" Enter height: " );
    scanf("%f",&height );
   
    switch(choice){
        case 1: 
            printf("Perimeter of Rectangle: %.2f\n ",2*(length+breadth));
            break;

        case 2:
            printf("Area of Rectangle: %.2f\n ",length*breadth);
            break;

        case 3:
            printf("Volume of Rectangle: %.2f\n ",length*breadth*height);
            break;

        case 4:
            printf("daignol of Rectangle: %.2f\n ",sqrt((length*length)+(breadth*breadth)));
            break;
            
        default:
            printf(" invalid choice\n ");    
        return;
    }
}


void SQUARE(){
    int choice;
    printf("_Enter your Choice_\n");
    printf(" 1. PERIMETER\n" );
    printf(" 2. AREA\n" );
    printf(" 3. VOLUME\n" );
    printf(" 4. DAIGNOL\n" );
    printf(" Enter your Choice: " );
    scanf("%d",&choice);

    float side;
    printf(" Enter side: " );
    scanf("%f",&side);

    switch(choice){
        case 1: 
            printf("Perimeter of Square: %.2f\n ",4*side);
            break;

        case 2:
            printf("Area of Square: %.2f\n ",side*side);
            break;

        case 3:
            printf("Volume of Square: %.2f\n ",side*side*side);
            break;

        case 4:
            printf("Daignol of Square: %.2f\n ",side*1.414214);
            break;

        default:
            printf(" invalid choice\n ");    
        return;
    }
}


void CIRCLE(){
    int choice;
    printf("_Enter your Choice_\n");
    printf(" 1. CIRCUMFERENCE\n" );
    printf(" 2. AREA\n" );
    printf(" 3. VOLUME\n" );
    printf(" Enter your Choice: " );
    scanf("%d",&choice);

    float pi = 3.14;
    float radius;
    printf(" Enter radius: " );
    scanf("%f",&radius );

    switch(choice){
        case 1: 
            printf("Circuference of Circle: %.2f\n ",2*3.14159*radius);
            break;

        case 2:
            printf("Area of Circle: %.2f\n ",3.14*radius*radius);
            break;

        case 3:
            printf("Volume of Sphere: %.2f\n ",(4.0/3.0)*3.14*radius*radius*radius);
            break;

        default:
            printf(" invalid choice\n ");  
        return; 
    }
}


int main(){
    int choice;
    printf("_Choose Your SHAPE_\n");
    printf(" 1. CIRCLE \n" );
    printf(" 2. SQUARE \n" );
    printf(" 3. RECTANGLE \n" );
    printf(" 4. TRIANGLE \n" );
    printf(" 5. CYLINDER \n" );
    printf(" Enter your Choice: " );
    scanf("%d",&choice);

    switch(choice){
        case 1: 
            CIRCLE();
            break;
        case 2:
            SQUARE();
            break;
        case 3:
            RECTANGLE();
            break;
        case 4:
            TRIANGLE();
            break;
        case 5:
            CYLINDER();
            break;
        default:
            printf(" invalid choice\n ");    
        }
    return 0;
}