#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>

int color[10];

int menu()
{
   int choice;
   clrscr();
   printf("\n\n1] House");
   printf("\n2] Post Office");
   printf("\n3] Cake");
   printf("\n4] Icecream");
   printf("\n5] Color Code");
   printf("\n6] Exit");
   printf("\n\nWhat do you want to color: ");
   scanf("%d",&choice);
   return choice;
}

void HOUSE(int);
void POST(int);
void CAKE(int);
void ICECREAM(int);
int x_position(int);
int y_position(int);
void initialize();
void welcome();
void symmetry(int x,int y,int xc,int yc);
void CODE();

void main()
{
   int ch,i;
   clrscr();
   welcome();
   do
   {
      ch=menu();
      switch(ch)
      {
	 case 1:  for(i=0;i<=6;i++)
		  {
		      HOUSE(i);
		  }
		  initialize();
		  break;

	 case 2:  for(i=0;i<=5;i++)
		  {
		     POST(i);
		  }
		  initialize();
		  break;

	 case 3:  for(i=0;i<=5;i++)
		  {
		      CAKE(i);
		  }
		  initialize();
		  break;

	 case 4:  for(i=0;i<=3;i++)
		  {
		      ICECREAM(i);
		  }
		  initialize();
		  break;

	 case 5:  CODE();
		  break;

	 case 6:  printf("\n\nExit");
		  getch();
		  exit(0);

	 default:  printf("\n\nInvalid Input!!");
      }
      getch();
   }while(ch!=6);
}

void HOUSE(int i)
{
  int gd=DETECT, gm,x,y,temp_color,j;
  initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
  line(50,100,0,150);
  line(50,100,100,150);
  line(0,150,100,150);
  line(0,150,0,250);
  line(100,150,100,250);
  line(0,250,100,250);
  line(25,175,75,175);
  line(25,175,25,250);
  line(75,175,75,250);
  line(50,100,250,100);
  line(100,150,300,150);
  line(250,100,300,150);
  line(300,150,300,250);
  line(100,250,300,250);
  line(150,175,250,175);
  line(250,175,250,225);
  line(250,225,150,225);
  line(150,225,150,175);
  outtextxy(50,125,"1");
  outtextxy(175,125,"2");
  outtextxy(80,175,"3");
  outtextxy(125,200,"4");
  outtextxy(50,200,"5");
  outtextxy(200,200,"6");
    for(j=0;j<=i;j++)
  {
     if(j==6)
     {
	break;
     }
     x=x_position(j);
     y=y_position(j);
     temp_color=color[j];
     setfillstyle(SOLID_FILL,temp_color);
     floodfill(x,y,WHITE);
  }
  if(i!=6)
  {
     printf("\n\nWhich color do you want at %d position: ",i+1);
     scanf("%d",&color[i]);
  }
  if(i==6)
  {
     getch();
  }
  closegraph();
}

void POST(i)
{
   int gd=DETECT, gm,x,y,temp_color,j;
   initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
   rectangle(150,325,425,375);
   rectangle(200,125,375,325);
   rectangle(150,115,415,125);
   ellipse(287,115,0,180,88,90);
   line(250,150,325,150);
   line(225,180,350,180);
   line(250,150,225,180);
   line(325,150,350,180);
   outtextxy(250,350,"1");
   outtextxy(300,250,"2");
   outtextxy(300,160,"3");
   outtextxy(300,115,"4");
   outtextxy(300,75,"5");
   for(j=0;j<=i;j++)
  {
     if(j==5)
     {
	break;
     }
     x=x_position(j+6);
     y=y_position(j+6);
     temp_color=color[j];
     setfillstyle(SOLID_FILL,temp_color);
     floodfill(x,y,WHITE);
  }
  if(i!=5)
  {
     printf("Which color do you want at %d position: ",i+1);
     scanf("%d",&color[i]);
  }
  if(i==5)
  {
     getch();
  }
  closegraph();
}

void CAKE(int i)
{
   int gd=DETECT, gm,temp_color,x,y,j;
   initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
   line(175,350,425,350);
   arc(175,325,180,270,25);
   arc(425,325,270,360,25);
   line(150,125,150,325);
   line(450,125,450,325);
   arc(175,125,0,180,25);
   arc(225,125,0,180,25);
   arc(275,125,0,180,25);
   arc(325,125,0,180,25);
   arc(375,125,0,180,25);
   arc(425,125,0,180,25);
   line(287,35,287,102);
   line(317,35,317,100);
   line(287,35,317,35);
   arc(302,25,270,450,9);
   arc(302,25,90,270,9);
   line(150,200,450,200);
   line(150,275,450,275);
   outtextxy(300,315,"1");
   outtextxy(300,235,"2");
   outtextxy(300,165,"3");
   outtextxy(300,75,"4");
   outtextxy(300,25,"5");
   for(j=0;j<=i;j++)
  {
     if(j==5)
     {
	break;
     }
     x=x_position(j+11);
     y=y_position(j+11);
     temp_color=color[j];
     setfillstyle(SOLID_FILL,temp_color);
     floodfill(x,y,WHITE);
  }
  if(i!=5)
  {
     printf("Which color do you want at %d position: ",i+1);
     scanf("%d",&color[i]);
  }
  if(i==5)
  {
     getch();
  }
  closegraph();

}

