#include<iostream>
using namespace std;

//function prototypes
int startdaycalc(int);
int month31(int);
int leapcalc(int);
int month28(int);
int month29(int);
int month30(int);
//hmmm

int main()
{
int year,startday,nextstartday,leapcal;
cout<<"Hello,\n So This Program Is More Like\n A Year Printer Than A Calendar. \n Running for the first time \n may not work don't worry \n just close the terminal and run again.\n ";
cout<<" \n\nEnter the year";
cin>>year;
startday = startdaycalc(year);
cout<<"starting day is "<<startday;
cout<<"\n"<<year<<"\n";
cout<<"\nJanuary";
nextstartday = month31(startday);
cout<<endl;
cout<<"\nFebruary";
leapcal = leapcalc(year);

if(leapcal==1)
{
nextstartday = month29(nextstartday);
}
else if(leapcal==0)
{
nextstartday = month28(nextstartday);
}
cout<<endl;
cout<<"\nMarch";
nextstartday = month31(nextstartday);
cout<<endl;
cout<<"\nApril";
nextstartday = month30(nextstartday);
cout<<endl;
cout<<"\nMay";
nextstartday = month31(nextstartday);
cout<<endl;
cout<<"\nJune";
nextstartday = month30(nextstartday);
cout<<endl;
cout<<"\nJuly";
nextstartday = month31(nextstartday);
cout<<endl;
cout<<"\nAugust";
nextstartday = month31(nextstartday);
cout<<endl;
cout<<"\nSeptember";
nextstartday = month30(nextstartday);
cout<<endl;
cout<<"\nOctober";
nextstartday = month31(nextstartday);
cout<<endl;
cout<<"\nNovember";
nextstartday = month30(nextstartday);
cout<<"\n";
cout<<"\nDecember";
month31(nextstartday);

cout<<"\n CALENDAR SUCCESFULLY PRINTED :)";
cout<<"\n I donot know why the last line of print dissapears after zooming in or out so this is to prevent that!(just ignore)";
return(0);
}








//
//FUNCTIONS
//

// Calculating The Day To Start The Year ↓
int startdaycalc(int year)
{
int i,a,s,d,p=0,u=0,k,j,leapdays,normdays;
int totdays,startday;

for(i=0;i<year;i++)
{
a=i%4;
s=i%100;

if(s==0)
{
d=i%400;
  if(d==0)
    {
     p++;
    }
}
else if(a==0)
{
u++;
}

}
k=u+p;

j=year-k;
leapdays=k*366;
normdays=j*365;
totdays=leapdays+normdays;

startday=totdays%7;

return(startday);
}

// Printing The Months ↓

int month31(int startday)
{
int i,nextstartday;
cout<<"\n|sund|mond|tued|wedn|thur|frid|satd|\n";
if(startday==0)
cout<<"|    |    |    |    |    |    |";
else if(startday==6)
cout<<"|    |    |    |    |    |";
else if(startday==5)
cout<<"|    |    |    |    |";
else if(startday==4)
cout<<"|    |    |    |";
else if(startday==3)
cout<<"|    |    |";
else if(startday==2)
cout<<"|    |";
else if(startday==1)
cout<<"|";


else
cout<<" ERROR ";

for(i=1;i<32;i++)
{
if(i<10)
cout<<"  "<<i<<" |";
else if(i>9)
cout<<" "<<i<<" |";

if(startday==0)
{
 if((i==1)||(i==8)||(i==15)||(i==22)||(i==29))
  {
cout<<endl;
cout<<"|";
  }
}
else if(startday==6)
{
 if((i==2)||(i==9)||(i==16)||(i==23)||(i==30))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==5)
{
 if((i==3)||(i==10)||(i==17)||(i==24)||(i==31))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==4)
{
 if((i==4)||(i==11)||(i==18)||(i==25))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==3)
{
 if((i==5)||(i==12)||(i==19)||(i==26))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==2)
{
 if((i==6)||(i==13)||(i==20)||(i==27))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==1)
{
 if((i==7)||(i==14)||(i==21)||(i==28))
 {
cout<<endl;
cout<<"|";
 }
}


}

if(startday<=3)
{
nextstartday = startday+3;
}
else if(startday==4)
{
nextstartday = 0;
}
else if(startday==5)
{
nextstartday = 1;
}
else
{
nextstartday = 2;
}
return(nextstartday);
}

//

