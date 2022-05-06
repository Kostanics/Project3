#include <iostream>
using namespace std;

void sorty(const int n) {
    int* random = new int[(n / 2)]{};
    int* random1 = new int[(n / 2)]{};
    srand(time(NULL));
    cout << "massive: " << endl;
    for (int i = 0; i < (n / 2); i++) {
        random[i] = rand() % 10;
        cout << random[i];
    }
    cout << endl;
    for (int i = 0; i < (n / 2); i++) {
        random1[i] = rand() % 10;
        cout << random1[i];
    }
    int x = 0;
    for (int j = (n / 2) / 2; j > 0; j /= 2) {
        for (int k = j; k < (n / 2); k++) {
            x = random[k];
            int l;
            for (l = k; l >= j && random[l - j] > x; l -= j)
                random[l] = random[l - j];
            random[l] = x;
        }
    }
    x = 0;
    for (int j = (n / 2) / 2; j > 0; j /= 2) {
        for (int k = j; k < (n / 2); k++) {
            x = random1[k];
            int l;
            for (l = k; l >= j && random1[l - j] > x; l -= j)
                random1[l] = random1[l - j];
            random1[l] = x;
        }
    }
    cout << endl;
    cout << "sort massive: " << endl;
    for (int i = 0; i < n / 2; i++) {
        cout << random[i];
    }
    cout << endl;
    cout << "sort massive: " << endl;
    for (int i = 0; i < n / 2; i++) {
        cout << random1[i];
    }
    

    
    delete[] random;
    delete[] random1;
}

int main()
{
    cout << "For 100 elements:" << endl;
    int n;
    sorty(n=100);
    cout << endl;
    system("pause");
    cout << "For 1000 elements:" << endl;
    sorty(n = 1000);
    cout << endl;
    system("pause");
    cout << "For 10000 elements:" << endl;
    sorty(n = 10000);
    cout << endl;
    system("pause");
    cout << "For 100000 elements:" << endl;
    sorty(n = 100000);
    cout << endl;
    system("pause");
    cout << "For 1000000 elements:" << endl;
    sorty(n = 1000000);
    system("pause");
}