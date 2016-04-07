#include <iostream>

using namespace std;

string myrev(string a)
{
  int mylength = a.size();
  for (int i=0; i < mylength; ++i) {
    if (a[i] >= 97) {
      a[i] = toupper(a[i]);
    } else {
      a[i] = tolower(a[i]);
    }
  }

  return a;
}

int main()
{
  string mys;
  cin >> mys;
  bool flag = true;
  bool flag2 = false;

  int mylength = mys.size();
  if (mylength > 1) {
    for (int i=1; i < mylength; ++i) {
      // cout << "mys[i]: " << mys[i] << endl;
      if (mys[i] >= 97) {
        // cout << "mys[i] = " << mys[i] << endl;
        // letra minuscula
        flag = false;
      }
    }
  } else {
    if (mys[0] >= 97) {
      mys[0] = toupper(mys[0]);
    } else {
      mys[0] = tolower(mys[0]);
    }
    flag = false;
  }

  if (flag == true) {
    mys = myrev(mys);
  }

  cout << mys << endl;
  return 0;
}
