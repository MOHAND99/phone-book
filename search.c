#include "declare.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "contentprint.h"
int search(char oper[],telephonebk arr_contacts[],int count,int *ch)
{
    int q;
    char LN[150];
    char FN[150];
    int day,month,year;
    char add[150],pho[150],ema[150];
    int val=0;
    if(strcmp(oper,"1")==0)
    {
        printf("enter first name\n");
        scanf("%s", FN);
        printf("enter last name\n");
        scanf("%s", LN);
        for(q = 0; q<count; q++)
        {
            if (strcasecmp(arr_contacts[q].first_name,FN)==0 && strcasecmp(arr_contacts[q].last_name,LN)==0)
            {
               contentPrint(arr_contacts,q);
               *ch=q;
                return 1;
            }
            if(count-1 == q)
            {
                printf("\nnot found\n\n");
                return 0;
            }
        }
    }
    else if(strcmp(oper,"2")==0)
    {
        printf("enter first name\n");
        scanf("%s",FN);
        for(q = 0; q<count; q++)
        {
            if (strcasecmp(arr_contacts[q].first_name,FN)==0)
            {
                contentPrint(arr_contacts,q);
                val++;
            }
        }
        if(val ==0)
            {
                printf("not found\n");
            }
    }
    else if(strcmp(oper,"3")==0)
    {
        printf("enter last name\n");
        scanf("%s", LN);
        for(q = 0; q<count; q++)
        {
            if (strcasecmp(arr_contacts[q].last_name,LN)==0)
            {
                contentPrint(arr_contacts,q);
                val++;
            }
        }
        if(val ==0)
            {
                printf("not found\n");
            }
    }
    else if(strcmp(oper,"4")==0)
    {
        printf("enter birth day\n");
        scanf("%d",&day);
        for(q = 0; q<count; q++)
        {
            if (arr_contacts[q].brthdt.day==day)
            {
                contentPrint(arr_contacts,q);
                val++;
            }

        }
         if(val ==0)
            {
                printf("not found\n");
            }
    }
    else if(strcmp(oper,"5")==0)
    {
        printf("enter birth month\n");
        scanf("%d",&month);
        for(q = 0; q<count; q++)
        {
            if (arr_contacts[q].brthdt.month==month)
            {
                contentPrint(arr_contacts,q);
                val++;
            }

        }
         if(val ==0)
            {
                printf("not found\n");
            }
    }
    else if(strcmp(oper,"6")==0)
    {
        printf("enter birth Year\n");
        scanf("%d",&year);
        for(q = 0; q<count; q++)
        {
            if (arr_contacts[q].brthdt.year==year)
            {
               contentPrint(arr_contacts,q);
                val++;
            }

        }
        if(val ==0)
            {
                printf("not found\n");
                return 0;
            }
    }
    else if(strcmp(oper,"7")==0)
    {
        printf("enter address\n");
        scanf(" %[^\n]", add);
        for(q = 0; q<count; q++)
        {
            if (strcasecmp(arr_contacts[q].address,add)==0)
            {
                contentPrint(arr_contacts,q);
                val++;
            }

        }
        if(val ==0)
            {
                printf("not found\n");
            }
    }
    if(strcmp(oper,"8")==0)
    {
        printf("enter Emial\n");
        scanf("%s",ema);
        for(q = 0; q<count; q++)
        {
            if (strcmp(arr_contacts[q].e_mail,ema)==0)
            {
                contentPrint(arr_contacts,q);
                val++;
            }

        }
        if(val ==0)
            {
                printf("not found\n");
            }
    }
    if(strcmp(oper,"9")==0)
    {
        printf("enter phone number\n");
        scanf("%s", pho);
        for(q = 0; q<count; q++)
        {
            if (strcasecmp(arr_contacts[q].number,pho)==0)
            {
               contentPrint(arr_contacts,q);
                val++;
            }
        }
        if(val ==0)
            {
                printf("not found\n");
            }
    }
}
void searchQuery(telephonebk arr_contacts,int count,char fn[],char ln,int day,int month,int year,char add,char ema,char pho){
}
void query(telephonebk arr_contacts[],int count)
{
    int num;
    int ch;
    int q;
    char LN[150];
    char FN[150];
    int day,month,year;
    char add[150],pho[150],ema[150];
    int val=0;
       // printf("Search by : \n 1.first name and last name\n 2.first name only\n 3.last name only\n 4.day of birth\n 5.month  of birth\n 6.year of birth\n 7.address\n 8.email\n 9.mobile/telephone number\n 10.Enter 0 maim menu\n");
        printf("enter first name\n");
        scanf("%s", FN);
        if(*FN==NULL){
           printf("enter last name\n");
        scanf("%s", LN);
        }

        printf("enter birth day\n");
        scanf("%d",&day);
        printf("enter birth month\n");
        scanf("%d",&month);
        printf("enter birth Year\n");
        scanf("%d",&year);
        printf("enter address\n");
        scanf(" %[^\n]", add);
        printf("enter Emial\n");
        scanf("%s",ema);
        printf("enter phone number\n");
        scanf("%s", pho);
        char operation[50];
        scanf(" %s",operation);


}
