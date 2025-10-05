
#include <stdio.h>
int main() 
{
    int choice, subchoice;
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nChoose Operator Category:\n");
    printf("1. Relational Operators\n");
    printf("2. Logical Operators\n");
    printf("3. Bitwise Operators\n");
    printf("4. Assignment Operators\n");
    printf("5. Increment/Decrement Operators\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("\n1. ==\n2. !=\n3. >\n4. <\n5. >=\n6. <=\n");
            printf("Enter your choice: ");
            scanf("%d", &subchoice);
            switch(subchoice) {
                case 1: printf("%d == %d : %d\n", a, b, a == b); break;
                case 2: printf("%d != %d : %d\n", a, b, a != b); break;
                case 3: printf("%d > %d : %d\n", a, b, a > b); break;
                case 4: printf("%d < %d : %d\n", a, b, a < b); break;
                case 5: printf("%d >= %d : %d\n", a, b, a >= b); break;
                case 6: printf("%d <= %d : %d\n", a, b, a <= b); break;
                default: printf("Invalid choice!\n");
            }
            break;
        case 2:
            printf("\n1. && (AND)\n2. || (OR)\n3. ! (NOT)\n");
            printf("Enter your choice: ");
            scanf("%d", &subchoice);
            switch(subchoice) {
                case 1: printf("a && b = %d\n", (a && b)); break;
                case 2: printf("a || b = %d\n", (a || b)); break;
                case 3: printf("!a = %d, !b = %d\n", !a, !b); break;
                default: printf("Invalid choice!\n");
            }
            break;
        case 3:
            printf("\n1. & (AND)\n2. | (OR)\n3. ^ (XOR)\n4. ~ (NOT)\n5. << (Left Shift)\n6. >> (Right Shift)\n");
            printf("Enter your choice: ");
            scanf("%d", &subchoice);
            switch(subchoice) {
                case 1: printf("a & b = %d\n", a & b); break;
                case 2: printf("a | b = %d\n", a | b); break;
                case 3: printf("a ^ b = %d\n", a ^ b); break;
                case 4: printf("~a = %d, ~b = %d\n", ~a, ~b); break;
                case 5: printf("a << 1 = %d, b << 1 = %d\n", a << 1, b << 1); break;
                case 6: printf("a >> 1 = %d, b >> 1 = %d\n", a >> 1, b >> 1); break;
                default: printf("Invalid choice!\n");
            }
            break;
        case 4:
            printf("\n1. =\n2. +=\n3. -=\n4. *=\n5. /=\n6. %%=\n");
            printf("Enter your choice: ");
            scanf("%d", &subchoice);
            switch(subchoice) {
                case 1: a = b; printf("a = %d\n", a); break;
                case 2: a += b; printf("a += b , a = %d\n", a); break;
                case 3: a -= b; printf("a -= b  ,a = %d\n", a); break;
                case 4: a *= b; printf("a *= b , a = %d\n", a); break;
                case 5: if (b != 0) { a /= b; printf("a /= b , a = %d\n", a); } else printf("Division by zero!\n"); break;
                case 6: if (b != 0) { a %= b; printf("a %%= b , a = %d\n", a); } else printf("Modulo by zero!\n"); break;
                default: printf("Invalid choice!\n");
            }
            break;
        case 5:
            printf("\n1. ++a (Pre-increment)\n2. a++ (Post-increment)\n3. --a (Pre-decrement)\n4. a-- (Post-decrement)\n");
            printf("Enter your choice: ");
            scanf("%d", &subchoice);
            switch(subchoice) {
                case 1: printf("++a = %d\n", ++a); break;
                case 2: printf("a++ = %d (after increment a = %d)\n", a++, a); break;
                case 3: printf("--a = %d\n", --a); break;
                case 4: printf("a-- = %d (after decrement a = %d)\n", a--, a); break;
                default: printf("Invalid choice!\n");
            }
            break;
        default:
            printf("Invalid main choice!\n");
    }
    return 0;
}