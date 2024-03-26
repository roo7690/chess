#include <stdio.h>
#include "style.h"

struct Style _style={0,cW,sBl,0};

//Commencer un style
void start_style(char text[],char background[]){
  _style.active=1;
  _style.text=text;
  _style.background=background;
}

//Commencer un clignotement
void blink(){
  _style.blink=1;
}

//Mettre fin à un style
void end_style(){
  _style.active=0;
  _style.blink=0;
}