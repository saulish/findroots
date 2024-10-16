#include <iostream>
#include <cstdlib>

using namespace std;
double bsSqrt(double n) {
    if (n == 1) return n;
    double l = 0, r = n;
    double mid;
    double tol = 0.000001;

    while ((r - l) > tol) {
        mid = (l + r) / 2;
        if (mid * mid > n) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return (l + r) / 2;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "{}";
        return 1;
    }
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);

    if(a==0){
        cout<<"{}";
        return 0;
    }
    double disc=(b*b)-4*(a*c);
    if(disc<0){
        cout<<"{}";

    }else if(disc==0){
        cout<<"{"<<-b/(2*a)<<','<<-b/(2*a)<<"}";

    }else{
        double raiz= bsSqrt(b*b-(4*(a*c)));
        cout<<'{'<<(-b+raiz)/(2*a)<<','<<(-b-raiz)/(2*a)<<"}";
    }
    return 0;
}

