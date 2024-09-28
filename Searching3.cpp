#include<iostream>
using namespace std;

class ArrayX{

    public: 
       int *Arr;
       int iSize;

       ArrayX(int iValue){

        this->iSize=iValue;
        this->Arr=new int[iSize];

       }
       ~ArrayX(){
        delete []Arr;
        
       }


void Accept(int Arr[],int iSize){

    int i=0;
    cout<<"Enter the elements : ";

    for(i=0;i<iSize;i++){
        cin>>Arr[i];

    }
}

void Display(int Arr[],int iSize){

    int i=0;
    cout<<"Entered elements are : ";

    for(i=0;i<iSize;i++){

        cout<<Arr[i]<<"\n";

    }
}
};
int main(){

    

    int iLength=0;

    cout<<"Enter the number of elements : \n";

    cin>>iLength;

    ArrayX *aobj=new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();

    delete aobj;
    return 0;


}