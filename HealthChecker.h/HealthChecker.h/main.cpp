class HealthChecker{
private:
    const int STD_BMI;
    string name;
    double height;
    double weight;
    double bmi;
    
public:
    int getStdBmi();
    double getStdWeight();
    double getBmi();
    string getName();
    HealthChecker(string name,double height,double weight);
};
