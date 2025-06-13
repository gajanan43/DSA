#include <iostream>
using namespace std;

class ShopItem
{
    int Id;
    float price;

public:
    void setData(int a, float b)
    {
        Id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "The Id of the Item is:" << Id << endl;
        cout << "The price of the Item is:" << price << endl;
    }
};
int main()
{

    // ShopItem p;
    // p.setData(1,23.2);
    // p.getData();

    int size = 3;
    // int *ptr=&size;
    // int *ptr=new int[34];

    //This are the 3 object of ShopItem
    // general store item
    // veggies item
    // hardware item

    ShopItem *ptr=new ShopItem[size];
    ShopItem *ptrItem=ptr;
    int p,i;
    float q;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"Enter the Id and price of Item:"<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"Item number:"<<i+1<<endl;
        ptrItem->getData();
        ptrItem++;
    }
    

    return 0;
}