//Create array of employees and search employee by
// 1. empid
// 2. name

#include<stdio.h>
#include<string.h>


int main()
{
    char emp[10][20] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

    int id;
    char name[20];

    int ch, f = 0;
    printf("1.Search by ID\n2.Search by Name\nEnter your choice :");
    scanf("%d", &ch);

    if(ch == 1)
    {
        printf("Enter ID - ");
        scanf("%d", &id);

        if(id >= 0 && id < 10)
        printf("Id %d - %s\n", id, emp[id]);
    }
    else if(ch == 2)
    {
        printf("Enter name - ");
        scanf(" %[^\n]", name);

        for(int i = 0; i < 10; i++)
        {
            if(strcmp(emp[i], name) == 0)
            {
                printf("Name is Present - %s - ID - %d\n", emp[i], i);
                f = 1;
                break;
            }
        }

        //if(!f)
        if(f == 0)
        printf("%s Is not Present\n", name);
    }

    return 0;
}
