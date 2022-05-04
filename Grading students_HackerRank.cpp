#include <iostream>
using namespace std;

/*
 * Completed
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
        for(int i=0;i<grades.size();i++){
        if(grades.at(i)<38){
            continue;
        }else if(grades.at(i)%5>=3){
            grades.at(i)+=5-grades.at(i)%5;
        }
    }
    return grades;
}

