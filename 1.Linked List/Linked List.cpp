#include <iostream>
#include <string>
using namespace std;


 struct dataSiswa{
      string nama,alamat;
      int no_hp;
      
      dataSiswa *next;
      
      
    };
    dataSiswa *head,*tail,*last;
    
    
void linkedList(string nama,string alamat,int nomer){
  head = (dataSiswa*) malloc(sizeof(dataSiswa));
  
 
  
  head->nama = nama;
  head->alamat = alamat;
  head->no_hp = nomer;
  head->next = NULL;
  cout<<"babal"<<endl;

}
void addLast(string nama,string alamat,int nomer){
  
  last = (dataSiswa*) malloc(sizeof(dataSiswa));
  
 
  
  last->nama = nama;
  last->alamat = alamat;
  last->no_hp = nomer;
  last->next = NULL;
  tail = last;
  
  
  

}
void Choose(){
  if(head->next == NULL){
     char choice;
     cout<<"Mau menambah Data(y/n)"<<endl;
     cin>>choice;
      
     
     switch(choice) {
       case 'y':
         head ->next = last;
         addLast("ega","Tasik",677);
         cout<<last->nama<<endl;         
         break;
       case 'n':
         head->next = NULL;
         cout<<head->nama<<endl;
         cout<<head->alamat<<endl;
         cout<<head->no_hp<<endl;
         break;
       default:
         cout<<"Pilih antara y/n!";  
           
         
         
       
     }
       
 
    
    
  }else{
    tail = head;
  }  
}



int main()
{
  linkedList("Iqbal","Sodong",455);  
  Choose();
  
  
  
  
  
  
  
  
  
  
  
  

  
  
    
    
}
