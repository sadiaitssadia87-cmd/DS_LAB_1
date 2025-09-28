# include <iostream>    //include input output library
using namespace std;

int main()
{
    int A[10] = {2,6,8,7,1};
    int size = 5;
    int pos = 3;
    int val = 9;

    for(int i = size; i > pos; --i){
        A[i] = A[i-1];
  }
  A[pos] = val;
  size++;

   cout<<"after insertion: ";
   for (int i = 0; i < size ; ++i)
      cout << A[i] << " ";
    cout<<endl;
   return 0;
}