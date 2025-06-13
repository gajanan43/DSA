#include <iostream>
using namespace std;

class Shop
{
    int itemid[100];//bydefault private datamember
    int itemprice[100];//bydefault private datamember
    int counter;//bydefault  private datamember

public:
    void initcounter(void) { counter = 0; }//every object counter value is set to 0
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "the price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    Shop dukaan;//declare object
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}