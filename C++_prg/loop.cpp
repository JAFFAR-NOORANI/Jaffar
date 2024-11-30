// pattern
/*
       *
     * * *
   * * * * *
 * * * * * * *
*/
#include <iostream>
using namespace std;
int main () {
int row,col,space;
for (row=0;row<4;row++){
    for (space=4;space>=row;space--){
        cout << "  ";
    }
    for (col=0;col<=2*row;col++){
        cout << "* ";
    }
    cout << endl;
}

}
