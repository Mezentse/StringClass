#include<iostream>
#include"String.h"

using namespace std;
int main()
{	
  TString r("We_Le_Re Pe");
  TString s("hello");
  TString w = s;
  TString p;
  char str;
  cin >> p;
  cout << p<<endl;
  cout << p[1]<<endl;
  p = p + s;
  cout << p<<endl;

  cout<<s.findIdx("el")<<endl;
  cin >> s;
  cin >> w;
  if (w == s) cout << "true" << endl;
  else if (s < w) cout << "<" << endl;
  else if (s > w) cout << ">" << endl;

  cin >> str;
  r.FindSub(str);
  return 0;
}