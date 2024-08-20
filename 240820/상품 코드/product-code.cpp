#include <iostream>
using namespace std;

class Product {
public:
    string name;
    int code;

    Product(string name="", int code=0) {
        this->name = name;
        this->code = code;
    }
};


int main() {
    Product product1 = Product("codetree", 50);
    Product product2 =Product();

    string name;
    int code;
    cin>>name>>code;

    product2.name = name;
    product2.code = code;

    cout<<"product "<<product1.code<<" is "<<product1.name<<endl;
    cout<<"product "<<product2.code<<" is "<<product2.name;
}