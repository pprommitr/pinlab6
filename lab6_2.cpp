#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    return deg * M_PI/ 180;
}

double rad2deg(double rad){
    return rad * 180 / M_PI;
}

double findXComponent(double l1, double l2, double rad1, double rad2){
    return l1 * cos(rad1) + l2 * cos(rad2);
}

double findYComponent(double l1, double l2, double rad1, double rad2){
    return l1 * sin(rad1) + l2 * sin(rad2);
}

double pythagoras(double xcomp, double ycomp){
    return sqrt(pow(xcomp,2) + pow(ycomp,2));
}

void showResult(double length, double direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}