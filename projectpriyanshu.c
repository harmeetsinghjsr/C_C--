#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void create_record();
void search_record();
void modify_record();
void delete_record();
void display_record();

struct student {
    int roll;
    char sec[10];
    char name[40];
    int marks; 
    float grade;


};

struct student s;
void main(){

    int ch;
    // clrscr();

    while(ch!=7)
    {
        // system("cls");
        printf("\t--------------------------------\n");
        printf("\t\t WELCOME TO CA EVALUATOR SYSTEM\n");
        printf("\t--------------------------------\n");
        


            printf("\t-----AVAILABLE FUNCTIONALITIES -------\n\n\n");
            printf("\t\t1: Create student record\n");
            printf("\t\t2: Display student record\n");
            printf("\t\t3: Search student record\n");
            printf("\t\t4: Delete student record\n");
            printf("\t\t5: Modify student record\n");
            printf("\t\t6: Exit\n");
            printf("\t\tEnter your choice : ");
            scanf("%d",&ch);

            switch(ch){
               case 1:
                // clrscr();
                        create_record();
                        break;
                case 2: 
                // clrscr();
                        display_record();
                        break;
                case 3: 
                // clrscr();
                        search_record();
                        break;
                case 4: 
                // clrscr();
                        delete_record();
                        break;
                case 5: 
                // clrscr();
                        modify_record();
                        break;
                case 6: exit(1);
                // case 7:exit(1);
                default:
                    printf("\n\t\t Wrong choice Enterd");


            }
            printf("\n\t\tPress any key to continue ");
            getch();
        }

}

void create_record(){
    FILE *fp;
    fp = fopen("std.txt","ab+");

    if(fp==NULL){
        printf("\n\t\tError: cannot open the file ");
        return;
    }
    else{
        printf("\t * previous stored data *");
    display_record();

    printf("\n\n\t** ENTER NEW STUDENT DATA **\n\n");
    printf("\n\n\t Enter student roll number: ");
    scanf("%d",&s.roll);
    fflush(stdin);
    printf("\n\t enter student name");
    gets(s.name);
    printf("\n\t\tEnter student section");
    gets(s.sec);
    printf("\n\t\tEnter student total marks: ");
    scanf("%d",&s.marks);
    printf("\n\t\tEnter student grade: ");
    scanf("%f",&s.grade);
    fwrite(&s,sizeof(s),1,fp);
    {
        printf("\n\n\t * student record inserted successfuly\n");
    }
   fclose(fp);
   printf("\n\t\t Updated Record !!\n");
   display_record();
    }
}
void display_record(){
     FILE *fp;
     fp=fopen("std.txt","rb");
     if(fp==NULL){ 
          printf("\n\t\tError : cannot open the file !!! ");
          return;
     }
        printf("\n\n\t ** Students Details are as follows \n");
        printf("\nRoll.No\tName of students\t Sections\tMarks\t\tGrade\n\n");
          while(fread(&s,sizeof(s),1,fp))
          {
               printf("%d\t%s\t%s \t\t%d\t\t%f\n",s.roll,s.name,s.sec,s.marks,s.grade);
          }
          fclose(fp);
}
     void search_record()
     {
          int ro,flag=0;
          FILE *fp;
          fp=fopen("std.txt","rb");
          if (fp==NULL)
          {
               printf("\n\t\tError: Cannnot open this file!!!");
               return;
          }
     
          printf("\n\nTEnter students rolll number which you want to search: ");
          scanf("%d",&ro);
          while(fread(&s,sizeof(s),1,fp)>0 && flag==0)
          {
           if (s.roll==ro)
           {
               flag=1;
               printf("\n\n\tSearch succesfull and students record is as follow: \n\n");
               printf("\nRoll.No\tName of student\tSection\t\tMarks\t\tGrade\n\n");
               printf("%d\t%s\t%s \t\t%d\t\t%f\n",s.roll,s.name,s.sec,s.marks,s.grade);
           }
          }
          if (flag==0)
          {
               printf("\n\n\t\t No such record is found !!!\n");
          }
fclose(fp);
     }
void delete_record()
{
     char name[40];
     unsigned flag=0;
     FILE *fp,*ft;
     fp=fopen("std.txt","rb");
     if (fp==NULL)
     {
          printf("\n\t\tError: Cannot open the file");
          return;
     }
     printf("\n\t ** Previous stored Data **");
     display_record();
     printf("\n\nEnter student name which you want to delete");
     scanf("%s",name);
     ft=fopen("stut.txt","ab+");
     while(fread(&s,sizeof(s),1,fp)==1)
     {
          if(strcmp(name,s.name)!=0)
          {
               printf("\n\t\t Record deletd succesfully\n");
               fwrite(&s,sizeof(s),1,ft);
          }
          else
          flag =1;
     }
     if (flag==0){
          printf("\n\n\t\t no searxh record found !!!");
     }
     fclose(fp);
     fclose(ft);
     remove("std.txt");
     rename("stut.txt","std.txt");
     printf("\n\t\t Updated Record !!\n");
     display_record();
}

void modify_record(){
    int ro,flag=0;
    FILE *fp;
    fp=fopen("stu.txt","rb+");
    if(fp==NULL){
        printf("\n\t\tError: cannot ope the file !!!");
        return;
    }
    printf("\n\n\tEnter roll number of student record you want to update");
    scanf("%d",&ro);
    printf("\n\t\t * previously stored record of given roll nummber *"
    );

    while(fread(&s,sizeof(s),1,fp)>0 && flag==0){
        if(s.roll==ro){
            flag =1;
            printf("\nroll.no\t name of student \t section \t marks \tgrade");
            printf("%d \t %s \t %s \t\t %d\t%f\n",s.roll,s.name,s.sec,s.grade);
            printf("\n** enter the new record**");

            printf("\n\tUpdated student rollnumber: ");
            scanf("%d",&s.roll);
            fflush(stdin);
            printf("\n\tupdated student name: ");
            gets(s.name);
            printf("\nupdated student section: ");
            gets(s.sec);
            printf("\n\tupdates student marks: ");
            scanf("%d",&s.marks);
            printf("\n\tupdates student grades");
            scanf("%s",&s.grade);
            fseek(fp,-(long)sizeof(s),1);
            fwrite(&s,sizeof(s),1,fp);
            printf("\n\n\trecord updated successfully check the display");

            
                
            
        }
    }
    if(flag == 0) {printf("\n\t\terror: something went wrong !!!");}
    fclose(fp);
}
void sort_record()
{
struct student temp;
struct student arr[50];

int i,j,k=0;
FILE *fp;
fp=fopen("stu.txt","rb");
if(fp==NULL)
{
    printf("\n\t\tError: Cannot open this file !!!\n");
}
i=0;
while(fread(&arr[i],sizeof(arr[i]),1,fp)==1)
{
    i++;k++;
}
for(i=0;i<k;i++)
{
    for(j=0;j<k-i-1;j++)
    {
        if (arr[j].roll>arr[j+1].roll)
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("\n\t\tAfter sorting students details !!\n\n");
for(i=0;i<k;i++)
{
    printf("\n\t\t%s\t%s\t\t%d\t\t\n",arr[i].roll,arr[i].name,arr[i].marks,arr[i].grade);

}

fclose(fp);

}
