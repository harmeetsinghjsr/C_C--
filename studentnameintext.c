#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    struct student{
        int regno;
        char name[50];
        float percentage;
    };
    FILE *fp;
    fp=fopen("student_percentage.txt","w");
    int i,n;
    printf("How many students you want to add: ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("Enter registration number: ");
        scanf("%d",&s[i].regno);
        printf("Enter name: ");
        scanf("%s",&s[i].name);
        printf("Enter percentage: ");
        scanf("%f",&s[i].percentage);
        fwrite(&s[i],sizeof(s[i]),1,fp);
    }
    fclose(fp);
    fp = fopen("student_percentage.txt","r");
    for(i=0;i<n;i++){
        fread(&s[i],sizeof(s[i]),1,fp);
        printf("Registration number is %d",s[i].regno);
        printf("Name of the student is %s",s[i].name);
        printf("Percentage of the student is %.2f",s[i].percentage);
    }
    fclose(fp);
    getch();
}
