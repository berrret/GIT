#include "rcstring.h"
#include <stdlib.h>
int main()
{
rcstring a,b,c;
a="10";
b="ALA MA KOTA";
cout << a << " " << b << endl; // 10 ala ma ma kota
c=a+b;
cout << c<<endl; // 10ala ma kota
c=a+rcstring(" ")+b;
cout << c << endl; //10 ala ma kota
rcstring d("a");
cout << d <<endl; //a
d+="ula";
cout << d << endl; //aula
d+="15";
cout << d << endl; //aula15
cout << d[3]<<endl; //a
d[3]='b';
cout << d << endl; //aulb15
d[2]=d[1]=d[0];
cout << d << endl; //aaab15
rcstring x="	 -123ABC";  
cout<<x.atoi()<<endl;	//-123
cout<<x.Left(7)<<endl;	//	 -123A
cout<<x.toLower()<<endl;	//-123abc
return 0;
}
