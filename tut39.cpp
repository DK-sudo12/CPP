// PROTECTED ACCESS MODIFIER. ------> It is behave as a private member but but we can inherite the protected member;

#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private://-----> we cannot inherite this member
    int d;
};
/*For protected
                        Public Derived          Private Derived          Protected Derived  
   Private Member-      NOT INHERITE            NOT INHERITE              NOT INHERITE
   Protected Member-    PROTECTED               PRIVATE                   PROTECTED
   Public Member -      PUBLIC                  PRIVATE                   PROTECTED
*/

class derived : protected Base
{
};


int main()
{   
    derived d;
    cout<<d.a;

    return 0;
}