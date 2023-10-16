/*22070123129*/
/*Varun Pagote*/
/*Week-Days*/

#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"\nEnter the Day's number :";
    cin>>day;
    switch (day)
    {
      case 1:
        cout<<"Monday";
        break;
      case 2:
        cout<<"Tuesday";
        break;
      case 3:
        cout<<"Wednesday";
        break;
      case 4:
        cout<<"Thursday";
        break;
      case 5:
        cout<<"Friday";
        break;
      case 6:
        cout<<"Saturday";
        break;
      case 7:
        cout<<"Sunday";
        break;
      default:
        cout << "Error! There are only seven days in a week.";
        break;
    }
    return 0;
}

/*
Output:
Enter the Day's number :4
Thursday
*/
