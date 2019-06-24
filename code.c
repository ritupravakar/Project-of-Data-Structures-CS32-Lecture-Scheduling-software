#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct node
{
        char day[20];
        char _time[20];
        int subcode;
        struct node* link;
}*listpointer;

int scode;
listpointer first = NULL;

listpointer timetable()
{
    listpointer first,temp;
    int i;
    first= (listpointer)malloc(sizeof(*temp));
    temp=first;
    for(i=0;i<50;i++)
    {
        listpointer temp1;

       temp1= (listpointer)malloc(sizeof(*temp));
       temp->link = temp1;
       temp=temp1;

    }

    temp = first;
  strcpy( temp->day , "Monday");
    strcpy(temp->_time ,"9am");
    temp->subcode = 01;
    temp=temp->link;

    strcpy(temp->day ,"Monday");
   strcpy (temp->_time,"10am");
    temp->subcode = 02;
    temp=temp->link;

   strcpy( temp->day ,"Monday");
   strcpy( temp->_time ,"11am");
    temp->subcode = 03;
    temp=temp->link;

  strcpy( temp->day ,"Monday");
  strcpy( temp->_time ,"12pm");
    temp->subcode = 04;
    temp=temp->link;

 strcpy( temp->day ,"Monday");
  strcpy(temp->_time ,"2pm");
    temp->subcode = 05;
    temp=temp->link;

strcpy( temp->day,"Monday");
    strcpy(temp->_time ,"3pm");
    temp->subcode = -1;
    temp=temp->link;




    strcpy(temp->day ,"Tuesday");
   strcpy( temp->_time ,"9am");
    temp->subcode = 01;
    temp=temp->link;

   strcpy( temp->day ,"Tuesday");
    strcpy(temp->_time ,"10am");
    temp->subcode = 06;
    temp=temp->link;

    strcpy( temp->day ,"Tuesday");
    strcpy(temp->_time ,"11am");
    temp->subcode = 04;
    temp=temp->link;

    strcpy( temp->day ,"Tuesday");
    strcpy(temp->_time ,"12am");
    temp->subcode = 01;
    temp=temp->link;

    strcpy( temp->day ,"Tuesday");
    strcpy(temp->_time ,"2pm");
    temp->subcode = 03;
    temp=temp->link;

    strcpy( temp->day ,"Tuesday");
    strcpy(temp->_time ,"3pm");
    temp->subcode = 03;
    temp=temp->link;

    strcpy( temp->day ,"Wednesday");
    strcpy(temp->_time ,"9am");
    temp->subcode = 03;
    temp=temp->link;

     strcpy( temp->day ,"Wednesday");
    strcpy(temp->_time ,"10am");
    temp->subcode = 06;
    temp=temp->link;

     strcpy( temp->day ,"Wednesday");
    strcpy(temp->_time ,"11am");
    temp->subcode = 05;
    temp=temp->link;

      strcpy( temp->day ,"Wednesday");
    strcpy(temp->_time ,"12pm");
   temp->subcode = 02;
    temp=temp->link;

      strcpy( temp->day ,"Wednesday");
    strcpy(temp->_time ,"2pm");
   temp->subcode = 05;
   temp=temp->link;

      strcpy( temp->day ,"Wednesday");
    strcpy(temp->_time ,"3pm");
     temp->subcode = -1;
    temp=temp->link;


      strcpy( temp->day, "Thursday");
    strcpy(temp->_time ,"9am");
    temp->subcode = 03;
    temp=temp->link;

          strcpy( temp->day, "Thursday");
    strcpy(temp->_time ,"10am");
    temp->subcode = 04;
    temp=temp->link;

          strcpy( temp->day ,"Thursday");
    strcpy(temp->_time ,"11am");
    temp->subcode = 02;
    temp=temp->link;

       strcpy( temp->day, "Thursday");
    strcpy(temp->_time ,"12pm");
    temp->subcode = 01;
    temp=temp->link;

          strcpy( temp->day, "Thursday");
    strcpy(temp->_time ,"2pm");
    temp->subcode = 05;
    temp=temp->link;

          strcpy( temp->day ,"Thursday");
    strcpy(temp->_time ,"3pm");
    temp->subcode = 06;
    temp=temp->link;

            strcpy( temp->day,"Friday");
    strcpy(temp->_time ,"9am");
     temp->subcode = 02;
    temp=temp->link;

 strcpy( temp->day ,"Friday");
    strcpy(temp->_time ,"10am");
     temp->subcode = 05;
    temp=temp->link;

    strcpy( temp->day,"Friday");
    strcpy(temp->_time ,"11am");
    temp->subcode = 01;
    temp=temp->link;

   strcpy( temp->day ,"Friday");
    strcpy(temp->_time ,"12pm");
    temp->subcode = 01;
    temp=temp->link;

   strcpy( temp->day,"Friday");
    strcpy(temp->_time ,"2pm");
    temp->subcode = 02;
    temp=temp->link;
 
 
  strcpy( temp->day,"Friday");
    strcpy(temp->_time ,"3pm");
    temp->subcode = -1;
    temp->link = NULL;







  temp=first;
    while(temp)
    {
    i=1;
     while(i!=7)
    {  
        printf("\n%s %s %d",temp->day,temp->_time,temp->subcode);
        temp=temp->link;
    i++;
    }    

    printf("\n//////////////////\n");

    }

temp=first;
return temp;
}


