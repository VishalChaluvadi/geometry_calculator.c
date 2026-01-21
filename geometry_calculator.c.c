#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int choice;
    int unitChoice;
    char again;
    char unit[3];

    double radius, length, width, height, side, base;
    double area, perimeter, surfaceArea, volume;

    const double PI = 3.14159;

    do {
        printf("\nSelect Unit:\n");
        printf("1. Centimeters (cm)\n");
        printf("2. Meters (m)\n");
        printf("Enter your choice: ");
        scanf("%d", &unitChoice);

        if (unitChoice == 1) 
		{
            strcpy(unit, "cm");
        }
        else if (unitChoice == 2)
		{
            strcpy(unit, "m");
        }
        else
		{
            printf("Invalid unit choice!\n");
            continue;
        }
        printf("\n===== GEOMETRY CALCULATOR =====\n");
        printf("2D SHAPES\n");
        printf("1. Circle (Area & Circumference)\n");
        printf("2. Rectangle (Area & Perimeter)\n");
        printf("3. Triangle (Area & Perimeter)\n");
        printf("\n3D SHAPES\n");
        printf("4. Sphere (Surface Area & Volume)\n");
        printf("5. Cylinder (Surface Area & Volume)\n");
        printf("6. Cube (Surface Area & Volume)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7)
		{
            printf("\nThank you for using the Geometry Calculator!\n");
            break;
        }

        switch (choice) 
		{
            case 1:
                printf("Enter radius (%s): ", unit);
                scanf("%lf", &radius);

                if (radius <= 0) 
				{
                    printf("Invalid radius!\n");
                    break;
                }

                area = PI * radius * radius;
                perimeter = 2 * PI * radius;

                printf("\nArea of Circle        : %.2lf %s²\n", area, unit);
                printf("Circumference         : %.2lf %s\n", perimeter, unit);
                break;

            case 2:
                printf("Enter length (%s): ", unit);
                scanf("%lf", &length);
                printf("Enter width (%s): ", unit);
                scanf("%lf", &width);

                if (length <= 0 || width <= 0) 
				{
                    printf("Invalid dimensions!\n");
                    break;
                }

                area = length * width;
                perimeter = 2 * (length + width);

                printf("\nArea of Rectangle     : %.2lf %s²\n", area, unit);
                printf("Perimeter             : %.2lf %s\n", perimeter, unit);
                break;

            case 3: 
                printf("Enter base (%s): ", unit);
                scanf("%lf", &base);
                printf("Enter height (%s): ", unit);
                scanf("%lf", &height);

                if (base <= 0 || height <= 0)
				 {
                    printf("Invalid dimensions!\n");
                    break;
                }

                area = 0.5 * base * height;
                perimeter = base + height + sqrt(base * base + height * height);

                printf("\nArea of Triangle      : %.2lf %s²\n", area, unit);
                printf("Perimeter             : %.2lf %s\n", perimeter, unit);
                printf("(Assuming right-angled triangle)\n");
                break;

            case 4:
                printf("Enter radius (%s): ", unit);
                scanf("%lf", &radius);

                if (radius <= 0)
				{
                    printf("Invalid radius!\n");
                    break;
                }

                surfaceArea = 4 * PI * radius * radius;
                volume = (4.0 / 3.0) * PI * radius * radius * radius;

                printf("\nSurface Area of Sphere: %.2lf %s²\n", surfaceArea, unit);
                printf("Volume of Sphere      : %.2lf %s³\n", volume, unit);
                break;

            case 5:
                printf("Enter radius (%s): ", unit);
                scanf("%lf", &radius);
                printf("Enter height (%s): ", unit);
                scanf("%lf", &height);

                if (radius <= 0 || height <= 0) 
				{
                    printf("Invalid dimensions!\n");
                    break;
                }

                surfaceArea = 2 * PI * radius * (radius + height);
                volume = PI * radius * radius * height;

                printf("\nSurface Area of Cylinder: %.2lf %s²\n", surfaceArea, unit);
                printf("Volume of Cylinder      : %.2lf %s³\n", volume, unit);
                break;

            case 6:
                printf("Enter side length (%s): ", unit);
                scanf("%lf", &side);

                if (side <= 0) 
				{
                    printf("Invalid side length!\n");
                    break;
                }

                surfaceArea = 6 * side * side;
                volume = side * side * side;

                printf("\nSurface Area of Cube: %.2lf %s²\n", surfaceArea, unit);
                printf("Volume of Cube      : %.2lf %s³\n", volume, unit);
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    return 0;
}

