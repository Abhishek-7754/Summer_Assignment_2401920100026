#include <iostream>
using namespace std;
class Car{
public:
string brand;
void showBrand(){
  cout<<"CarBrand:"<<brand<<endl;
    }
};
int main()
{
    Car c1;
 c1.brand = "Toyota";
c1.showBrand();
return 0;
}
