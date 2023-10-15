#include<iostream>
using namespace std;

float grade(int num){
    if(num>=80)
        return 4.00;

        if(num<80&&num>=75)
        return 3.75;

        if(num<75&&num>=70)
        return 3.50;

          if(num<70&&num>=65)
        return 3.25;

          if(num<65&&num>60)
        return 3.00;

          if(num<60&&num>=55)
        return 2.75;

          if(num<55&&num>=50)
        return 2.50;

          if(num<50&&num>=45)
        return 2.25;

          if(num<45&&num>=40)
        return 2.00;
        else{
        return 0.00;
        }

}

int main(){
        int number;
        float x;
        cout << "Enter obtain mark by student: ";
        cin >> number;

         x= grade(number);
        // cout << x<<"\n";
         if (x >= 4.00)
         {
        cout << "You got Grade A+ \n"<< "Remarks: Outstanding" << endl;
        
        }

       else if(x<4.00&&x>=3.75){
        cout << "You got Grade  A \n"<< "Remarks: Exellent" << endl;
        
        }

       else if(x<3.75&&x>=3.50){
        cout << "You got  Grade A- \n"<< "Remarks: Very good" << endl;
        
        }

       else if(x<3.50&&x>=3.25){
        cout << "You got  Grade B+ \n"<< "Remarks:  good" << endl;
        
        }

       else if(x<3.25&&x>=3.00){
        cout << "You got Grade  B \n"<< "Remarks: Satisfactory" << endl;
        
        }

       else if(x<3.00&&x>=2.75){
        cout << "You got  Grade B- \n"<< "Remarks: Above Avarage" << endl;
        
        }

       else if(x<2.75&&x>=2.50){
        cout << "You got  Grade C+ \n "<< "Remarks: Avarage" << endl;
        
        }

       else if(x<2.50&&x>=2.25){
        cout << "You got Grade  C \n"<< "Remarks: Below Avarage " << endl;
        
        }

       else if(x<2.25&&x>=2.00){
        cout << "You got Grade D \n"<< "Remarks:  Pass" << endl;
        
        }

        else{
        cout << "You got Grade F\n "<< "Remarks: Fail" << endl;
        
        }
       
}