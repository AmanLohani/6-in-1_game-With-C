#include<stdio.h>
#include<stdlib.h>

void main()
{
char name[100];
char ch;
int ans,cnt=0;
system("cls");
printf("Please enter your name: ");
gets(name);
printf("\n\n\t\t\t\t\t\t\tWelcome to KBC mr/ms:");
puts(name);
printf("\n\t\t\tRULES for KBC");
printf("\n\t\t\t\t\t1.The game consists of 10 questions");
printf("\n\t\t\t\t\t2.Every question consists of 4 options there will be only one correct answer.");
printf("\n\t\t\t\t\t3.For every correct answer you will be getting 10000 rs of money");
printf("\n\t\t\t\t\t4.You will be exit out of game for wrong answer.");
printf("\n\t\t\t\t\t5.You can use 50-50 option only one time.");
printf("\n\t\t\t\t\t6.50-50 option is avilable only after 8th question");
printf("\n\t\t\t\t\tIf you are intrested to play game press enter to ENTER into game");
ch=getch();
printf("\n\n\n\t\tHere we go...");
printf("\n\t\tThe game starts now....Best of luck ");
puts(name);
printf("\n\t\t\t\t\tYour first question:");
printf("\n\t\t\t\t\t1)Who won most number of ICC world cup");
printf("\n\t\t\t\t\t1.Australia                2.India");
printf("\n\t\t\t\t\t3.West indies              4.South africa");
printf("\n\t\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==1)
{
printf("\n\t\t\t\t\tCongrats u won 10000 rs");
}
else
{
printf("\n\t\t\t\t\tSorry, better luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t2)Total number of countries according to UN");
printf("\n\t\t\t\t\t1.193        		        2.211");
printf("\n\t\t\t\t\t3.195       		        4.202");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==3)
{printf("\n\t\tCongrats u won 20000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t3)Where is worlds biggest military ");
printf("\n\t\t\t\t\t1.Russia              		2.India");
printf("\n\t\t\t\t\t3.U.S.A        		        4.China");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("\n\t\tCongrats u won 30000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t4)World's fastest car>?");
printf("\n\t\t\t\t\t1.Bugatti chiron            2.Hennessey Venom");
printf("\n\t\t\t\t\t3.SSC Tuatara          		4.Koenigsegg Agera");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==1)
{
printf("\n\t\tCongrats u won 40000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t5)What percentage of haemoglobin in red blood cells is found?");
printf("\n\t\t\t\t\t1.60%               		2.34%");
printf("\n\t\t\t\t\t3.20%               		4.42%");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("\n\t\tCongrats u won 50000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t6)Most successful IPL franchise?");
printf("\n\t\t\t\t\t1.Mumbai Indians             2.Chennai Super Kings");
printf("\n\t\t\t\t\t3.Rajasthan Royal            4.Deccan Chargers");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==1)
{
printf("\n\t\tCongrats u won 60000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t7)Most successful pro kabbadi franchise? ");
printf("\n\t\t\t\t\t1.Puneri Paltan             2.Haryana Steelers");
printf("\n\t\t\t\t\t3.Patna Pirates             4.U Mumba");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==3)
{
printf("\n\t\tCongrats u won 70000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tEour next question");
printf("\n\t\t\t\t\t12.5 percent of 80 is equal to?");
printf("\n\t\t\t\t\t1.8                   		2.20");
printf("\n\t\t\t\t\t3.10                  		4.40");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==3)
{
printf("\n\t\tCongrats u won 80000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\t\t\t***Note:you can use your 50-50 option from here***");
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t9)Worlds biggest aircraft carrier in the world?");
printf("\n\t\t\t\t\t1.Charles de Gaulle             2.Nimitz");
printf("\n\t\t\t\t\t3.Vikramaditya                  4.Liaoning");
printf("\n\t\t\t\tDo you want to use fifty");
printf("\n\t\t\t\t\tPress 'y' for yes:");
printf("\n\t\t\t\t\tPress 'n' for no:");
printf("\n\t\tEnter your choice: ");
ch=getch();
if(ch=='y')
{
printf("\n\t\t\t\t\t1.                      		2.Nimitz");
printf("\n\t\t\t\t\t3.Vikramaditya                 	4.        ");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("\n\t\tCongrats u won 90000 rs");
cnt++;
}
else
{
printf("\n\t\tBetter luck next time");
}
}
else if(ch=='n')
{
printf("\n\t\t\tGood.. you can use your 50-50 chance next time");
printf("\n\t\t\t\t\t1.Charles de Gaulle             2.Nimitz");
printf("\n\t\t\t\t\t3.Vikramaditya                  4.Liaoning");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("\n\t\tCongrats u won 90000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
}
if(cnt==0)
{
printf("\n\t\t\t\t*Your are still having 50-50 chance*");
}
else
{
printf("\n\t\t\t\t*Remember that you are not having 50-50 chcance*");
}
printf("\n\t\tHere is your last and final question");
printf("\n\t\t\t\t\t10)Total number of national parties in India?");
printf("\n\t\t\t\t\t1.10                     		2.5");
printf("\n\t\t\t\t\t3.24                      		4.8");
if (cnt==1)
{
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("\n\t\tCongrats u won ONE LAKH RUPEES");
}
else
{
printf("\n\t\tSo sorry..., better luck next time");
exit(0);
}
}
if(cnt==0)
{
     printf("\n\t\t\t\tDo you want to use fifty");
     printf("\n\t\t\t\tPress 'y' for yes:");
     printf("\n\t\t\t\tPress 'n' for no:");
     printf("\n\t\tEnter your choice: ");
     ch=getch();
     if(ch=='y')
       {
printf("\n\t\t\t\t\t1.10                       		2.");
printf("\n\t\t\t\t\t3.                         		4.8");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("\n\n\t\tCongrats u won ONE LAKH RUPEES");
}
else
{
printf("\n\t\tSo sorry....., better luck next time");
exit(0);
}
}
else if(ch=='n')
{
printf("\n\t\tGood.. you are the only first person answering with out using 50-50 chance");
printf("\n\t\t\t\t\t1.10                       		2.5");
printf("\n\t\t\t\t\t3.24                       		4.8");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("\n\t\tCongrats u won ONE LAKH RUPEES");
}
else
{
printf("\n\t\tSo sorry ... better luck next time");
}
}
}
getch();
}
                                   

			
