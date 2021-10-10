

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

void delivery()
{
    int a;
    char b[20],c[25],d[30],e[35];
    system("COLOR 0E");
    gotoxy(68,5);
    printf("****Your Address*****\n");
    gotoxy(52,7);
    printf("District  :");
    scanf("%s",c);
    gotoxy(52,8);
    printf("Zilla     :");
    scanf("%s",d);
    gotoxy(52,9);
    printf("Appartment:");
    scanf("%s",e);
    gotoxy(52,13);
    printf("You can choose 1.Bkash 2.Cash On Delivery\n");
    gotoxy(52,14);
    printf("your option:");
    scanf("%d",&a);
    if(a==1)
    {
        gotoxy(52,17);
        printf("Our Number :01749360345");
        gotoxy(52,18);
        printf("Your Number:");
        scanf("%s",b);
        system("Cls");
        gotoxy(65,15);
        printf("*******Thank You*******");
        gotoxy(65,17);
        printf(" Stay Home & Stay Safe ");
        getch();
    }
    else if(a==2)
    {
        gotoxy(65,17);
        printf("*******Thank You*******");
        gotoxy(65,17);
        printf(" Stay Home & Stay Safe ");
        getch();

    }
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int total=0;
void grocery_item()
{
    int a;
     system ("COLOR 0E");
    gotoxy(65,5);
    printf("*******************************\n");
    gotoxy(65,6);
    printf("$          WELCOME            *\n");
    gotoxy(65,7);
    printf("*            TO               *\n");
    gotoxy(65,8);
    printf("*     OITIJYOBAHI CORNER      *\n");
    gotoxy(65,9);
    printf("*******************************\n");
    gotoxy(70,12);
    printf("---------------------");
    gotoxy(70,13);
    printf("|      what         |\n");
    gotoxy(70,14);
    printf("|    ARE YOU        |\n");
    gotoxy(70,15);
    printf("| LOOKING  FOR      |\n");
    gotoxy(70,16);
    printf("---------------------\n");

    gotoxy(63,19);
    printf("-----------------------------------\n");
    gotoxy(63,20);
    printf("| 1.5 KG BOGURAR DOI              |\n");
    gotoxy(63,21);
    printf("| 2.5 KG MYMMENSHINGH ER MONDA    |\n");
    gotoxy(63,22);
    printf("| 3.5 KG KUMILLAR ROSH MALAI      |\n");
    gotoxy(63,23);
    printf("| 4.5 KG TANGAIL ER CHOM-CHOM     |\n");
    gotoxy(63,24);
    printf("| 5.5 KG BALAGONJER SHAGOTO MISTY |\n");
    gotoxy(63,25);
    printf("-----------------------------------\n");
    gotoxy(63,28);
    printf("Choose Your Option : ");
    scanf("%d",&a);
    system("Cls");
    if(a==1)
    {
      total+=1000;
    }
    else if(a==2)
    {
      total+=1000;
    }
    else if(a==3)
    {
      total+=1000;
    }
    else if(a==4)
    {
        total+=1000;

    }
    else if(a==5)
        total+=1000;
}

void clothes()
{
  int a;
  system("COLOR 0E");
  gotoxy(59,5);
  printf("------------------------------------");
  gotoxy(59,6);

  printf("|Clothes for babies are given below|\n");
  gotoxy(59,7);
  printf("------------------------------------\n");
  gotoxy(63,8);
  printf("----------\n");
  gotoxy(63,9);
  printf("|1.Pant  |\n");
  gotoxy(63,10);
  printf("|2.Tops  |\n");
  gotoxy(63,11);
  printf("|3.Frok  |\n");
  gotoxy(63,12);
  printf("----------");
  gotoxy(59,15);
  printf("Choose Your Option : ");
  scanf("%d",&a);
  system("Cls");
  if(a==1)
  {
    total+=600;
  }
  else if(a==2)
  {
    total+=800;
  }
  else
  {
    total+=1200;
  }

}

void toys()
{
  int a;
  system("COLOR 0E");
  gotoxy(59,5);
  printf("-----------------------------");
  gotoxy(59,6);
  printf("|Babies Toys Are Given Below| \n");
  gotoxy(59,7);
  printf("-----------------------------");
  gotoxy(63,10);
  printf("------------------\n");
  gotoxy(63,11);
  printf("|1.Doll          |\n");
  gotoxy(63,12);
  printf("|2.Animal        |\n");
  gotoxy(63,13);
  printf("|3.Action Figure |\n");
  gotoxy(63,14);
  printf("------------------\n");
 gotoxy(63,17);
  printf("Choose Your Option : ");
  scanf("%d",&a);
  system("Cls");
  if(a==1)
  {
    total+=1500;
  }
  else if(a==2)
  {
    total+=2300;
  }
  else
  {
    total+=2500;
  }

}
void body_care()
{
  int a;
  system("COLOR 0E");
  gotoxy(59,5);
  printf("----------------------------------------\n");
  gotoxy(59,6);
  printf("|Babies Body Care Items are Given Below|\n");
  gotoxy(59,7);
  printf("----------------------------------------\n");
  gotoxy(63,10);
  printf("----------------\n");
  gotoxy(63,11);
  printf("|1.Baby Soap   |\n");
  gotoxy(63,12);
  printf("|2.Body Lotion |\n");
  gotoxy(63,13);
  printf("|3.Baby Oil    |\n");
  gotoxy(63,14);
  printf("----------------\n");
  gotoxy(63,17);
  printf("Choose Your Option : ");
  scanf("%d",&a);
  system("Cls");
  if(a==1)
  {
    total+=700;
  }
  else if(a==2)
  {
    total+=800;
  }
  else
  {
    total+=1000;
  }

}

 void baby_item()

{

   int a;
   system("COLOR 0E");
   gotoxy(65,5);

   printf("**************************\n");
   gotoxy(65,6);
   printf("|Welcome to Babies Corner|\n ");
   gotoxy(65,7);
   printf("**************************\n");
   gotoxy(65,9);
   printf("---------------------------\n");
   gotoxy(65,10);
   printf("|What Are You Looking For?|\n");
   gotoxy(65,11);
   printf("---------------------------\n");
   gotoxy(68,14);
   printf("-------------------\n");
   gotoxy(68,15);
   printf("|1.Clothes        |\n");
   gotoxy(68,16);
   printf("|2.Toys           |\n");
   gotoxy(68,17);
   printf("|3.Body Care Items|\n");
   gotoxy(68,18);
   printf("-------------------\n");
  gotoxy(65,21);
   printf("Choose Your Option : ");
   scanf("%d",&a);
   system("Cls");
   if(a==1)
   {
      clothes();
   }
   else if(a==2)
   {
     toys();
   }
   else
   {
      body_care();
   }



}
void Pant()
{
    int a,b;
     system ("COLOR 0E");
    gotoxy(72,5);
    printf("-----------------\n");
    printf(" \t\t\t\t\t\t\t\t\t| Types of pants|\n");
    printf(" \t\t\t\t\t\t\t\t\t|    are here   |\n");
    printf(" \t\t\t\t\t\t\t\t\t|     below     |\n");
    printf(" \t\t\t\t\t\t\t\t\t-----------------\n");
    gotoxy(72,10);
    printf(" ---------------\n");
    printf("\t\t\t\t\t\t\t\t\t |1.Jeans      |\n");
    printf("\t\t\t\t\t\t\t\t\t |2.Sweat Pants|\n");
    printf("\t\t\t\t\t\t\t\t\t |3.Cargos     |\n");
    printf("\t\t\t\t\t\t\t\t\t ---------------");
    gotoxy(72,17);
    printf("choose your option:");
    scanf("%d",&a);
    system("Cls");
    if(a==1)
    {
        total+=600;
    }

    else if(a==2)
    {
        total+=400;
    }

    else
    {
        total+=5000;
    }



}
void Shirt()
{
    int a,b;
    system ("COLOR 0E");
    gotoxy(65,5);
    printf("-----------------\n");
    gotoxy(65,6);
    printf("|Types of shirts|\n");
    gotoxy(65,7);
    printf("|   are given   |\n");
    gotoxy(65,8);
    printf("|    below      |\n");
    gotoxy(65,9);
    printf("-----------------\n");
    gotoxy(65,12);
    printf("----------------\n");
    gotoxy(65,13);
    printf("|1.Casual Shirt|\n");
    gotoxy(65,14);
    printf("|2.T-shirt     |\n");
    gotoxy(65,15);
    printf("|3.Sweat-shirt |\n");
    gotoxy(65,16);
    printf("----------------\n");
    gotoxy(60,20);

    printf("choose your option:");

    scanf("%d",&a);
    system("Cls");
    if(a==1)
    {
        total+=1000;
    }
    if(a==2)
    {
        total+=500;
    }
    if(a==3)
    {
        total+=2600;
    }
}
void Watch()
{
    int a;
    system ("COLOR 0E");

    gotoxy(65,5);
    printf("-------------------\n");
    gotoxy(65,6);
    printf("|     Types of    |\n");
    gotoxy(65,7);
    printf("|    watch are    |\n");
    gotoxy(65,8);
    printf("|   given below   |\n");
    gotoxy(65,9);
    printf("-------------------\n");
    gotoxy(65,12);
    printf("-----------\n");
    gotoxy(65,13);
    printf("|1.Quartz |");
    gotoxy(65,14);
    printf("|2.Sports |");
    gotoxy(65,15);
    printf("|3.Casual |");
    gotoxy(66,16);
    printf("-----------");
    gotoxy(66,19);

    printf("Choose Your Option : ");


    scanf("%d",&a);
    system("Cls");
    if(a==1)
    {
        total+=2500;
    }
    else if(a==2)
    {
        total+=3500;
    }
    else
    {
        total+=1500;
    }
}
void mens_item()
{
    int a;
    system ("COLOR 0E");
    gotoxy(65,5);
    printf("$$$$$$$$$$$$$$$$$$$$$$$\n");
    gotoxy(65,6);
    printf("$       WELCOME       $\n");
    gotoxy(65,7);
    printf("$         TO          $\n");
    gotoxy(65,8);
    printf("$     MANS CORNER     $\n");
    gotoxy(65,9);
    printf("$$$$$$$$$$$$$$$$$$$$$$$");
    gotoxy(63,14);
    printf("------------------------------");
    gotoxy(63,15);
    printf("|What Are You Looking for?   |\n");
    gotoxy(63,16);
    printf("------------------------------\n");
    gotoxy(65,19);
    printf("--------------\n");
    gotoxy(65,20);
    printf("|1.Pant      |\n");
    gotoxy(65,21);
    printf("|2.Shirt     |\n");
    gotoxy(65,22);
    printf("|3.watch     |\n");
    gotoxy(65,23);
    printf("--------------\n");
    gotoxy(65,26);
    printf("choose your option:");
    scanf("%d",&a);
    system("Cls");
    if(a==1)
    {
        Pant();
    }
    else if(a==2)
    {
        Shirt();
    }
    else if(a==3)
    {
        Watch();
    }
}
 void womans_item()
{
    int a, b, c, d;
    system ("COLOR 0E");
    gotoxy (73, 5);
    printf ("* *** ** *** * *** * ** **** *** **\n");
    gotoxy (73, 6);
    printf ("|             WELCOME             |\n");
    gotoxy (73, 7);
    printf ("|               To                |\n");
    gotoxy (73, 8);
    printf ("|           WOMENS  CORNER        |\n");
    gotoxy (73, 9);
    printf ("* *** ** *** * *** * ** **** *** **\n");
    gotoxy (65,13);
    printf ("----------------------------------------------------");
    gotoxy (65,14);
    printf ("|Available product of women collection in our shop |\n");
    gotoxy (65, 15);
    printf ("----------------------------------------------------");
    gotoxy (80,18);
    printf ("-----------------\n");
    gotoxy (80,19);
    printf ("| 1.Saree       |\n");
    gotoxy (80,20);
    printf ("| 2.Kurti       |\n");
    gotoxy (80,21);
    printf ("| 3.Salwar Kamiz|\n");
    gotoxy (80,22);
    printf ("-----------------");
    gotoxy (76,25);
    printf ("Choose your option: ");
    scanf ("%d", &a);
    system ("Cls");
    if (a==1)
    {
        gotoxy (65,14);
        printf("----------------------------------\n");
        gotoxy(65,15);
        printf ("| Type of Saree are given below |\n");
        gotoxy(65,16);
        printf("---------------------------------\n");
        gotoxy(65,20);
        printf("--------------------\n");
        gotoxy(65,21);
        printf("| 1.Half Silk      |\n");
        gotoxy(65,22);
        printf("| 2.Jamdani        |\n");
        gotoxy(65,23);
        printf("| 3.Deshi Boutique |\n");
        gotoxy(65,24);
        printf("--------------------\n");

        gotoxy (65,28);
        printf ("Choose your option: ");
        scanf ("%d", &b);
        system ("Cls");
        if (b==1)
        {
            total+=600;
        }
        else if (b==2)
        {
            total+=800;
        }
        else
            total+=1000;
    }
    else if (a==2)
    {
        gotoxy (65,14);
        printf("----------------------------------\n");
        gotoxy(65,15);
        printf("| Types of Kurti are given below |\n");
        gotoxy(65,16);
        printf("----------------------------------\n");
        gotoxy (65,19);
        printf("--------------------\n");
        gotoxy(65,20);
        printf("| 1.Frock kurti    |\n");
        gotoxy(65,21);
        printf("| 2.Anarkali Kurti |\n");
        gotoxy(65,22);
        printf("| 3.Straight Kurti |\n");
        gotoxy(65,23);
        printf("--------------------\n");

        gotoxy (65,26);
        printf ("Choose your option: ");
        scanf ("%d", &c);
        system("Cls");
        if (c==1)
        {
            total+=1200;
        }
        else if (c==2)
        {
            total+=1500;
        }
        else
        {
            total+=1800;
        }
    }
    else if (a==3)
    {
        gotoxy(65,14);
        printf("------------------------------------------\n");
        gotoxy(65,15);
        printf ("| Types of Salwar Kamiz are given below |\n");
        gotoxy(65,16);
        printf("------------------------------------------\n");
        gotoxy(65,19);
        printf("--------------------------\n");
        gotoxy(65,20);
        printf("| 1.Designer Kamiz       |\n");
        gotoxy(65,21);
        printf("| 2. Block Batik Kamiz   |\n");
        gotoxy(65,22);
        printf("| 3.Unstich Fabric Kamiz |");
        gotoxy(65,23);
        printf("--------------------------\n");
        printf ("1. Designer Kamiz 2. Block Batik Kamiz 3. Unstich Fabric Kamiz\n");
        gotoxy (65, 28);
        printf ("Choose your option: ");
        scanf ("%d", &d);
        system ("Cls");
        if (d==1)
        {
            total+=2000;
        }

    }
    else if (d==2)
    {
        total+=2500;
    }
    else
    {
        total+=3000;
    }

}
int funct()
{
    int a;
     system ("COLOR 0E");
    gotoxy(65,5);
    printf("---------------------------");
    gotoxy(65,6);
    printf("|press 1 for mans item    |\n");
    gotoxy(65,7);
    printf("|Press 2 for womans item  |\n");
    gotoxy(65,8);
    printf("|Press 3 for baby item    |\n");
    gotoxy(65,9);
    printf("|press 4 for grocery item |\n");
    gotoxy(65,10);
    printf("---------------------------");
    gotoxy(65,13);
    printf("Your choice:");
    scanf("%d",&a);
    system("Cls");
    return a;
}
int menu()
{
    int d;
     system ("COLOR 0E");
    gotoxy(65,5);
    printf("---------------------\n");
    gotoxy(65,6);
    printf("| press 1 for menu  |\n");
    gotoxy(65,7);
    printf("| press 2 for total |\n");

    gotoxy(65,8);
    printf("---------------------\n");
    gotoxy(65,12);
    printf("Choose your option:");
    scanf("%d",&d);
    system("Cls");
    return d;
}
int quiz()
{
    int a,b,marks,count1,count2,count3;
    system("COLOR 0E");
    gotoxy(73,5);
    printf("*** * ** ** * ** ***\n");
    gotoxy(73,6);
    printf("*      WELCOME     *\n");
    gotoxy(73,7);
    printf("*        TO        *\n");
    gotoxy(73,8);
    printf("*     Q U I Z      *\n");
    gotoxy(73,9);
    printf("*** * ** ** * ** ***\n");
    gotoxy(70,13);
    printf("|=============================|\n");
    gotoxy(70,14);
    printf("| Which   type   of   quiz    |\n");
    gotoxy(70,15);
    printf("|        do you like?         |\n");
    gotoxy(70,16);
    printf("|1.Sports 2.General_knowledge |\n");
    gotoxy(70,17);
    printf("|=============================|\n");
    gotoxy(70,20);
    printf("Choose your option:");
    scanf("%d",&a);
    system("Cls");
    if(a==1)
    {
        gotoxy(72,5);
        printf("----------------------------\n");
        gotoxy(72,6);
        printf("|       S P O R T S        |\n");
        gotoxy(72,7);
        printf("----------------------------\n");
        gotoxy(59,10);
        printf("----------------------------------------------------\n");
        gotoxy(59,11);
        printf("|Bangladesh Cricket Board founded in 1.1976  2.1972|\n");
        gotoxy(59,12);
        printf("----------------------------------------------------\n");
        gotoxy(59,15);
        printf("Choose your option:");
        scanf("%d",&a);
        system("Cls");
        if(a==1)
        {
            count1=1;
        }
        else if(a==2)
        {
            count1=0;
        }
        gotoxy(59,10);
        printf("----------------------------------------------------------------\n");
        gotoxy(59,11);
        printf("|Team Bangladesh's new ranking in the test cricket 1.8th 2.9th |\n");
        gotoxy(59,12);
        printf("----------------------------------------------------------------\n");
        gotoxy(59,15);
        printf("Choose your option:");
        scanf("%d",&a);
        system("Cls");
        if(a==1)
        {
            count2=0;
        }
        else if(a==2)
        {
            count2=1;
        }
        gotoxy(59,10);
        printf("-----------------------------------------------------\n");
        gotoxy(59,11);
        printf("|Which country was the host of ASIA CUP HOCKY 2017? |\n");
        gotoxy(59,12);
        printf("|           1.Bangladesh 2.India                    |\n");
        gotoxy(59,13);
        printf("-----------------------------------------------------\n");
        gotoxy(59,16);
        printf("Choose your option:");
        scanf("%d",&a);
        system("Cls");
        if(a==1)
        {
            count3=1;
        }
        else if(a==2)
        {
            count3=0;
        }


    marks=count1+count2+count3;

}

else if(a==2)
{
        gotoxy(72,5);
        printf("----------------------------\n");
        gotoxy(72,6);
        printf("|    GENERAL  KNOWLEDGE    |\n");
        gotoxy(72,7);
        printf("----------------------------\n");
    gotoxy(59,10);
    printf("-----------------------------------------------\n");
    gotoxy(59,11);
    printf("|Full form of FIR 1.First Information Report  |\n");
    gotoxy(59,12);
    printf("|                 2.First Investigation Report|\n");
    gotoxy(59,13);
    printf("-----------------------------------------------\n");
    gotoxy(59,17);
    printf("Choose your option:");
    scanf("%d",&a);
    system("Cls");
    if(a==1)
    {
        count1=1;
    }
    else if(a==2)
    {
        count1=0;
    }
        gotoxy(59,10);
        printf("-----------------------------------------------------\n");
        gotoxy(59,11);
        printf("|Who is the directer of the film LET THERE BE LIGHT?|\n");
        gotoxy(59,12);
        printf("|        1.Jahir Rayhan 2.Amzad Hossain             |\n");
        gotoxy(59,13);
        printf("|---------------------------------------------------|\n");
        gotoxy(59,17);
        printf("Choose your option:");
        scanf("%d",&a);
        system("Cls");
        if(a==1)
        {
            count2=1;
        }
        else if(a==2)
        {
            count2=0;
        }

            gotoxy(59,10);
            printf("----------------------------------------------------------------\n");
            gotoxy(59,11);
            printf("|When was VAT launched first in Bangladesh? 1.in 1973 2.in 1991|\n");
            gotoxy(59,12);
            printf("----------------------------------------------------------------\n");
            gotoxy(59,16);
            printf("Choose your option:");
            scanf("%d",&a);
            system("Cls");
            if(a==1)
            {
                count3=0;
            }
            else if(a==2)
            {
                count3=1;
            }
            gotoxy(59,10);
            marks=count1+count2+count3;
            gotoxy(59,2);
            printf("** Your marks:%d**,marks");



}



   return marks*10;
}
void total_1()
{
    int a,k;
    gotoxy(55,5);
    printf("**we  have  arranged  a ~~QUIZ  GAME~~ for  our   beloved  customer**\n");
    gotoxy(55,6);
    printf("              **Play the game & Grab some discount**                  \n");
    gotoxy(55,13);
    printf("Press 1 for continue the quiz part!!!\n");
    gotoxy(55,15);
    printf("Otherwise press 2\n");
    gotoxy(55,17);
    printf("Choose your option:");
    scanf("%d",&a);
    system("Cls");
    if(a==1)
    {


        k=quiz();
        float price=(total-(total*1.0)*(k/100.0));
        gotoxy(59,2);
        printf("**your bill after discount=%f**",price);
    }
    else
    {
        gotoxy(70,2);
        printf("**Total cost:%d**",total);
    }


}
int main()
{
    int a,b,c;
     system ("COLOR 0E");
    char d[20];
    gotoxy(65,5);
    printf("****************************\n");
    gotoxy(65,6);
    printf("*          WELCOME         *\n");
    gotoxy(65,7);
    printf("*            TO            *\n");
    gotoxy(65,8);
    printf("*      ARRAINTER SHOP      *\n");
    gotoxy(65,9);
    printf("****************************\n");
   gotoxy(68,14);
    printf("-------------------\n");
    gotoxy(68,15);
    printf("|     Create      |\n");
    gotoxy(68,16);
    printf("|       A         |\n");
    gotoxy(68,17);
    printf("|    Account      |\n");
    gotoxy(68,18);
    printf("-------------------\n");
    gotoxy(68,22);
    printf("Your Name:");
    gets(d);
    gotoxy(68,23);
    printf("Your pass:");
    scanf("%d",&c);
    system("Cls");


    while(menu()==1)
    {
        int l=funct();
        if(l==1)
            mens_item();
        if(l==2)
            womans_item();
        if(l==3)
            baby_item();
        if(l==4)
            grocery_item();
            gotoxy(65,5);
        printf("thanks for visiting\n");
    }

    if(total==0)
    {
        int x;
        gotoxy(59,5);
        printf("------------------------------\n");

        gotoxy(59,6);
        printf("|You have not choose anything|\n");
        gotoxy(59,7);
        printf("------------------------------\n");
        gotoxy(59,9);
        printf("1.Menu \n");
        gotoxy(59,10);
        printf("2.Exit\n" );
        gotoxy(59,12);
        printf("Your Choice:");
        scanf("%d",&x);
        system("Cls");
        if(x==1)
        {
            while(1)
            {
                int l=funct();
                if(l==1)
                    mens_item();
                if(l==2)
                    womans_item();
                if(l==3)
                    baby_item();
                if(l==4)
                    grocery_item();
                printf("thanks for visiting\n");
                if(menu()==2)
                    break;
            }
        }
        else
        {
            return 0;
        }


    }

    if(total!=0)
    {
        total_1();
        delivery();
    }

}

