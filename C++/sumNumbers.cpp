#include<iostream>
/**
 * @brief this function takes input 1 2 3 4 end
 * at last one should write an invalid input so that the loop breaks.
 * 
 * @return int 
 */
int sum(){
    int values = 0;
    int sum = 0;
    std::cout<<"Input Numbers: "<<std::endl;
    while(std::cin >> values)
        sum += values;
    std::cout<<"sum of given numbers is: "<<sum<<std::endl;

    return 0;
}

