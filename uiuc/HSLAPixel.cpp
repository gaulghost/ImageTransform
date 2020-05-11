/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
    HSLAPixel::HSLAPixel(){
      h = 0;
      s = 0;
      l = 1;
      a = 1;

    }

    HSLAPixel::HSLAPixel(double h,double s,double l){
      a = 1;
      if (h<0){
        int i;
        i = -(h/360);
        h = ((360*(i+1)) + h);
      }
      if (h>360){
        int i;
        i = (h/360);
        h = (h - (360*i));
      }
      if (s<0){
        s = 0;
      }
      if(s>1){
        s = 1;
      }
      if (l<0){
        l = 0;
      }
      if(l>1){
        l = 1;
      }
    }

    HSLAPixel::HSLAPixel(double h, double s, double l, double a){
      if (h<0){
        int i;
        i = -(h/360);
        h = ((360*(i+1)) + h);
      }
      if (h>360){
        int i;
        i = (h/360);
        h = (h - (360*i));
      }
      if (s<0){
        s = 0;
      }
      if(s>1){
        s = 1;
      }
      if (l<0){
        l = 0;
      }
      if(l>1){
        l = 1;
      }
      if (a<0){
        a = 0;
      }
      if(a>1){
        a = 1;
      }
    }

}
