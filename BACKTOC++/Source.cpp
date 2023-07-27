#include <iostream>
using namespace std;

bool IsKPeriodic(string txt, int k)
{
    string pat;
    if (k == 0) return false;
    if ((txt.size() % k) != 0) return false;
    for (int i = 0; i < k; ++i)
    {
        pat += txt[i];

    }
    cout << "pattern is " << pat << endl;
    int point = 0;
    int i = 1;
    string slice;
    slice += txt[0];

    if (k == 1)
    {
        string current;
        for (int f = 1; f < txt.size(); f++)
        {

            current = txt[f];
            if (current != slice) return false;

        }
        cout << "isKPeriodic!" << endl;
        return true;
    }

    
    while (i < txt.size())
    {
        do 
        {
            slice += txt[i];
            
            ++i;
        } while (i % k != 0);


        if (pat == slice)
        {
            slice = "";
           
            continue;
        }
        else return false;
    }
    cout << "isKPeriodic!" << endl;
    return true;

}



int main()
{

    string txt = "9fgduhgfd9879fgduhgfd9879fgduhgfd9879fgduhgfd9879fgduhgfd9879fgduhgfd987";
   
    IsKPeriodic(txt,12);

    return 0;
}