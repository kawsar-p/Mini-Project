// DSA Array

#include<iostream>
using namespace std;

class Array{
    public:

    void problem_1(){
     int n;
    cout << "Enter your array size: ";
    cin >> n;

    int array[n+1];

    cout << "\nEnter Elements : " << endl;
    for(int i = 0; i < n; i++){
        cout << "Elements[" << i+1 << "] : ";
        cin >> array[i];
    }

    cout << "Display Elements: "<< endl;

    for(int i = 0 ; i < n; i++){
        cout << array[i] << ", ";
    }

    }

    void problem_2(){
        int n, num, pos;
    
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements in array: "<< endl;
    for (int i = 0; i < n; i++) {
        cout << "Element[" << i+1 << "]: ";
        cin >> arr[i];
    }

    cout << "\nEnter element to insert: ";
    cin >> num;
    cout << "Enter the element position: ";
    cin >> pos;


        for (int i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = num;
        n++;

        cout << "\nArray elements after insertion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }

    void problem_3(){
        int n;
cout << "Enter Array size: ";
cin >> n;

int array[n];

cout << "Enter Your Elements:" << endl;
for(int i = 0; i< n; i++){
    cout << "Element[" << i + 1 << "]: ";
    cin >> array[i];
}
int x;
cout << "Insert Element in the Front: ";
cin >> x;

for(int i = n; i> 0; i--){
        array[i] = array[i-1];
}
array[0] = x;
n++;
cout << "Enter Your Elements:" << endl;
for(int i = 0; i< n; i++){
    cout << array[i] << ", ";
}
    }

    void problem_4(){

    }

    void problem_5(){

    }

    void problem_6(){

    }

    void problem_7(){

    }

    void problem_8(){

    }

    void problem_9(){
            cout << "First Matrix: " << endl;
    int row,col;
    cout << "Enter Row Number: ";
    cin >> row;

    cout << "Enter Column Number: ";
    cin >> col;

    int matrix[row][col];
    int matrix1[row][col];
    int matrix3[row][col];

    cout << "\nEnter First Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Matrix[" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix[i][j];
        }
    }


    cout << "\nEnter Second Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Matrix[" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

     cout << "\nMatrix Addition: " << endl;


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matrix3[i][j] = matrix[i][j] + matrix1[i][j];
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
    }

    void problem_10(){
            cout << "First Matrix: " << endl;
    int row,col;
    cout << "Enter Row Number: ";
    cin >> row;

    cout << "Enter Column Number: ";
    cin >> col;

    int matrix[row][col];
    int matrix1[row][col];
    int matrix3[row][col];

    cout << "\nEnter First Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Matrix[" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix[i][j];
        }
    }


    cout << "\nEnter Second Matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Matrix[" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix1[i][j];
        }
    }

     cout << "\nMatrix Subtraction: " << endl;


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matrix3[i][j] = matrix[i][j] - matrix1[i][j];
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
    }

    void problem_11(){

    }

};

void Display(){
    Array a;
    int choice;

    cout << "\t--->>DSA Array<<---" << endl<< endl;
    cout << "\t1. Insert Array Element" << endl;
    cout << "\t2. Insert Element at the Specific Position in array" << endl;
    cout << "\t3. Insert Element at the Front" << endl;
    cout << "\t4. Insert Element at the End" << endl << endl;

    cout << "\t5. Deleting Element from a linear Array" << endl;
    cout << "\t6. Delete Element at the Specific Position in array" << endl;
    cout << "\t7. Delete Element at the Front" << endl;
    cout << "\t8. Delete Element at the End" << endl << endl;

    cout << "\t9. Matrix Addition" <<endl;
    cout << "\t10. Matrix Subtraction" <<endl;
    cout << "\t11. Matrix multiplication" <<endl;
    cout << "\t12. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << endl;

    if(choice == 1){
        cout << "-->>Insert Array Element<<---" << endl << endl;
        a.problem_1();
    }

    else if(choice ==2){
        cout << "-->>Insert Element at the Specific Position in array<<---" << endl<< endl;
        a.problem_2();
    }

    else if(choice == 3){
        cout << "-->>Insert Element at the Front<<---" << endl<< endl;
        a.problem_3();
    }

    else if(choice == 4){
        cout << "-->>Insert Element at the End<<---" << endl << endl;
        a.problem_4();
    }

    else if(choice == 5){
        cout << "-->>Insert Element at the End<<---" << endl << endl;
        a.problem_5();
    }

        else if(choice == 6){
        cout << "-->>Delete Element at the Specific Position in array<<---" << endl << endl;
        a.problem_4();
    }

        else if(choice == 7){
        cout << "-->>Delete Element at the Front<<---" << endl << endl;
        a.problem_7();
    }

        else if(choice == 8){
        cout << "-->>Delete Element at the End<<---" << endl << endl;
        a.problem_8();
    }

        else if(choice == 9){
        cout << "-->>Matrix Addition<<---" << endl << endl;
        int choice;
        a.problem_9();
        //Display();

        cout << "\nDo You want Run this program (YES/NO):" << endl;
        cout << "1. YES" << endl;
        cout << "2. NO" <<endl;
        cout << "3. Exit" << endl;

        cout << "\nEnter your Choice: ";
        cin >> choice;

        if(choice == 1){

            a.problem_9();
            cout << endl;
        }

        else if(choice == 2){
            Display();
        }

        else if(choice == 3){
                cout << "Successfully  Exit..." <<endl;
                exit(0);

        }
        else{
            cout << "ERROR! Try Again..." << endl;
        }
    }

        else if(choice == 10){
        cout << "-->>Matrix Subtraction<<---" << endl << endl;
        a.problem_10();
    }

        else if(choice == 11){
        cout << "-->>Matrix multiplication<<---" << endl << endl;
        a.problem_11();
    }

    else if(choice == 12){
        cout << "-->>Successfully Exit<<---" << endl;
        cout << "\t....Thank You very Much" << endl;
        cout << "For staying with us...." << endl;
        exit(0);
    }

    else{
        cout << "ERROR! Try Again" << endl << endl;
        Display();
    }

}

int main(){
    Display();

    return 0;
}
