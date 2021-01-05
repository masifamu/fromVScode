/**
 * @file maincode.cpp
 * @author Mohammad Asif (asif@punchline.in)
 * @brief This code is for learning "how to use the C++ using vscode editor"
 * @version 0.1
 * @date 2021-01-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <cmath>
using namespace std;
/**
 * @brief This function finds the distance between P1(x1,y1) and P2(x2,y2)
 * 
 * 
 * @param x1 
 * @param y1 
 * @param x2 
 * @param y2 
 * @return double
 */
double distance(double x1, double y1, double x2, double y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int main(){
    cout<<"the distance between (1,1) and (2,2) is: "<<distance(1,1,2,2)<<endl;
    return 0;
}