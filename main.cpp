#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat:";
    cin >> wiek;

    if (wiek>=35)
    {
        cout << "Jestes pelnoletni i mozesz zostac prezydentem";
    }
    else if (wiek>=18)
    {
        cout << "Jestes pelnoletni ale nie mozesz zostac prezydentem";
    }
    else{
        cout << "Jestest niepelnoletni i nie mozessz zostac prezydentem";
    }
    return 0;
}
