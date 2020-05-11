/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {
  class HSLAPixel {
  private:
    /* data */

  public:
    double h,s,l,a;
    HSLAPixel();
    HSLAPixel(double h,double s,double l);
    HSLAPixel(double h,double s,double l,double a);
    // HSLAPixel (arguments);
    // virtual ~HSLAPixel ();
  };

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)


}
