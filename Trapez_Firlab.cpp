#include <stdio.h>
#include <iostream>
using namespace std;

void print_menu(){
    std::cout << "Enter any option \n \
            1) perimeter of a trapezoid \n \
            2) area of a trapezoid \n \
            3) midle line of a trapezoid \n \
            "; 

}

int perimeter(){
    int a, b, c, d; //this is sides!
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int perimeter = a+b+c+d;
    return perimeter;
}

int area(){
    int a, b, h;//SB - side of the base
    scanf("%d %d %d", &a, &b, &h);
    int area = ((a+b)/2)*h;
    return area;

}

int midle_line(){
    int a, b;
    scanf("%d %d", &a, &b);
    int midle_line = (a+b)/2;
    return midle_line;

}





int main(int argc, char *argv[]){
    int option;

    while(1){
        print_menu();
        scanf("%d", &option);
        switch(option){
            case 1: {
                std::cout << "Enter all sides \n>>>";
                int perim = perimeter();
                std::cout <<"perimeter of trapezoid is " << perim \
                    << "\n##############" << std::endl;
                break;
                }
            case 2:{
                std::cout << "Enter sides a, b of the base and height h \n>>>";
                int are = area();
                std::cout << "area of a trapezoid is " << are << "\n##############" << std::endl;
                break;
                }
            case 3:{
                std::cout << "Enter sides a and b of the base \n>>>";
                int mid_lin = midle_line();
                std::cout << "midle line of a trapezoid is " << mid_lin \
                    << "\n##############" << std::endl;
                break;
                }
        }
    }
}
