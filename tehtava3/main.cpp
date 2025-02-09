#include <iostream>
#include "chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
   /* Chef c_olio("Gordon");

    int annoksia = c_olio.makeSalad(25);
                   cout << "Salaatti annoksia: "
                    << annoksia
                   << endl;

    int Kannoksia = c_olio.makeSoup(25);
    cout << "Keitto annoksia: "
         << Kannoksia
         << endl;
*/

    ItalianChef i_olio("Super Mario");
  // bool salasanaOk =
  bool salasanaOk = i_olio.askSecret("pizza", 5, 25);
    if (salasanaOk == true)
  {
      cout << "Salasana ok"
       <<endl;
    } else {
        cout << "Salasana ei ok"
             <<endl;
    }

    //int annoksia = i_olio.askSecret()
    return 0;
}
