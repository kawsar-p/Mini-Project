  #include<iostream>
  #include<string>
  using namespace std;
  
  int main(){
      
      int n, no,age, id;
      string name;
       
      cout << "Enter your value: ";
      cin >> n;
      cout << endl;
      
      int array[n];
      
      for(int i = 0; i < n ; i++){
          cout << "Enter SL No: ";
          cin >> array[i];
          cout << "Enter Student name: ";
          cin >> name;
          cout << "Enter Age: ";
          cin >> age;
          cout << "Enter ID: ";
          cin >> id;
          cout << endl;
          
      }
      cout << endl;
      cout << "Display Details:  " << endl;
      cout << "No" << " " << "Name" << "    " << "Age" << " " << "ID" << endl;
       for(int i = 0; i < n ; i++){
           cout << i+1 << "  " << name << "   " << age << " " << id << endl;
          
      }
      
      return 0;
  }