void display(listpointer temp)
{
int i;
printf("\n day - subject - subjectcode \n");   
  while(temp)
    {
    i=1;
     while(i!=7)
    {  
        printf("\n%s %s %d",temp->day,temp->_time,temp->subcode);
        temp=temp->link;
    i++;
    }    

    printf("\n//////////////////\n");
  printf("\n \n");
}
}

void schedule_lecture(int scode,listpointer *ptr)
{
    int ans;
    listpointer newnode;
    listpointer temp=*ptr;
    int ch;
    struct node* start;
    start=temp;
    while(temp)
    {
        if(temp->subcode==-1)
        {
           printf("%s %s %d \n",temp->day,temp->_time,temp->subcode);
           printf("do you want this time slot? \t 1- yes \t 2-no\n");
           scanf("%d",&ch);
           if(ch==1)
           {
               temp->subcode=scode;

        printf("lecture scheduled : %s %s %d \n",temp->day,temp->_time,temp->subcode);

           }

         }
        temp=temp->link;
    }




    printf("there are no more empty slots\n");
    printf("do you want to create a new slot ?\n 1. yes \t 2.no\n");
    scanf("%d",&ans);
    if(ans==1)
    {
        newnode=(listpointer)malloc(2*sizeof(*newnode));
        printf("enter day\n");
        scanf("%s",newnode->day);
        printf("enter time\n");
        scanf("%s",newnode->_time);
        newnode->subcode=scode;
        newnode->link=NULL;
        temp->link=newnode;
        temp=newnode;
    }
    
    printf("\n\nrevised timetable\n");
    temp=start;
    display(temp);

}


void delet(int scode,char day[],char tim[], listpointer *ptr)
{
 listpointer temp;
struct node* start;

temp=*ptr;
start=temp;
while(temp)
{
   if(strcasecmp(temp->day,day)==0)
        {
            if(strcasecmp(temp->_time,tim)==0)
            {
                temp->subcode=-1;
                break;
}
}

temp=temp->link;
}

if(temp)
{
printf("lecture removed : %s %s %d \n",temp->day,temp->_time,temp->subcode);
}
else
{
     printf("no such lecture exists\n");
}
temp=start;
printf("\n\nrevised timetable\n");
display(temp);
}





void semester(int i)
{
int choice;
    char d[20];

char tim[20];
    int scode;

printf("\n\nSEMESTER %d\n\n",i);
listpointer first =  timetable();
listpointer temp;
temp=(listpointer)malloc(sizeof(*temp));
    while(1)
    {


    printf("\n MENU : 1. schedule a lecture \t 2.remove a lecture\n");
    scanf("%d",&choice);
    switch(choice)
    {
                case 1 :
printf("enter your subject code\n");
                 scanf("%d",&scode);
schedule_lecture(scode,&first);break;


  case 2 :
printf("enter your subject code\n");
                 scanf("%d",&scode);
                 printf("enter day from which you want to remove the lecture\n");
                 scanf("%s",d);
                 printf("enter the time slot\n");
                 scanf("%s",tim);
                 delet(scode,d,tim,&first);break;

}}}

int main()
{

int c1;

printf("enter semester: \n");
scanf("%d",&c1);    



if(c1==3)
{
printf("subjects are : \n");
printf("sno.     subject      subcode\n");
printf("\n1. MATHS(III)      01 \n 2. TOC     02 \n 3. OOPS    03 \n 4. ADD     04\n 5. DMS     05 \n 6. DS     06\n\n");
semester(c1);
}




else if(c1==4)
{
printf("subjects are : \n");
printf("sno.    subject   subcode\n");
printf("\n1. MATHS(IV) - 01 \n 2. DESIGN AND ANALYSIS OF ALGORITHMS - 02 \n 3. MICROPROCESSORS AND MICROCONTROLLERS - 03 \n 4. COMPUTER ORGANIZATOIN - 04\n 5. DATA COMMUNICATION -  05 \n 6. UNIX AND PYTHON SCRIPTING- 06\n\n");
semester(c1);
}


else if(c1==5)
{
printf("subjects are : \n");
printf("sno.    subject   subcode\n");
printf("\n1. OPTIONAL 1 - 01 \n 2. OPERATING SYSTEMS - 02 \n 3. DATABASE SYSTEMS - 03 \n 4. DATA NETWORKS - 04\n 5. JAVA PROGRAMMING -  05 \n 6.INTELLECTUAL PROPERTY RIGHTS- 06\n\n");
semester(c1);
}


else if(c1==6)
{
printf("subjects are : \n");
printf("sno.    subject   subcode\n");
printf("\n1. COMPILER DESIGN- 01 \n 2. SOFTWARE DESIGN - 02 \n 3. UNIX SYSTEMS - 03 \n 4. MINI PROJECT - 04\n 5. JAVA PROGRAMMING -  05 \n 6. OPTIONAL- 06\n\n");
semester(c1);
}

else if(c1==7)
{
printf("subjects are : \n");
printf("sno.    subject   subcode\n");
printf("\n1. PROJECT MANAGEMENT AND ENGINEERING ECONOMICS - 01 \n 2. ENTREPENEURSHIPAND INTELLECTUAL PROPERTY RIGHTS - 02 \n 3. PROJECT BASED LEARNING - 03 \n 4. SOCIAL ISSUES AND PROFESSIONAL PRACTICE - 04\n 5. ELECTIVE 3 -  05 \n 6.OPEN ELECTIVE- 06\n\n");
semester(c1);

}


return 0;



}
