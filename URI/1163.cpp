#include <bits/stdc++.h>

using namespace std;

double a()return (9.80665)/2;

double b(double v, double senA){
    return v * sen(senA);
}

double c(h) return -h;

double t1(double a, double b, double c, double h){
    return (-(b) + sqrt((b*b) - (4 * a * c ))/9.80665;
}

double t2(double a, double b, double c, double h){
    return (-(b) - sqrt((b*b) - (4 * a * c) ))/9.80665;
}

double d(double v, double t, double cosA){
    return v * cos(cosA) * t;
}

int main(){
    double h; cin>>h;
    double p1, p2; cin>>p1>>p2;
    int attempts; cin>>attempts;
    double a, v, g = 9.80665;
    for(int i = 0; i < attempts; i++){
        cin>>A>>v;
        double T1 = t1(a(), b(v, A), c(h));
        double T2 = t2(a(), b(v, A), c(h));
        double r;
        if(T1 > T2)r = T1;
        else r = T2;
        cout<<d(v, r, a)<<endl;

    }
}