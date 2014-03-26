/* 
 * File:   main.cpp
 * Author: alexander
 *
 * Created on 26 марта 2014 г., 0:06
 */
#include<cstdlib>
#include <iostream>
#include <math.h>
#include <typeinfo>

#define _USE_MATH_DEFINES

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"Lesson 2: Datatypes"<<endl;
    int    _a;
    int    _b=7;
    int    _c=-54.5;
    string _d="I'm a string";
    char   _e=_d[2];
    long   _f=8678578435737685487686;
    double _g=M_PI;
    bool   _h;
    
    
    
    cout<<"VALUES OF THESE VARIABLES"<<endl;
    cout<<_a<<endl;
    cout<<_b<<endl;
    cout<<_c<<endl;
    cout<<_d<<endl;
    cout<<_e<<endl;
    cout<<_f<<" instead of 8678578435737685487686"<<endl;
    cout<<_g<<endl;
    cout<<_h<<endl;
    cout<<"-------------------"<<endl;
      cout<<"GAMES WITH BOOLEAN VARIABLES"<<endl;
    _h=0;
    cout<<"assigned to 0 "<<_h<<endl;
    
    _h=1;
    cout<<"assigned to 1 "<<_h<<endl;
    
    _h=21;
    cout<<boolalpha<<"assigned to 21 "<<_h<<" but is boolean "<<(typeid(_h) ==typeid(bool))<<endl;
    
    _h=true;
    cout<<"assigned to true "<<_h<<endl;
    
    _h=false;
    cout<<"assigned to false "<<_h<<endl;
    
   
    
    return 0;
}

