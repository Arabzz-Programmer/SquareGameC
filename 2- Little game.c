#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

struct cube {
   int x;    
   int y; 
   char direction;
       };
       struct goal{
              int x;
              int y;
              };

int main(void) {
    // declaring
    int i,j;
    int score = 0;
    struct cube p;
    p.x = 2;
    p.y = 2;
    p.direction = ' ';
    struct goal g;
    srand(time(NULL));
    g.x = rand() % 5;
    g.y = rand() % 5;
    
    // creating area
    while(1) {
    system("cls");
    for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
          if (p.x == i && p.y == j) {
          printf("°");
                 } else if (g.x == i && g.y == j) {
         printf("#");
                     } else {
                            printf("²");
                            }
          }
          printf("\n");
          }
          // things to explain the game
          printf("--------------------");
          printf("\nScore: %d\n", score);
          printf("\n\'°\' = Player");
          printf("\n\'#\' = Point");
          printf("\n\'²\' = Null");
          p.direction = getch();

// keybinds
switch (p.direction){
       case 'w':p.x -= 1;break;
       case 's':p.x += 1;break;
       case 'a':p.y -= 1;break;
       case 'd':p.y += 1;break;     
       }
       // limits
       if (p.x > 4) {
               p.x--;
               } else if (p.x < 0) {
                      p.x++;
                      } else if (p.y > 4) {
                      p.y--;
                             } else if (p.y < 0) {
                                    p.y++;
                                    }
       // point incremention       
       if (p.x == g.x && p.y == g.y) {
               g.x = rand() % 5;
               g.y = rand() % 5;
               score++;
               }
       Sleep(100);
       }

}
