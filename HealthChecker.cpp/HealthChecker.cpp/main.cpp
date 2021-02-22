#include<iostream>
#include<string>
using namespace std;

class HealthChecker{
private:
    static const int STD_BMI;
    string name;
    double height;
    double weight;
    double bmi;
    
public:
    static int getStdBmi();
    double getStdWeight();
    double getBmi();
    string getName();
    HealthChecker(string name,double height,double weight);
};
const int HealthChecker::STD_BMI = 22;

double HealthChecker::getBmi(){
    if(this->bmi==0){
        double mHeight = this->height /100;
        this->bmi = this->weight / mHeight / mHeight;
    }
    return this->bmi;
}

HealthChecker::HealthChecker(string name,double height,double weight){
    this-> name = name;
    this-> height = height;
    this-> weight = weight;
    this-> bmi = 0;
}
string HealthChecker::getName(){
    return this->name;
}

int HealthChecker::getStdBmi(){
    return HealthChecker::STD_BMI;
}

double HealthChecker::getStdWeight(){
    double mHeight = this->height/100;
    return HealthChecker::STD_BMI * mHeight * mHeight;
}
