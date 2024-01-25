#include<iostream>
using namespace std;
int main(){
    float  temp;
    char unit;
    cout<<"-----------Temperature System Converter-----------"<<endl;
    cout<<"\nPlease Enter the temperature and measurement system: \nC.Celcius  \nF.Fahrenheit \nK.Kelvin "<<endl;
    cout<<"\nTemperature: ";
    cin>>temp;
    cout<<"Temperature System: ";
    cin>>unit;
    cout<<endl;
    if(unit=='c'|| unit=='C'){
        cout<<"Fahrenheit: "<<9.0/5.0*temp+32<<endl;
        cout<<"Kelvin: "<<temp+273.15;
    }
    else if(unit=='f'||unit=='F'){
        cout<<"Celcius: "<<5.0/9.0*(temp-32)<<endl;
        cout<<"Kelvin: "<<(temp+459.67)*5.0/9.0;
    }
    else if(unit=='k'|| unit=='K'){
        cout<<"Celcius: "<<temp-273.15<<endl;
        cout<<"Kelvin: "<<temp*9.0/5.0-459.67;
    }

    return 0;
}
