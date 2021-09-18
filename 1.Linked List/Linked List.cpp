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
  node1->next = node2;
  
  node2->nama = "Ega";
  node2->alamat = "Narawita";
  node2->no_hp = 567;
  node2->next = node3;
  
  node3->nama = "Fadza";
  node3->alamat = "Ciroda";
  node3->no_hp = 678;
  node3->next = NULL;
  
  dataSiswa *cur;
  cur = node1;
  
  while (cur!= NULL){
    cout<<cur->nama<<endl;
    cout<<cur->alamat<<endl;
    cout<<cur->no_hp<<endl;  
    cout<<endl; 
    
    cur = cur->next;
   
   
    
  }
  
  
  
  
 
    
  
  
    
    
}
