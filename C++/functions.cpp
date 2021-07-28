#include<iostream>
/**
 * @brief this function takes input 1 2 3 4 end
 * at last one should write an invalid input so that the loop breaks.
 * because std::cin does'nt treat enter as end of line character.
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

/**
 * @brief 
 * This function counts the frequency of numbers entered through key board.
 * Remember numbers should entered in increasing order else they will be individually printed
 * 
 * what if all the numbers entered are equal? nothing will print.
 * what if all the numbers are different with no repition? works fine.
 * 
 * 
 * Remember, to terminate the code you must write an invalid input like "end"
 */
void numberCounter(){
    int number=0, currNum=0;

    std::cout<<"Enter Numbers"<<std::endl;
    if(std::cin>>number){
        int cnt=1;
        currNum = number;
        while(std::cin>>number){
            if(number == currNum){
                cnt++;
            }else{
                std::cout << currNum << " occurs "<< cnt << " times" << std::endl;
                cnt=1;
                currNum = number;
            }
        }
    }
}