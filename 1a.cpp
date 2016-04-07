#include <iostream>

using namespace std;

int main()
{
  long long int n, m, width, height;
  long long int a;

  cin >> n >> m >> a;

  width = m / a;
  height = n / a;
  if (m % a) width += 1;
  if (n % a) height += 1;

  cout << width*height << endl;
  return 0;
}
