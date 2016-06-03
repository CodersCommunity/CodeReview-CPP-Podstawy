#include <iostream>
#include <cstring>

using namespace std;

char *tr(char *str)
  {
   static char buff[256];
   char cp[]="\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215¹æê³ñóœ¿Ÿ¥ÆÊ£ÑÓŒ¯";
   if(strlen(str)>=sizeof(buff)) return str;
   char *bf=buff;
   while(*str)
     {
      char *pos=strchr(cp+18,*str);
      *(bf++)=pos?*(pos-18):*str;
      ++str;
     }
   *bf=0;
   return buff;
  }

string napis;

int main()
{

    cout<<tr("Za¿ó³æ gêœl¹ jaŸñ")<<endl;

    cin>>napis;
    cout<<tr("Wpisany ci¹g znaków: ")<<napis;

    return 0;
}
