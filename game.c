#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <time.h>




  int main(int argc, char *argv[]){
    int x1, y1, x, y, a, x2, y2, x1_n, y1_n, x1_izm, y1_izm;
    int rnd1, rnd2, rnd_jump, jump;
    double d, m;
    //printf("");
    printf("                    MAN-EATING RABBIT\n");
   // printSpaces(20);
    printf("                    CREATIVE COMPUTING\n");
    //printSpaces(18);
    printf("                  MORRISTOWN, NEW JERSEY\n\n\n\n");
    printf("YOU ARE IN A PIT WITH A MAN-EATING RABBIT.\n");
    printf("THE CENTER IS (0,0) AND IT HAS A RADIUS OF 10\n");
    printf("IF YOU CAN AVOID THE RABBIT FOR 10 MOVES YOU WILL BE\n");
    printf("RELEASED.  YOU AND THE RABBIT CAN MOVE ONLY 1 SPACE EACH\n");
    printf("HOWEVER THE RABBIT CAN DO MULTIPLE JUMPS.\n");
    printf("YOU CAN TRAVEL AT THESE ANGLES\n");
    printf("0,45,90,135,180,225,270,315,340\n\n\n");

    //Дроп игрока
    printf("WHERE WOULD YOU LIKE TO BE DROPPED ");
    scanf("%d, %d", &x1, &y1);
    double sq;
    sq = sqrt(abs(x1*x1+y1*y1));
    while(sq > 10){
      printf("WHERE WOULD YOU LIKE TO BE DROPPED ");
      scanf("%d, %d", &x1, &y1);
      sq = sqrt(abs(x1*x1+y1*y1));
    }

    // Дроп зайца
    srand(time(NULL));
    sq = 0;
    rnd1 = 1 + rand() % (20);
    rnd2 = 1 + rand() % (20);
    x = rnd1 - 14;
    y = rnd2 - 14;
    d = sqrt(abs(((x-x1)*(x-x1))+((y-y1)*(y-y1))));
      while (d > 10){
        rnd1 = 1 + rand() % (20);
        rnd2 = 1 + rand() % (20);
        x = rnd1 - 14;
        y = rnd2 - 14;
        d = sqrt(abs(((x-x1)*(x-x1))+((y-y1)*(y-y1))));
      }
    //проверка на d = 0
     if(d == 0){
        printf("**CRUNCH** WELL R.I.P.\n");
       return 0;
    }
    //проверка на одинаковые координаты у зайца и человека 
    if (x1 == x && y1 == y){
      printf("*****SQUISH*****\n");
      printf("THE RABBIT IS DEAD!  YOU ARE SET FREE!");
      return 0;
    }
    else{
    printf("RABBIT AT ( %d", x); 
    printf(" , %d", y);
    printf(" ) ");
    printf(" AND DISTANCE %f", d);
    printf("\n");
    }

    
    //начало цикла для turnов
    for(int i = 1; i <= 10; i++){
      
      printf("\nTURN # %d", i);
      printf("   HUMAN AT ( %d", x1); 
      printf(" , %d", y1);
      printf(" ) ");
      printf("\nAT WHAT ANGLE WILL YOU RUN ? ");
      //0,45,90,135,180,225,270,315,340
      scanf("%d", &a);
      

      printf("RUNNING ......");
      x1_izm = x1;
      y1_izm = y1;
      if(a == 0){
        x1 = x1 + 1;
      }
      else if(a == 45){
        x1 = x1 + 1;
        y1 = y1 + 1;
      }
      else if(a == 90){
        y1 = y1 + 1;
      }
      else if(a == 135){
        x1 = x1 - 1;
        y1 = y1 + 1;
      }
      else if(a == 180){
        x1 = x1 - 1;
      }
      else if(a == 225){
        x1 = x1 - 1;
        y1 = y1 - 1;
      }
      else if(a == 270){
        y1 = y1 - 1;
      }
      else if(a == 315){
        x1 = x1 + 1;
        y1 = y1 - 1;
      }
      else if(a == 360){
        x1 = x1 + 1;
      }
      m = 1;
      if((abs((a/10)* 10)-a) != 5){
        x2 = (m * cos(a * (3.14159/180)));
        y2 = (m * sin(a * (3.14159/180)));
      }
      else if((abs((a/10)* 10)-a) == 5){
        m = sqrt(2);
        x2 = (m * cos(a * (3.14159/180)));
        y2 = (m * sin(a * (3.14159/180)));
      }
      while(sqrt(((x1 + x2) * (x1 + x2) + (y1 + y2) * (y1 + y2))) > 10){
      printf("YOU CAN'T GO INTO A WALL!!");
      printf("\nAT WHAT ANGLE WILL YOU RUN ? ");
      x1 = x1_izm;
      y1 = y1_izm;
      scanf("%d", &a);
      printf("RUNNING ......");
      if(a == 0){
        x1_izm = x1 + 1;
      }
      else if(a == 45){
        x1 = x1 + 1;
        y1 = y1 + 1;
      }
      else if(a == 90){
        y1 = y1 + 1;
      }
      else if(a == 135){
        x1 = x1 - 1;
        y1 = y1 + 1;
      }
      else if(a == 180){
        x1 = x1 - 1;
      }
      else if(a == 225){
        x1 = x1 - 1;
        y1 = y1 - 1;
      }
      else if(a == 270){
        y1 = y1 - 1;
      }
      else if(a == 315){
        x1 = x1 + 1;
        y1 = y1 - 1;
      }
      else if(a == 360){
        x1 = x1 + 1;
      }
      m = 1;
      if((abs((a/10)* 10)-a) != 5){
        x2 = (m * cos(a * (3.14159/180)));
        y2 = (m * sin(a * (3.14159/180)));
      }
      else if((abs((a/10)* 10)-a) == 5){
        m = sqrt(2);
        x2 = (m * cos(a * (3.14159/180)));
        y2 = (m * sin(a * (3.14159/180)));
      }
      }

      //проверка игрок бежит на зайца использую новые перенные тк старые будут нужны ниже
      x1_n = x1;
      y1_n = y1;

      x1_n = (x1_n * 1000)/1000 + x2;
      y1_n = (y1_n * 1000)/1000 + y2;

      x1_n = x1_n + 0.5;
      y1_n = y1_n + 0.5;

      if(x == x1_n && y == y1_n){
        printf("YOU RAN RIGHT INTO THE RABBIT!!\n");
        printf("**CRUNCH** WELL R.I.P.");
        return 0;
      }

      printf("HUMAN YOU ARE NOW AT( %d", x1);
      printf(" , %d", y1);
      printf(" ) ");
      //проверка на стену с новыми коордами тк старые нужные ниже
      
    
      // количество прыжков для зайца
      
      rnd_jump = 1 + rand() % 2; //макс 2 прыжка иначе трудно победить
      jump = 1;
      
     // printf("\n%d\n",rnd_jump);
      while(jump<=rnd_jump){
      //printf("\nTHE RABBIT IS POUNCING AT ANGLE..... ");
      if(x1 == x){
        if (y1 < y){
          y = y - 1;
          printf("\nTHE RABBIT IS POUNCING AT ANGLE..... 270");
        }else if(y1 > y){
          y = y + 1;
          printf("\nTHE RABBIT IS POUNCING AT ANGLE..... 90");
        }
      }
      else if(y1 == y){
        if (x1 < x){
          x = x - 1;
          printf("\nTHE RABBIT IS POUNCING AT ANGLE..... 180");
        }else if(x1 > x){
          x = x + 1;
          printf("\nTHE RABBIT IS POUNCING AT ANGLE..... 0");
        }
      }
      else if(x1 < x && y1 < y){
        x = x - 1;
        y = y - 1;
        printf("\nTHE RABBIT IS POUNCING AT ANGLE..... 225");
      }else if(x1 > x && y1 > y){
        x = x + 1;
        y = y + 1;
        printf("\nTHE RABBIT IS POUNCING AT ANGLE..... 45");
      }
      else if(x1 < x && y1 > y){
       x = x - 1;
       y = y + 1;
       printf("\nTHE RABBIT IS POUNCING AT ANGLE..... 135");
      }else if(x1 > x && y1 < y){
       x = x + 1;
       y = y - 1;
       printf("\nTHE RABBIT IS POUNCING AT ANGLE..... 315");
      }
      jump = jump + 1;
      }
      printf("\nRABBIT AT ( %d", x); 
      printf(" , %d", y);
      printf(" ) ");
      
      d = sqrt(abs(((x-x1)*(x-x1))+((y-y1)*(y-y1))));
      printf("AND DISTANCE %f", d);
      printf("\n");

      //проверкана 
      if(sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1))) == 0){
        printf("**CRUNCH** WELL R.I.P.");
        return 0;
      }

    }
    printf("YOU ARE RELEASED!");
    return 0;
  }
