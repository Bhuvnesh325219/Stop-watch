// we are goint go creating the star pattern watch 

#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<unistd.h>;

void fun1(int x);
void fun2(int x);
void fun3(int x);
void fun4(int x);
void fun5(int x);
void fun6(int x);
void fun7(int x);
void fun8(int x);
void fun9(int x);
void fun0(int x);


void gotoxy(int x,int y)
{
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);}

main(){
	
      
 printf("Enter your endtime in Hours,Minute,Seconds");
	int h,m,s;
	scanf("%d %d %d",&h,&m,&s);
	system("cls");	


	
	int hh,mm,ss;
	int h1,h2,m1,m2,s1,s2;
	int hc,mc,sc;


	for(hh=0;hh<24;hh++){
	
	    	hc=hh;
		    h1=hc%10;
		    hc=hc/10;
		    h2=hc%10;
		
	for(mm=00;mm<60;mm++){
	
			mc=mm;
			m1=mc%10;
			mc=mc/10;
			m2=mc%10;
		
	for(ss=00;ss<60;ss++){
	           
		  	sc=ss;
			s1=sc%10;
			sc=sc/10;
			s2=sc%10;
		
		if(h2==0) fun0(10); if(h2==1) fun1(10); if(h2==2) fun2(10);
		 
		if(h1==0) fun0(17); if(h1==1) fun1(17); if(h1==2) fun2(17);
		if(h1==3) fun3(17); if(h1==4) fun4(17); if(h1==5) fun5(17);
		if(h1==6) fun6(17); if(h1==7) fun7(17); if(h1==8) fun8(17); 
		if(h1==9) fun9(17);
		 
		if(m2==0) fun0(25); if(m2==1) fun1(25); if(m2==2) fun2(25);
		if(m2==3) fun3(25); if(m2==4) fun4(25); if(m2==5) fun5(25);
		
		if(m1==0) fun0(32); if(m1==1) fun1(32); if(m1==2) fun2(32);
		if(m1==3) fun3(32); if(m1==4) fun4(32); if(m1==5) fun5(32);
		if(m1==6) fun6(32); if(m1==7) fun7(32); if(m1==8) fun8(32); 
		if(m1==9) fun9(32);  
		
		if(s2==0) fun0(40); if(s2==1) fun1(40); if(s2==2) fun2(40);
		if(s2==3) fun3(40); if(s2==4) fun4(40); if(s2==5) fun5(40);
		
		if(s1==0) fun0(47); if(s1==1) fun1(47); if(s1==2) fun2(47);
		if(s1==3) fun3(47); if(s1==4) fun4(47); if(s1==5) fun5(47);
		if(s1==6) fun6(47); if(s1==7) fun7(47); if(s1==8) fun8(47); 
		if(s1==9) fun9(47);
		  	
		sleep(1);
		system("cls");
		if(h==hh && m==mm && s==ss) break;	
		}	
	if(h==hh && m==mm) break;
	}
	if(h==hh) break;
}

printf("Your Time Up");
}



void fun0(int x){
	  	gotoxy(x,2);printf("*****");	
		gotoxy(x,3);printf("*   *");	
		gotoxy(x,4);printf("*   *");	
		gotoxy(x,5);printf("*   *");	
		gotoxy(x,6);printf("*****");
}
void fun1(int x){
		gotoxy(x,2);printf("  *  ");	
		gotoxy(x,3);printf("  *  ");	
		gotoxy(x,4);printf("  *  ");	
		gotoxy(x,5);printf("  *  ");	
		gotoxy(x,6);printf("  *  ");
}
void fun2(int x){
        gotoxy(x,2);printf("*****");	
		gotoxy(x,3);printf("    *");	
		gotoxy(x,4);printf("*****");	
		gotoxy(x,5);printf("*    ");	
		gotoxy(x,6);printf("*****");
}
void fun3(int x){
    	gotoxy(x,2);printf("*****");	
		gotoxy(x,3);printf("    *");	
		gotoxy(x,4);printf("*****");	
		gotoxy(x,5);printf("    *");	
		gotoxy(x,6);printf("*****");
}
void fun4(int x){
	    gotoxy(x,2);printf("*   *");	
		gotoxy(x,3);printf("*   *");	
		gotoxy(x,4);printf("*****");	
		gotoxy(x,5);printf("    *");	
		gotoxy(x,6);printf("    *");
}
void fun5(int x){
        gotoxy(x,2);printf("*****");	
		gotoxy(x,3);printf("*    ");	
		gotoxy(x,4);printf("*****");	
		gotoxy(x,5);printf("    *");	
		gotoxy(x,6);printf("*****");
}
void fun6(int x){
        gotoxy(x,2);printf("*****");	
		gotoxy(x,3);printf("*    ");	
		gotoxy(x,4);printf("*****");	
		gotoxy(x,5);printf("*   *");	
		gotoxy(x,6);printf("*****");
}
void fun7(int x){
		
		gotoxy(x,2);printf("*****");	
		gotoxy(x,3);printf("   * ");	
		gotoxy(x,4);printf("  *  ");	
		gotoxy(x,5);printf(" *   ");	
		gotoxy(x,6);printf("*    ");
}
void fun8(int x){
	    gotoxy(x,2);printf("*****");	
		gotoxy(x,3);printf("*   *");	
		gotoxy(x,4);printf("*****");	
		gotoxy(x,5);printf("*   *");	
		gotoxy(x,6);printf("*****");
}
void fun9(int x){
        gotoxy(x,2);printf("*****");	
		gotoxy(x,3);printf("*   *");	
		gotoxy(x,4);printf("*****");	
		gotoxy(x,5);printf("    *");	
		gotoxy(x,6);printf("*****");
}

