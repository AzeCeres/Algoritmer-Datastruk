#include <iostream>

void solveFactorial(double fibArray[], int index, int maxIndex){
    if (index-2<0) {
        index++;
        solveFactorial(fibArray, index, maxIndex);
        return;
    }
    if (index >= maxIndex) return;
    fibArray[index]= fibArray[index-1] + fibArray[index-2];
    index++;
    solveFactorial(fibArray,index,maxIndex);
}

int main() {
    static int index{20}; // Works up to ~ 1450
    int start0{0};
    int start1{0};
    std::cout << "Enter the first 2 numbers in the sequence" << std::endl;
    std::cin>> start0;
    std::cin>> start1;

    double fibonacciArray[index]{0};
    fibonacciArray[0] = start0;
    fibonacciArray[1] = start1;
    solveFactorial(fibonacciArray, 0, index);
    //for (int i{2}; i < index; i++) {
    //    if(i-2 < 0) continue;
    //    fibonacciArray[i] = fibonacciArray[i-2] + fibonacciArray[i-1];
    //}
    for (int i{0}; i < index; i++){
        std::cout << fibonacciArray[i] << ", ";
    }
    return 0;
}