int month28(int startday)
{
int i,nextstartday;
cout<<"\n|sund|mond|tued|wedn|thur|frid|satd|\n";
if(startday==0)
cout<<"|    |    |    |    |    |    |";
else if(startday==6)
cout<<"|    |    |    |    |    |";
else if(startday==5)
cout<<"|    |    |    |    |";
else if(startday==4)
cout<<"|    |    |    |";
else if(startday==3)
cout<<"|    |    |";
else if(startday==2)
cout<<"|    |";
else if(startday==1)
cout<<"|";
else
cout<<" ERROR ";

for(i=1;i<29;i++)
{
if(i<10)
cout<<"  "<<i<<" |";
else if(i>9)
cout<<" "<<i<<" |";

if(startday==0)
{
 if((i==1)||(i==8)||(i==15)||(i==22))
  {
cout<<endl;
cout<<"|";
  }
}
else if(startday==6)
{
 if((i==2)||(i==9)||(i==16)||(i==23))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==5)
{
 if((i==3)||(i==10)||(i==17)||(i==24))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==4)
{
 if((i==4)||(i==11)||(i==18)||(i==25))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==3)
{
 if((i==5)||(i==12)||(i==19)||(i==26))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==2)
{
 if((i==6)||(i==13)||(i==20)||(i==27))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==1)
{
 if((i==7)||(i==14)||(i==21)||(i==28))
 {
cout<<endl;
cout<<"|";
 }
}


}

nextstartday = startday;
return(nextstartday);
}


//

int month29(int startday)
{
int i,nextstartday;
cout<<"\n|sund|mond|tued|wedn|thur|frid|satd|\n";
if(startday==0)
cout<<"|    |    |    |    |    |    |";
else if(startday==6)
cout<<"|    |    |    |    |    |";
else if(startday==5)
cout<<"|    |    |    |    |";
else if(startday==4)
cout<<"|    |    |    |";
else if(startday==3)
cout<<"|    |    |";
else if(startday==2)
cout<<"|    |";
else if(startday==1)
cout<<"|";
else
cout<<" ERROR ";

for(i=1;i<30;i++)
{
if(i<10)
cout<<"  "<<i<<" |";
else if(i>9)
cout<<" "<<i<<" |";

if(startday==0)
{
 if((i==1)||(i==8)||(i==15)||(i==22)||(i==29))
  {
cout<<endl;
cout<<"|";
  }
}
else if(startday==6)
{
 if((i==2)||(i==9)||(i==16)||(i==23))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==5)
{
 if((i==3)||(i==10)||(i==17)||(i==24))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==4)
{
 if((i==4)||(i==11)||(i==18)||(i==25))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==3)
{
 if((i==5)||(i==12)||(i==19)||(i==26))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==2)
{
 if((i==6)||(i==13)||(i==20)||(i==27))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==1)
{
 if((i==7)||(i==14)||(i==21)||(i==28))
 {
cout<<endl;
cout<<"|";
 }
}


}

if(startday<=5)
{
nextstartday = startday+1;
}
else if(startday==6)
{
nextstartday = 0;
}

return(nextstartday);
}


//

int month30(int startday)
{
int i,nextstartday;
cout<<"\n|sund|mond|tued|wedn|thur|frid|satd|\n";
if(startday==0)
cout<<"|    |    |    |    |    |    |";
else if(startday==6)
cout<<"|    |    |    |    |    |";
else if(startday==5)
cout<<"|    |    |    |    |";
else if(startday==4)
cout<<"|    |    |    |";
else if(startday==3)
cout<<"|    |    |";
else if(startday==2)
cout<<"|    |";
else if(startday==1)
cout<<"|";
else
cout<<" ERROR ";

for(i=1;i<31;i++)
{
if(i<10)
cout<<"  "<<i<<" |";
else if(i>9)
cout<<" "<<i<<" |";

if(startday==0)
{
 if((i==1)||(i==8)||(i==15)||(i==22)||(i==29))
  {
cout<<endl;
cout<<"|";
  }
}
else if(startday==6)
{
 if((i==2)||(i==9)||(i==16)||(i==23)||(i==30))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==5)
{
 if((i==3)||(i==10)||(i==17)||(i==24))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==4)
{
 if((i==4)||(i==11)||(i==18)||(i==25))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==3)
{
 if((i==5)||(i==12)||(i==19)||(i==26))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==2)
{
 if((i==6)||(i==13)||(i==20)||(i==27))
 {
cout<<endl;
cout<<"|";
 }
}
else if(startday==1)
{
 if((i==7)||(i==14)||(i==21)||(i==28))
 {
cout<<endl;
cout<<"|";
 }
}


}

if(startday<=4)
{
nextstartday = startday+2;
}
else if(startday==5)
{
nextstartday = 0;
}
else if(startday==6)
{
nextstartday = 1;
}

return(nextstartday);
}


















// Leap Year Calculator

int leapcalc(int year)
{
int x,y,s,leap;

x = year%4;
s = year%100;
if(s==0)
{
y = year%400;
}
if((y==0)&&(x==0))
leap = 1;
else if((x==0)&&(s!=0))
leap = 1;
else
leap = 0;

return(leap);
}


//
//FUNCTIONS END
//
