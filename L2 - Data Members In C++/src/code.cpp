#include <iostream>
#include "code.h"

using namespace std;

void home::passcode()
{
  key=543;
  cout << "Please Enter Code >>";
  cin >> input;
}

void home::info_system()
{
   if (input==key)
   {
       cout <<"          TYPES OF INFORMATION SYSTEM          " <<endl;
       cout << "1. Transaction Processing System (TPS)" <<endl;
       cout << "2. Office Automation System (OAS)" <<endl;
       cout << "3. Management Information System (MIS)" <<endl;
       cout << "4. Knowledge Work System (KWS)" <<endl;
       cout << "5. Decision Support System (DSS)" <<endl;
       cout << "6. Executive Information System (EIS)" <<endl;
       cout << "7. Professional Support System (PSS)" <<endl;
   }
   else
   {
       cout << "Invalid Code! Try Again" <<endl;
   }
}

