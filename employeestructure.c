#include<stdio.h>
#include<conio.h>
int main(void)
{
struct employee
{
    char eid[30];
    char ename[30];
    char address[30];
    char salary[30];
};
struct department
{
    char did[20];
    char dname[30];

};
struct admin
{
    struct employee emp[3];
    struct department dp[3];
}ad;

FILE *fptr ;
FILE *fptr1;
fptr=fopen("employee.txt","r");
fptr1=fopen("department.txt","r");
if(fptr==NULL)
{
    printf(stderr,"\n enter employee.txt\n");
    exit(1);
}
if(fptr1==NULL)
{
    printf(stderr,"\n enter department.txt");
    exit(1);
}
int i=0;

for(int i=0;i<3;i++)
{
    fscanf(fptr,"%s %s %s %s\n",&ad.emp[i].eid,&ad.emp[i].ename,&ad.emp[i].address,&ad.emp[i].salary);
    fscanf(fptr1,"%s %s\n",&ad.dp[i].did,&ad.dp[i].dname);
    printf("\nemployee and department details #%d\n",i+1);
    printf("\n..................................\n");
    printf("id\t name \t address\tsalary \t did \t dname");
    printf("\n%s\t",ad.emp[i].eid);
    printf("%s\t",ad.emp[i].ename);
    printf("%s\t",ad.emp[i].address);
    printf("\t %s \t",ad.emp[i].salary);
    printf("%s\t",ad.dp[i].did);
    printf("%s \t\n",ad.dp[i].dname);
}

while(fread(&ad,sizeof(struct admin),1,fptr))
{
    printf("eid=%s ename=%s address=%s salary=%s",&ad.emp[i].eid,&ad.emp[i].ename,&ad.emp[i].address,&ad.emp[i].salary);
}
while(fread(&ad,sizeof(struct admin),1,fptr1))
{
    printf("dname=%s did=%s",&ad.dp[i].did,&ad.dp[i].dname);
}

fclose(fptr);
fclose(fptr1);


FILE *fptr3;
   int a[100], n, element, pos=0;
   //int i;
    fptr3=fopen("employee.txt","r");

   printf("Enter element to search: ");
   scanf("%d",&element);
}


