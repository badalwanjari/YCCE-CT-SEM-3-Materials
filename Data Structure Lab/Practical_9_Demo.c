#include <stdio.h>
#include <string.h>
#include <stdlib.h>
FILE *fp,*fp2;
typedef char* string;
struct student
{
    int reg;
    string name;
    string branch;
    float cgpa;
} st[10];
int main()
{
    string j;
    int ch = 1;
    FILE *fp;
    int i = 0;
    int choice;
    while (ch)
    {
        fp = fopen("file.txt", "a");
        printf("1. Display\n2. Add Student\n3. Search student by reg no.\n4. Exit\nEnter your Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            while (fscanf(fp, "%d\t%s\t%s\t%f", &st[i].reg,
                          &st[i].name, &st[i].branch, &st[i].cgpa) != EOF)
            {
                printf("\nreg no is %d", st[i].reg);
                printf("\nName is %s", st[i].name);
                printf("\nbranch is %s", st[i].branch);
                printf("\nCGPA is %f", st[i].cgpa);
                printf("\n\t---------------------------------");
                i++;
            }
            fclose(fp);
            break;
        case 2:
            fp = fopen("prac_9.txt", "a");
            printf("\nEnter reg no no:");
            scanf("%d", &st[i].reg);
            printf("\nEnter name:");
            scanf("%s", &st[i].name);
            printf("\nEnter branch:");
            scanf("%s", &st[i].branch);
            printf("\nEnter CGPA:");
            scanf("%f", &st[i].cgpa);
            fprintf(fp, "\n%d\t%s\t%s\t%f", st[i].reg, st[i].name,
                    st[i].branch, st[i].cgpa);
            fclose(fp);
            break;
        case 3:
            printf("\nSearch the Name of Employee:\n");
            scanf("%s", j);
            for (i = 0; i < 20; i++)
            {
                if (strcmp(j, st[i].name) == 0)
                {
                    printf("\nreg no\tNAME\tbranch\tCGPA");
                    printf("\n%d\t%s\t%s\t%f", st[i].reg, st[i].name,
                           st[i].branch, st[i].cgpa);
                }
            }
            break;
        case 4:
            exit(1);
        default:
            break;
        }
        printf("\npress 1 for continue:");
        scanf("%d", &ch);
    }
}
