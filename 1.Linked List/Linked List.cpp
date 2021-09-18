#include <iostream>
#include <string>
using namespace std;


 struct dataSiswa{
      string nama,alamat;
      int no_hp;
      
      dataSiswa *next;
      
      
    };

int main()
{
  dataSiswa *node1,*node2,*node3;
  
  node1 = (dataSiswa*) malloc(sizeof(dataSiswa));
  node2 = (dataSiswa*) malloc(sizeof(dataSiswa));
  node3 = (dataSiswa*) malloc(sizeof(dataSiswa));
  
  node1->nama = "Iqbal Mutaqin";
  node1->alamat = "Sodonghilir";
  node1->no_hp = 100;
 
  cout<<node1->nama<<endl;
  cout<<node1->alamat<<endl;
  cout<<node1->no_hp<<endl;     
  
  
    
    
}