void ICECREAM(int i)
{
   int gd=DETECT, gm,temp_color,x,y,j;
   initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
   arc(300,330,180,360,15);
   line(250,120,285,330);
   line(350,120,315,330);
   ellipse(275,120,180,360,25,30);
   ellipse(325,120,180,360,25,30);
   ellipse(250,115,90,281,42,45);
   ellipse(350,115,258,450,42,45);
   ellipse(300,70,0,180,50,45);
   circle(300,15,11);
   outtextxy(300,210,"1");
   outtextxy(300,90,"2");
   outtextxy(300,10,"3");
   for(j=0;j<=i;j++)
  {
     if(j==3)
     {
	break;
     }
     x=x_position(j+16);
     y=y_position(j+16);
     temp_color=color[j];
     setfillstyle(SOLID_FILL,temp_color);
     floodfill(x,y,WHITE);
  }
  if(i!=3)
  {
     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nWhich color do you want at %d position: ",i+1);
     scanf("%d",&color[i]);
  }
  if(i==3)
  {
     getch();
  }
  closegraph();

}


int x_position(int i)
{
   int x_pos[100];
   x_pos[0]= 50;
   x_pos[1]= 175;
   x_pos[2]= 80;
   x_pos[3]= 115;
   x_pos[4]= 50;
   x_pos[5]= 200;
   x_pos[6]= 275;
   x_pos[7]= 275;
   x_pos[8]= 275;
   x_pos[9]= 275;
   x_pos[10]= 275;
   x_pos[11]=310;
   x_pos[12]=310;
   x_pos[13]=310;
   x_pos[14]=310;
   x_pos[15]=302;
   x_pos[16]=298;
   x_pos[17]=298;
   x_pos[18]=298;
   return x_pos[i];
}


int y_position(int i)
{
   int y_pos[100];
   y_pos[0]= 125;
   y_pos[1]= 125;
   y_pos[2]= 175;
   y_pos[3]= 175;
   y_pos[4]= 225;
   y_pos[5]= 200;
   y_pos[6]= 350;
   y_pos[7]= 250;
   y_pos[8]= 175;
   y_pos[9]= 120;
   y_pos[10]= 75;
   y_pos[11]=300;
   y_pos[12]=210;
   y_pos[13]=150;
   y_pos[14]=100;
   y_pos[15]=26;
   y_pos[16]=270;
   y_pos[17]=60;
   y_pos[18]=15;

   return y_pos[i];
}

void initialize()
{
   int i;
   for(i=0;i<10;i++)
   {
      color[i]=0;
   }
}

void welcome()
{
   int xc=310,yc=175,rad=5;
   int x=0,y=rad,p=1-rad;
   int gd=DETECT, gm;
   initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
   printf("\n\n\n\n\n\n\n\n\n\t\t\t\tIntializing Data");
   symmetry(x,y,xc,yc);
   for(x=0;y>x;x++)
   {
      if(p<0)
      p+=2*x+3;
      else
      {
	p+=2*(x-y)+5;
	y--;
      }
      symmetry(x,y,xc,yc);
      delay(100);
   }
   cleardevice();
   printf("\n\n\n\n\n\n\n\t\t\t\tLoading");
   for(x=0;x<5;x++)
   {
       delay(200);
       printf(".");
   }
   closegraph();
}

void symmetry(int x,int y,int xc,int yc)
{
putpixel(xc+x,yc-y,GREEN);
delay(100);
putpixel(xc+y,yc-x,GREEN);
delay(100);
putpixel(xc+y,yc+x,GREEN);
delay(100);
putpixel(xc+x,yc+y,GREEN);
delay(100);
putpixel(xc-x,yc+y,GREEN);
delay(100);
putpixel(xc-y,yc+x,GREEN);
delay(100);
putpixel(xc-y,yc-x,GREEN);
delay(100);
putpixel(xc-x,yc-y,GREEN);
delay(100);
}

void CODE()
{
   clrscr();
   printf("\nColor\t\tCode");
   printf("\nBLACK\t\t0");
   printf("\nBLUE\t\t1");
   printf("\nGREEN\t\t2");
   printf("\nCYAN\t\t3");
   printf("\nRED\t\t4");
   printf("\nMAGENTA\t\t5");
   printf("\nBROWN\t\t6");
   printf("\nLIGHTGRAY\t7");
   printf("\nDRAKGRAY\t8");
   printf("\nLIGHTBLUE\t9");
   printf("\nLIGHTGREEN\t10");
   printf("\nLIGHTCYAN\t11");
   printf("\nLIGHTRED\t12");
   printf("\nLIGHTMAGENTA\t13");
   printf("\nYELLOW\t\t14");
   printf("\nWHITE\t\t15");
   getch();
}








