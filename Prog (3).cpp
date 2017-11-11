#include <iostream>

using namespace std;



class Rectangle

{

  public:

  double length;

  double breadth;

  double ar;

  double per;

  double perimeter(double len, double bre);   

  double area(double len, double bre);        

};



double Rectangle::perimeter(double l,double b)

{ 

  return l+b;

}

double Rectangle::area(double l,double b)

{

  return l*b;

}



int main()

{

   

   Rectangle RL1, RL2;

  cout<<"Enter the length of FIRST rectangle:\n ";

   cin>>RL1.length;

   cout<<"Enter the breadth of FIRST rectangle: \n";

   cin>>RL1.breadth;

   cout<<"Enter the length of SECOND rectangle:\n ";

   cin>>RL2.length;

   cout<<"Enter the breadth of SECOND rectangle:\n ";

   cin>>RL2.breadth;

   RL1.ar=RL1.area(RL1.length,RL1.breadth);

   RL1.per=RL1.perimeter(RL1.length,RL1.breadth);

   RL2.ar=RL2.area(RL2.length,RL2.breadth);

   RL2.per=RL2.perimeter(RL2.length,RL2.breadth);

   if(RL1.ar>RL2.ar)

   { 

     cout<<"Area of Rectangle 1 is greater than Rectangle 2\n";

   }

   else if(RL1.ar<RL2.ar)

   { 

     cout<<"Area of Rectangle 2 is greater than Rectangle 1\n";

   }

   else

   {

     cout<<"Area of Rectangle 1 and Rectangle 2 are equal\n";

   }

   if(RL1.per>RL2.per)

   { 

     cout<<"Perimeter of Rectangle 1 is greater than Rectangle 2\n";

   }

   else if(RL1.per<RL2.per)

   { 

     cout<<"Perimeter of Rectangle 2 is greater than Rectangle 1\n";

   }

   else

   {

     cout<<"Perimeter of Rectangle 1 and Rectangle 2 are equal\n";

   }

   return 0;

 }
