#include <iostream>
#include <fstream>
using namespace std;

class boys
{
    char name[20];
    int age;
    float ht;

public:
    void get()
    {
        cin >> name >> age >> ht;
    }
    void show()
    {
        cout << name << " " << age << " " << ht << "\n";
    }
};
int main()
{
    boys b[3], a[3];
    fstream ft;
    ft.open("boys.txt", ios::in | ios::out);
    for (int i = 0; i < 3; i++)
    {
        b[i].get();
        ft.write((char *)&b[i], sizeof(b[i]));
    }
    ft.seekg(0);
    cout << "Entered values are";
    for (int i = 0; i < 3; i++)
    {
        ft.read((char *)&a[i], sizeof(b[i]));
        a[i].show();
    }
    ft.close();
    return 0;
}
