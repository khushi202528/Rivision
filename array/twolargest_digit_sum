
#include <iostream>
using namespace std;
int main()
{
    int n[4] = {0, 2, 1, 3};
    int max_digit = n[0];
    int second_max_digit = n[0];
    for (int i = 0; i < 4; i++)
    {
        if (n[i] > max_digit)
        {
            second_max_digit = max_digit;
            max_digit = n[i];
        }
        else if (n[i] > second_max_digit && n[i] != max_digit){second_max_digit = n[i];}
        
        
       
    } int sum = second_max_digit + max_digit;
       cout << "Maximum Sum \n " << sum << "  = " << second_max_digit << " + " << max_digit;
}
