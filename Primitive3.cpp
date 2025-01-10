#include <iostream>
#include <cmath>
using namespace std;

int myRoundingFunction(double example) {
    if (example >= 0) {
    //if the value is positive, then check if the decimal of the value is greater than or lesser then 0.5
     if (example - floor(example) >= 0.5){
        return ceil(example);
     } else {
        return floor(example);
     }
    } 
    else {
       if (example - floor(example) <= -0.5){
          return floor(example);
     } else {
        return ceil(example);
     }
    }

}


int main()
{
    //These are the test cases that are written in the assignment
    double example = -0.4;

    int result = myRoundingFunction(example);
     std::cout << "result: " << result << std::endl;

    return 0;
}
