  #include<iostream>
  #include<string>
  using namespace std;
  
  class Automation {
      public:
      void function (){
          
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
      }
      
  };

  void Main_Display(){
    int choice;

    cout << "Home Menu: " << endl << endl;
    cout << "\t1. New Account" << endl;
    cout << "\t2. SignUp" << endl;
    cout << "\t3. Log Out " << endl << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    if(choice = 1){

        cout << "\t1. New Account" << endl;
        cout << endl;
    }

    else if(choice = 2){

        cout << "\t2. SignUp" << endl;
        cout << endl;

    }

    else if(choice = 3){

        cout << "Sucessfully Log Out" << endl;
        exit(0);

    }

    else{
        cout << "ERROR: Try Again " << endl << endl;
    }


  }
  
  int main(){
      Automation a;
      Main_Display();
     // a.function();
      
      return 0;
  }
