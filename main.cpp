#include <iostream>
using namespace std;

int main() {

    float a = 0 , b = 0 , c = 0 , area_triangolo = 0 , area_quadrato = 0 , area_rettangolo = 0 , area_trapezio = 0 ;

    cin >> a >> b >> c ;

    area_triangolo = (a * b)/2 ;
    area_quadrato = a * a  ;
    area_rettangolo = a * b  ;
    area_trapezio = ((a + b) * c)/2 ;

    return 0;
}
