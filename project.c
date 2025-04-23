#include <stdio.h>
#include <math.h>
int square()
{
    printf("Enter the side of square:");
    float a;
    scanf("%f", &a);
    float Area = a * a;
    printf("The area of square is %f*%f=%f\n", a, a, Area);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
int rectangle()
{
    float l;
    float b;
    printf("Enter the length of rectangle:");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle:");
    scanf("%f", &b);
    float Area = l * b;
    printf("The area of rectangle is %f*%f=%f\n", l, b, Area);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
int triangle()
{
    float a;
    float b;
    float c;
    printf("Enter the sides of traingle:");
    scanf("%f %f %f ", &a, &b, &c);
    float s = (a + b + c) / 2;
    float t = s * (s - a) * (s - b) * (s - c);
    float Area = sqrt(t);
    printf("The area of triangle is s=(%f+%f+%f)/2\n", a, b, c);
    printf("s*(s-%f)(s-%f)(s-%f)\n", a, b, c);
    printf("%f\n", Area);
    if (a + b > c && a + c > b && b + c > a)
    {

        // Drawing the triangle
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Triangle with sides %f, %f, and %f cannot be formed.\n", a, b, c);
    }
}
int parallelogram()
{
    float w;
    float i;
    printf("Enter the base of parallelogram:");
    scanf("%f", &w);
    printf("Enter the height of parallelogram:");
    scanf("%f", &i);
    float Area = w * i;
    printf("The area of parallelogram is%f*%f=%f\n", w, i, Area);
    for (int i = 0; i < w; i++)
    {
        // Print spaces before each row
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        // Print asterisks for the parallelogram
        for (int j = 0; j < w; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
}
int trapezium()
{
    float p;
    float q;
    float h;
    printf("Enter the sides which are parallel:");
    scanf("%f%f", &p, &q);
    printf("Enter teh height of trapezium:");
    scanf("%f", &h);
    float Area = (1 / 2) * (p + q) * h;
    printf("The area of trapezium is (1/2)(%f+%f)%f=%f\n", p, q, h, Area);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h + q; j++)
        {
            if (j >= (h - i) && j < (h - i + p))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int circle()
{
    float z;
    printf("Enter the radius of circle:");
    scanf("%f", &z);
    float Area = 3.14 * z * z;
    printf("The area of circle is 3.14*%f*%f=%f\n", z, z, Area);
    int i, j;
    for (i = -z; i <= z; i++)
    {
        for (j = -z; j <= z; j++)
        {
            if (i * i + j * j <= z * z)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
int regular_polygon()
{
    float s;
    float n;
    printf("Enter teh no of sides of the polygon:");
    scanf("%f", &n);
    printf("Enter the side length:");
    scanf("%f", &s);
    float Area = (n * pow(s, 2)) / (4 * tan(3.14 / n));
    printf("The area of this polygon is %f\n", Area);
}
int cylinder()
{
    float r;
    float d;
    printf("Enter the radius of the base:");
    scanf("%f", &r);
    printf("Enter the height of cylinder:");
    scanf("%f", &d);
    float Area = 2 * 3.14 * r * d + 2 * 3.14 * r * r;
    float Volume = 3.14 * r * r * d;
    printf("The area of cylinder is 2*3.14*%f*%f+2*3.14*%f*%f=%f\n", r, d, r, r, Area);
    printf("The volume of cylinder is 3.14*%f*%f*%f=%f\n", r, r, d, Volume);
}
int cone()
{
    float y, u, o;
    printf("Enter the radius of the base:");
    scanf("%f", &y);
    printf("Enter the height of cone:");
    scanf("%f", &u);
    printf("Enter teh slant height of cone:");
    scanf("%f", &o);
    float Area = 3.14 * y * o + 3.14 * y * y;
    float Volume = (1 / 3) * 3.14 * y * y * u;
    printf("The area of cylindre is 3.14*%f*%f+3.14*%f*%f=%f\n", y, o, y, y, Area);
    printf("The volume of cylindre is (1/3)3.14%f*%f*%f=%f\n", y, y, u, Volume);
}
int sphere()
{
    float r;
    printf("Enter the radius of sphere:");
    scanf("%f", &r);
    float Area = 4 * 3.14 * r * r;
    float Volume = (4 / 3) * 3.14 * r * r * r;
    printf("The area of sphere is 4*3.14*%f*%f=%f\n", r, r, Area);
    printf("Thea volume of sphere is (4/3)3.14%f*%f*%f=%f\n", r, r, r, Volume);
}
int cube_or_cuboid()
{
    float a,b,c;
    printf("Enter the length of shape:");
    scanf("%f", &a);
    printf("Enter the bradth of shape:");
    scanf("%f", &b);
    printf("Enter the heigth of shape:");
    scanf("%f", &c);
    float Area = 2 * (a * b + b * c + c * a);
    float Volume = a * b * c;
    printf("The area of figure is 2*(%f*%f+%f*%f+%f*%f)=%f\n", a, b, b, c, c, a, Area);
    printf("The volume of the figure is %f*%f*%f=%f\n", a, b, c, Volume);
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < a; k++)
            {
                // Draw the edges of the cuboid
                if (i == 0 || i == c - 1 || j == 0 || j == b - 1 || k == 0 || k == a - 1)
                {
                    printf("*");
                }
                else
                {
                    // Draw the inside of the cuboid
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
int square_pyramid()
{
    float l, h, s;
    printf("Enter the base side length:");
    scanf("%f", &l);
    printf("Enter rthe heigth of pyramid:");
    scanf("%f", &h);
    printf("Enter the slant perpendicular length:");
    scanf("%f", &s);
    float Area = l * l + 2 * l * s;
    float Volume = (1 / 3) * l * l * h;
    printf("The area of square pyramid is %f*%f+2*%f*%f=%f\n", l, l, l, s, Area);
    printf("THe volume of square pyramid is (1/3)%f%f*%f=%f\n", l, l, h, Volume);
    for (int i = 0; i < l; i++)
    {
        // Print leading spaces
        for (int j = 0; j < l - i - 1; j++)
        {
            printf(" ");
        }

        // Print the pyramid base
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    printf("\n");

    printf("WELCOME TO THE PROGRAMME OF AREA VOLUME CALCULATION OF DIFFERENT SHAPES\n");
    printf("\n");
    printf("Which shape would you like to learn about ?\n");
    printf("Press  the appropriate number:\n");
    printf("1.Square\n");
    printf("2.Rectangle \n");
    printf("3.Traingle \n");
    printf("4.Parrallogram\n");
    printf("5.Trapezium\n");
    printf("6.Circle\n");
    printf("7.Regular polygon\n");
    printf("8.Cylinder\n");
    printf("9.Cone\n");
    printf("10.Sphere\n");
    printf("11.Cube or cuboid\n");
    printf("12.Square pyramid\n");

    printf("Enter the figure code:");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        square();
        break;
    case 2:
        
        rectangle();
        break;

    case 3:
        triangle();
        break;
    case 4:
        parallelogram();
        break;

    case 5:
        trapezium();
        break;

    case 6:
        circle();
        break;

    case 7:
        regular_polygon();
        break;
    case 8:
        cylinder();
        break;

    case 9:
        cone();
        break;

    case 10:
        sphere();
        break;

    case 11:
        cube_or_cuboid();
        break;

    case 12:
        square_pyramid();
        break;

    default:
        printf("Incorrect number entered:");
        return 0;
    }
}