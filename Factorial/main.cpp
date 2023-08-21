#include <iostream>
double solveFactorial(int curFactorial, double curNumber){
    if (curNumber==0)
        curNumber = curFactorial;
    if (curFactorial==1)
        return curNumber;

    curFactorial--;
    curNumber*=curFactorial;
    if(curFactorial!=1)
        curNumber = solveFactorial(curFactorial,curNumber);

    return curNumber;
}
int main() {

    int factorial{0};
    std::cout << "Enter a factorial!" << std::endl;
    std::cin >> factorial;
    if (factorial <= 0){
        std::cout << "Is 0 or lower. Please enter a whole number above 0." << std::endl;
        return 1;
    }
    else if (factorial> 170){
        std::cout << "Is higher than 170. Please enter a whole number below 170." << std::endl;
        return 1;
    }
    std::cout << solveFactorial(factorial, 0) << std::endl;
    return 0;
}
