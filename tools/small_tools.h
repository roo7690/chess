#include <stdio.h>

#ifdef __linux__

  #include <ncurses.h>

  #define key_left KEY_LEFT
  #define key_right KEY_RIGHT
  #define key_up KEY_UP
  #define key_down KEY_DOWN
  #define key_enter 10

#else

  #include <conio.h>

  #define key_left 75
  #define key_right 77
  #define key_up 72
  #define key_down 80
  #define key_enter 13

#endif

//Permet d'initialiser l'environnement
void init();

//Permet de récupérer la touche du clavier pressée
int getKey();

//Permet d'afficher du texte à une position donnée
void draw(int row,int col,char* str, ...);