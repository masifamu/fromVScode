/**
 * @file maincode.cpp
 * @author Mohammad Asif (asif@punchline.in)
 * @brief This code is somenly dedicated to testing c++ code with vscode editor
 * @version 0.1
 * @date 2021-01-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
using namespace std;

/**
 * @brief the is the prototype for the function sum
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int sum(int a, int b);
/**
 * @brief trying the add the comments to the main function
 * 
 * @return int 
 */
int main(){
    cout<<"hi first code from vscode editor"<<endl;
    cout<<"making changes for github"<<endl;
    cout<<"sum of two numbers is "<<sum(10,20)<<endl;
    return 0;
}
/**
 * @brief definition of function sum
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int sum(int a, int b){
    return(a+b);
}