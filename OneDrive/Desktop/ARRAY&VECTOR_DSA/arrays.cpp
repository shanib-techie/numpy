// WHAT IS ARRAY? -> IT IS LIST OF DIFFERENT DATA TYPE
// --> EASY AND USED METHOD TO CREATE ARRAY
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {4,5,3,2,5,6};
//     for(int i = 0;i<=5;i++){
//         cout<<arr[i]<<" ";
//         cout<<sizeof(arr);
//     }
// }
 
// // // REVERSE ORDER IN ARRAY
// #include <iostream>
// using namespace std;
// int main(){
//     int list[] = {3,5,4,3,2,6,5,4,3,7};
//     for(int i =9;i>=0;i--){
//         cout<<list[i]<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] ={4,3,4,5,4,3,4,5,6,7,};
//     int k = sizeof(arr)/4;
//     for(int i =0;i<k;i++){
//         cout<<arr[i]<<" ";

//     }cout<<endl;
//     cout<<sizeof(arr);////40 byte space le rha h memory me
//     cout<<endl;
//     cout<<"LENGHT OF ARRAY : "<<sizeof(arr)/4;//no of element a rhe h isme
// }


// make an array in reverse order also give the lenght and size
// #include <iostream>
// using namespace std;
// int main(){
//     int arry[] = {3,4,5,6,7,8,7,6,5,4,3,2,1,6};
//     int lenght_of_arry =  sizeof(arry)/4;
//     for(int i=0;i<lenght_of_arry;i++){
//         cout<<arry[i]<<" ";
//     }cout<<endl;
//     cout<<"REVERSE VERSION OF YOUR LIST ";
//     for(int j = lenght_of_arry;j<0;j--){
//         cout<<arry[j]<<" ";
//     }
//     cout<<"THE LENGHT OF YOUR LIST IS "<<sizeof(arry)/4;
//     cout<<endl;
//     cout<<"THE SIZE OF YOUR LIST IN MEMORY IS "<<sizeof(arry);
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {4,3,2,5,6,7,8,6,6,4,3};
//     for(int i = 0;i<=10;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"";
//     arr[0]= 44;
//     for(int j = 10;j>=0;j--){
//         cout<<arr[j]<<" ";
//     }
// }

//find second largest number from array
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int l;
//     cout<<"ENTER THE LENGHT OF ARRAY : ";
//     cin>>l;
//     int arr[l];
//     for(int i= 0;i<=l;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY AT POSITION "<<i<<" = ";
//         cin>>arr[i];
    // }
//     for(int j = 0;j<= l;j++){
//         cout<<arr[j]<<" ";
//     }
//   int  mx_ele = arr[0];
//   int sec_mx = INT_MIN;
//   for(int i = 0 ;i < l;i ++){
//     if(arr[i] > arr[0]){
//         mx_ele = arr[i];
//     }
// }
// for(int j =0;j < l; j++){
//     sec_mx != mx_ele;
//     if(arr[j] > sec_mx){
//         sec_mx = arr[j];

//     }
// }

//    else if(arr[i]!= mx_ele){
//     if(arr[i] > sec_mx){
//         sec_mx = arr[i];
//     }
      
//   
// }
//   cout<<"\nmax ele "<<mx_ele<<endl;
//   cout<<"secmax"<<sec_mx<<endl;

// }




// WAP TO TAKE ARRAY AS A INPUT INPUT ARRAYS
// #include <iostream>
// using namespace std;
// int main(){
//     int l;
//     cout<<"ENTER THE LENGHT OF ARRAY : ";
//     cin>>l;
//     int arr[l];
//     for(int i= 0;i<=l;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY AT POSITION "<<i<<" = ";
//         cin>>arr[i];
//     }
//     for(int j = 0;j<= l;j++){
//         cout<<arr[j]<<" ";
//     }
// }






// QUES --> REVERSE THE ELEMENT OF ARRAY AND ALSO MAKE CUBE OF THEM
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[4] = {5,4,2,4};////[iske undr tital element like hote ha]
//     for(int i =0;i<=3;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<"THE REVERSE OF THE  ARRAY WITH CUDE --->"<<" ";
//     for(int j = 3;j>=0;j--){
//         cout<<arr[j]*arr[j]*arr[j]<<" ";
//     }
// // }    

// void make_cube_of_array(int arr[]){

//     arr[0] = arr[0]*arr[0]*arr[0];
//     arr[1] = arr[1]*arr[1]*arr[1];
//     arr[2] = arr[2]*arr[2]*arr[2];
//     arr[3] = arr[3]*arr[3]*arr[3];
// }
// int main(){
//     int arr[]= {3,2,4,3,2,4,5};
//     for(int i=1;i<=6;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     make_cube_of_array(arr);
//     for(int j = 0;j<=6;j++){
//         cout<<arr[j]<<" ";
//     }
// }




// // // QUES--->CALCULATE THE SUM OF ALL THE ELEMENT IN THE GIVEN ARRAY by function and normal both

// //BY FUNCTION
// #include <iostream>
// using namespace std;
// void sum_of_array(int arr[],int l){
//     int sum = 0;
//     // int k = sizeof(arr)/4;
//     for(int i=0;i<l;i++){
//         sum +=arr[i];
//         cout<<sum<<" ";
//     }
// }
// // #include <iostream>
// #include <climits>
// // using namespace std;
// int main(){
//     int l ;
//     cout<<"ENTER THE LENGHT OF ARRAY : ";
//     cin>>l;
//     int arry[l];
//     for(int i = 0;i<l;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY AT POSITION "<<i<<" = ";
//         cin>>arry[i];
//     }cout<<endl;
//     cout<<"THIS IS YOUR ARRAY;";
//     for(int i =0;i<l;i++){
//         cout<<arry[i]<<"\t";
//     }
//     int sum = 0 ; 
//     int product = 1;
//     for(int j= 0;j<l;j++){
//         sum += arry[j];
//         product *= arry[j];
//     }
//     cout<<endl;
//     cout<<"THE SUM OF ENTIRE ARRAY IS =="<<sum;
//     cout<<endl;
//     cout<<"THE PRODUCT OF ALL ELEMENT IN ARRAY == "<<product;
//     cout<<endl;
//     int mx = arry[0];
//     int k = arry[0];
//     for(int i=0;i<l;i++){
//         mx = max(mx,arry[i]);
//         k = min(arry[i],k);
//     }
// }
//     cout<<endl;
//     cout<<"THIS IS MAX FROM THE ARRAY "<<mx<<endl;
//     cout<<"THIS IS MINIMUM VALUE FROM ARRAY"<<k<<endl;
//     int secmx = INT_MIN;
//     for(int i = 0;i<l;i++){
//         if (arry[i] != mx){////{3,4,5,67,6,55,654}//first max = 654
//             secmx = max(secmx,arry[i]);
//         }
        
//     }
//     cout<<"THE SEC MAX NUMBER IS == "<<secmx;
// }

//     int sec_mx = INT_MIN;
//     for(int i=0;i<lenght;i++){
//         if(list[i] != mx ){
//             sec_mx = max(sec_mx,list[i]);
//         }
//     }
//     cout<<endl;
//     cout<<"SECOND MAX NUMBER "<<sec_mx<<" ";



// // int main(){
// //     int list[] = {5,4,5,6};
// //     int l = sizeof(list)/4;//aise krne se lenght pata chl jati h
// //     for(int i=0;i<l;i++){
// //         cout<<list[i];

// //     }cout<<endl;
// //     sum_of_array(list,l);
// // }

// // //WITHOUT SUM 
// #include <iostream>
// using namespace std;
// int main(){
//     int list[] = {5,6,7,8,9,5,3};
//     int k = sizeof(list)/4;
//     int sum = 0;
//     for(int i=0;i<k;i++){
//         cout<<list[i]<<" ";
        
//         sum += list[i];
//     }
//     cout<<"SUM OF THIS LIST ELEMENT ="; 
//     cout<<sum<<"";
// }

// //CALCULATE PRODUCT OF ALL number from aray
// #include <iostream>
// using namespace std;

// int main(){
//     int num[] = {4,3,2,4,5,6};
//     int product = 1;
//     int element= sizeof(num)/4;
//     for(int i=0;i<element;i++){
//         product*=num[i];
//     }cout<<"product of all element from list : "<<product;

// }






// FIND MAXIMUM NUMBER ELEMENT FROM ARRAY
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int array[] = {3,4,5,6,5,};
//     int lenght = sizeof(array)/4;
//     int mx = INT_MIN;
//     for(int i = 0;i<=lenght;i++){
//        mx = max(mx,array[i]);
//     }
//     cout<<"MAX ELEMENT FROM ARRAY "<<mx;
// }







// FIND MINIMUM VALUE FROM THE ARRAY
// #include <iostream>
// using namespace std;
// int main(){
//     int array[] = {4,5,6,7,6,4,2,3,4,-2};
//     int k = sizeof(array)/4;
//     // int mn = array[0];
//     int mn = -10;
//     for(int i = 0;i<k;i++){
//         // mn = min(array[0],array[i]);
//         mn = min(mn,array[i]);

//     }
//     cout<<"minumum value from array : "<<mn;

// }







// #include <iostream>
// using namespace std;
// int main(){
//     int l , temp;
//     cout<<"enter the lenght of array : ";
//     cin>>l;
//     int arry[l];
//     for(int i = 0;i<l;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY AT POSITION "<<i<<" : ";
//         cin>>arry[i];
//         cout<<endl;
//     }
//     cout<<"ORIGINAL   ARRAY   : :";
//     for(int j = 0;j<l;j++){
//         cout<<arry[j]<<"\t";
//     }


//     for(int i = 0 ; i <l ; i++){
//         for(int j = i+1 ;j <l ; j++){  // j = 0 karo ke toh  bade se chota karegaa
//             if(arry[i] > arry[j]){
//                 temp = arry[i];
//                 arry[i] = arry[j];
//                 arry[j] = temp;
//             }
//         }
//     }

//     cout<<"SORTED ARRAY : ";
//     for(int i = 0 ;i < l ;i ++){
//         cout<<arry[i]<<"\t";
//     }
// }











// #include <iostream>
// using namespace std;
// int main(){
//     int size , temp;
//     cout<<"ENTER THE SIZE OF ARRAY : ";
//     cin>>size;
//     int ary[size];
//     for(int i = 0 ;i<size;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY AT POSITION "<<i<<" : ";
//         cin>>ary[i];
//     }
//      cout<<"ORIGINAL ARRAY => ";
//     for(int i = 0;i<size;i++){
//        cout<<ary[i]<<"\t";
//     }
//     for(int i = 0; i < size ; i++){
//         for(int j = i+1 ; j < size ; j++){
//             if(ary[i]>ary[j]){
//                 temp = ary[i];
//                 ary[i] = ary[j];
//                 ary[j] = temp;
//             }
//         }
//     }
//     cout<<"\nSORTED ARRAY IN ASCENDING ORDER  => ";
//      for(int i = 0;i<size;i++){
//         cout<<ary[i]<<"\t";
//     }  
//       cout<<"\nSORTED ARRAY IN DESECANDING ORDER  => ";
//          for(int i = size-1;i>=0;i--){
//      cout <<ary[i]<<"\t";
//     } 
// }









// #include <iostream>         // Input/output ka header file
// using namespace std;        // std:: likhne ki zarurat na ho isliye
// int main() {
//     int arr[] = {4, 2, 7, 4, 2, 9, 1, 7};   // Ek integer array banaya
//     int n = sizeof(arr) / sizeof(arr[0]);  // Array ka size nikala (total elements)
//     // Outer loop: har element ko check karega
//     for (int i = 0; i < n; i++) {
//         // Inner loop: i ke baad wale elements se compare karega
//         for (int j = i + 1; j < n; ) {
//             // Agar duplicate milta hai
//             if (arr[i] == arr[j]) {
//                 // Duplicate mila, to array ke elements ko ek step left shift karenge
//                 for (int k = j; k < n - 1; k++) {
//                     arr[k] = arr[k + 1];   // Next element ko current position pe lao
//                 }
//                 n--;   // Array size 1 kam kar do (duplicate hata diya)
//                 // j++ nahi karenge kyunki naya element j pe aa gaya hai, use fir check karna hai
//             } else {
//                 j++;   // Agar duplicate nahi mila to next element pe jao
//             }
//         }
//     }
//     // Final array print karenge (duplicates ke bina)
//     cout << "Array after removing duplicates:\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }











// PRINT ANY STRING IN ARRAY FORM:

// we use char * ch = "string ";
// then  ch[i];
// #include <iostream>
// using namespace std;
// int main(){
//     // string s;
//     // s = "shanib";
//     // const char *ch="shanib";
//     // for(int i = 0; i<ch[i];i++){
//     //     cout<<ch[i]<<"\t";
//     // }
//     // string s;
//     // cout<<"ENTER THE STRING : ";
//     // getline(cin,s);
//     // // const char *ch= s.c_str();
//     // const char *ch= s.c_str();

//     // for(int i = 0 ;i< s.length();i++){
//     //     cout<<ch[i]<<"\t";
//     // }

//     string s;
//     cout<<"enter the str : ";
//     getline(cin,s);
//     const char  *ch = s.c_str();
//     for(int i = 0 ;i<s.length();i++){
//         cout<<char(ch[i]-32)<<"";

//     }

// }

// // take a input string Or sntence convert into upper and reverse


// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cout<<"enter the string : ";
//     getline(cin,s);
//     const char *ch = s.c_str();
//     cout<<"STRING IN UPPRCASE : ";
//     for(int i = 0 ; i <s.length();i++){
//         cout<<char(ch[i]-32)<<"";
//     }
//     cout<<"\n reverse :" ;
//     for(int i = s.length();i>0;i--){
//         cout<<ch[i]<<"";
//     }
// }


// void address(string s){
//     const char *ch=s.c_str();
//     for(int i =0;i<s.length();i++){
//         cout<<" &ch ["<<ch[i]<<"] =  "<<(void*)&ch[i]<<endl;
//     }
// }





// void count(string s){
//     const char *ch=s.c_str();
//     int countcons = 0 , countvo = 0;
//     for(int i = 0;i<s.length();i++){
//         switch ( ch[i]){
//             case 'i':
//             countvo++;
//             break;
//             case 'a':
//             countvo++;
//             break;
//             case 'e':
//             countvo++;
//             break;
//             case 'o':
//             countvo++;
//             break;
//             case 'u':
//             countvo++;
//             break;
//             // case ' ':
//             // countcons--;
//             // break;
//             default:
//             countcons++;
//             break;
//         }

//     }
//     cout<<"no of vowel in string "<<s<<" is "<<countvo<<endl;
//     cout<<"no of consonant in string "<<s<<" is "<<countcons<<endl;

// }
// int main(){
//     string s;
//     cout<<"enter the string :";
//     getline(cin,s);
//     cout<<" which operation will you perform\n";
//     cout<<"press 1 for reverse :\n";
//     cout<<"press 2 for print every alphabet address : \n";
//     cout<<"press 3 for count vowel & consonant : \n";
//     cout<<"press 4 for convert into uppercase : \n";
//     cout<<"press 5 for all operation : \n ";
//     int k;
//     cin>>k;
//     if(k == 1){
//         reverse(s);
//     } else if (k == 2)
//     {
//         address(s);
//     }else if (k == 3){
//         count(s);
//     }else if (k == 4){
//         uppr_case(s);
//     }else if (k== 5){
//         cout<<" ALL OPERATION \n";
//         cout<<"reverse : \n";
//         reverse(s);
//         cout<<"ADDRESS\n";
//         address(s);
//         cout<<"counts vowel & constant \n";
//         count(s);
//         cout<<"convert into upper case :\n";
//         uppr_case(s);


//     }
// }

// /// WAP THAT TAKE L LENGHT ARRAY AND RETURN MAX AND MIN VALUE FROM ARRAY??
// #include <iostream>
// using namespace std;
// int main(){
//   int l;
//   cout<<"ENTER THE LENGTH OF ARRAY: ";
//   cin>>l;
//   int array[l];
//   for(int i = 0;i<l;i++){
//     cout<<"ENTER THE ELEMENT OF ARRAY AT POSITION "<<i<<" : ";
//     cin>>array[i];
//   }
//   cout<<"THIS IS YOUR ARRAY : ";
//   for(int i=0;i<l;i++){
//     cout<<array[i]<<" ";
//   }
//   cout<<endl;
//   int mx = array[0];
//   for(int i = 0;i<l;i++){
//       mx = max(mx,array[i]);
//   } cout<<"THIS IS MAXIMUM NUMBER ELEMENT FROM ARRAY : "<<mx<<endl;

//   int mn = array[0];
//   for(int i=0;i<l;i++){
//     mn = min(mn,array[i]);
//   }
//     cout<<"THIS IS MINIMUM  VALUE NUMBER FROM ARRAY : "<<mn;

// }

// // // //ARRAY WITH IF&ELSE STATEMENT QUESTION 








////QUES  ==>> MAKE INOUT ARE AND THEN FIND THE SEARCHING ELEMENT FROM ARRAY 
// #include <iostream>
// using namespace std;
// int main (){
//     int l;
//     cout<<"ENTER TH LENGHT OF ARRAY  : ";
//     cin>>l;
//     int ary[l];
//     for(int i =0;i<l;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY AT POSIITON : "<<i<<" ";
//         cin>>ary[i];
//     }
//     cout<<"YOUR ORIGINAL ARRAY : ";
//     for(int i = 0;i<l;i++){
//         cout<<ary[i]<<" ";
//     }
//     cout<<"\n";
//     int searching_element ;
//     cout<<"ENTER ELEMENT THAT YOU WANT TO SEARCH IN ARRAY : ";
//     cin>>searching_element;
//     int no_of_time = 0;
//     for(int i =0;i<l;i++){
//         if(ary[i] == searching_element){
//             cout<<"YOUR SEARCHING ELEMENT ARE FOUND AT INDEX "<<i<<" WHICH IS "<<ary[i];
//             no_of_time += 1;
//             cout<<endl;
//             // break;
//         }
//         else{
//             cout<<"ELEMENT ARE NOT FOUND AT INDEX "<<i<<"\n\n ";
//         }
//     }
//     cout<<"YOUR SEARCHING ELEMENT ARE "<<searching_element<<" ARE "<<no_of_time<<" PRESENT IN ARRAY ";
// }


#include <iostream> 
using namespace std;
void input_arr(int n){
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cout<<"enter the element of array at position "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"your original array : { ";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<" }\n";

}
void searching_element(int n){
    
    input_arr(n);
    int arr[n];
    int search ;
    cout<<"enter the element that you want to search : ";
    cin>>search;
    cout<<endl;
    bool found = false;
    for(int i = 0;i<n;i++){
        if(arr[i] == search){
            cout<<"your element are found at position "<<i<<"\n ";
            found = true;
            break
            ;
        }if (!found){
            cout<<"element are not fount at index "<<i<<"\n ";
        }
        }
}
int main(){
//    input_arr(7);
   searching_element(4);
}




// // QUES--->GIVEN AN ARRAY OF INTEGER CHANGE THE VALUE OF ALL ODD INDEXED ELEMENT TO second(kuch ni  bus double krna h) MULTIPLE
// // AND INCREMENT ALL EvEN INDEXED VALUE BY 10'
// #include <iostream>
// using namespace std;
// int main(){
//   int lenght;
//   cout<<"ENTER THE LENGHT OF ARRAY : ";
//   cin>>lenght;
//   int list[lenght];
//   for(int i = 0;i<lenght;i++){
//     cout<<"ENTER THE ELEMENT OF LIST AT POSITION "<<i<<" ";
//     cin>>list[i];
//   }
//   cout<<endl;
//   cout<<"original array = ";
//   for(int i=0;i<lenght;i++){
//     cout<<list[i]<< " ";
//   }
//     cout<<endl;
//   for(int i=0;i<lenght;i++){
//     if(list[i]%2==0){
//       list[i]+=10;
//     } else if(list[i] %2!=0){
//      list[i]=  2*list[i];
//     }    
//       }
//   cout<<"modified array : ";    
//   for(int i =0;i<lenght;i++){
//     cout<<list[i]<<" ";
//   }
// }


// ////DO THE SUM OF ODD NUMBER IN LIST AND ALSO SUM EVEN NUMBER BUT SUM OF EVEN NUMBER SQUARE
// #include <iostream>
// # include <climits>
// using namespace std;
// int main(){
//     int l;
//     cout<<"ENTER THE LENGHT OF ARRAY : ";
//     cin>>l;
//     int arry[l];
//     for(int i = 0; i<l;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY AT POSITION "<<i<<" ";
//         cin>>arry[i];
//     }
//     cout<<"THIS IS YOUR ARRAY = ";
//     for(int j = 0 ; j < l ; j++){
//        cout<<arry[j]<<" ";
//     }
//     cout<<endl;
//     int sum_of_odd = 0;
//     cout<<"THE SUM OF ODD NUMBER = ";
//     for(int i = 0;i < l;i++){
//         if(arry[i] % 2 != 0){
//             cout<<arry[i]<<" + ";
//             sum_of_odd += arry[i];
//         }
//     }
//     cout<<" = " <<sum_of_odd;
//     cout<<endl;
//     cout<<"the sum of even cube number is = ";
//     int sum_of_cube_of_even = 0;
//     for(int i = 0;i<l;i++){
//         if(arry[i] % 2 == 0){
//           cout<<"cube of "<<arry[i]<<"is";  
//           arry[i] = arry[i]*arry[i]*arry[i];
//           cout<<arry[i]<< " + ";
//           sum_of_cube_of_even+= arry[i];
//         }
//     }
//     cout<<" = "<<sum_of_cube_of_even;
// }
////FIND THE SECOND MAXIMUN NUMBER FROM THE ARRAY !
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int lenght ;
//     cout<<"ENTER THE LENGHT OF ARRAY ";
//     cin>>lenght;
    

//     int list[lenght];
    
//     for(int i =0;i<lenght;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY at position "<<i; 
//         cin>>list[i];
//     }
//     for(int i =0;i<lenght;i++){
//         cout<<list[i]<<" ";
//     }
//     cout<<endl;
//     int mx = INT_MIN;
//     for(int i = 0;i<lenght;i++){
//         mx = max(mx,list[i]);

//     }
//     cout<<endl;
//     cout<<"FIRST MAXIMUM NUMBER "<<mx<<endl;
//     int sec_mx = INT_MIN;
//     for(int i=0;i<lenght;i++){
//         if(list[i] != mx ){
//             sec_mx = max(sec_mx,list[i]);
//         }
//     }
//     cout<<endl;
//     cout<<"SECOND MAX NUMBER "<<sec_mx<<" ";
// }

//duplicate remove from array 
// #include <iostream>
// using namespace std;
// int main(){
//     int s;
//     cout<<"enter the size of array : ";
//     cin>>s;
//     int arry[s];
//     // cout<<"enter the element of array \n";
//     for(int i = 0; i<s;i++){
//         cout<<"enter the elemnt of array at position"<<i<<"\t :";
//         cin>>arry[i];
//     }
//     cout<<"original array"<<endl;
//     for(int i =0 ;i <s; i++){
//         cout<<arry[i]<<"\t";
//     }
//     cout<<"\n";
//     cout<<"array after remove duplicate : \n";
//     for(int i = 0 ;i <s;i++){
//         bool isduplicate  = false;
//         for(int j = 0;j<i;j++){
//             if(arry[i] == arry[j]){
//                 isduplicate = true;
//                 break;
//             }
//         }
//         if(!isduplicate){
//             cout<<arry[i]<<"\t";////abb hum yaha chahe toh sorted bhi kr sakte h
//         }
//     }
//     cout<<endl;
// }


// #include <iostream>
// #include <algorithm> // For sort()

// using namespace std;
// int array_make_print(int l){
//     int l;
//     int arry[l];
//     for(int i =0 ;i<l;i++){
//         cout<<"enter the element of array at position : "<<i<<" ";
//         cin>>arry[i];
//     }
//     for(int i =0 ;i<l;i++){
//         cout<<arry[i]<<" ";
//     }
// }
// int main(){
//     int l;
//     int array[l];
//     cout<<"enter the lenght of array : ";
//     cin>>l;
//     array_make_print(l);
//     sort(array;array+l)
// }
// int main() {
//     int arr[] = {5, 2, 9, 1, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + n); // Sorting in ascending order

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//     string str;
    
//     // Input a string from the user
//     cout << "Enter a lowercase string: ";
//     getline(cin, str);
    
//     // Convert to uppercase using transform
//     transform(str.begin(), str.end(), str.begin(), ::toupper);
    
//     // Output the converted string
//     cout << "Uppercase String: " << str << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main (){
//     int a =12;
//     int b = 5;
//     cout<<(a>b);
//     cout<<endl;
//     int x = 0;
//     x = 400*400/400;
//     cout<<"value of x = "<<x<<endl;
//     int atry[5] = {1,2,3,4,5};
//     cout<<(atry)<<endl;//aise krne se address print hoga 
//     cout<<(atry)<<"\t\t"<<(atry+1)<<endl; //address me +4 hoga 
//     cout<<*(atry)<<"\t\t"<<*(atry+1)<<endl; // *(atry) iska matlb just array[0] ha
//     return 0;
// }



//SORT THE ARRAY BY FUNCTION
//void sort (int a[] ,int n)
// Define thc function sort to sort an array of
// intcgcrs. Show step-by-stcp execution of the above
// sort function for thc following data.
// 34, 56, 71,1 2
// #include <iostream>
// using namespace std;
// void sort (int  a[] , int  n){
//     for(int i =0 ;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(a[i] > a[j]){
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for(int i =0 ;i <n;i++){
//         cout<<a[i]<<"\t";
//     }
// }
// int main(){
//     int arry[] =  {34,56,71,1,2};
//     cout<<"original arry \n"; 
//     for(int i =0 ;i<5;i++){
//         cout<<arry[i]<<"\t";
//     }
//     cout<<endl;
//     sort(arry, 5);
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int size , temp;
//     cout<<"ENTER THE SIZE OF ARRAY : ";
//     cin>>size;
//     int ary[size];
//     for(int i = 0 ;i<size;i++){
//         cout<<"ENTER THE ELEMENT OF ARRAY AT POSITION "<<i<<" : ";
//         cin>>ary[i];
//     }
//      cout<<"ORIGINAL ARRAY => ";
//     for(int i = 0;i<size;i++){
//        cout<<ary[i]<<"\t";
//     }
//     for(int i = 0; i < size ; i++){
//         for(int j = i+1 ; j < size ; j++){
//             if(ary[i]>ary[j]){
//                 temp = ary[i];
//                 ary[i] = ary[j];
//                 ary[j] = temp;
//             }
//         }
//     }
//     cout<<"\nSORTED ARRAY IN ASCENDING ORDER  => ";
//      for(int i = 0;i<size;i++){
//         cout<<ary[i]<<"\t";
//     }  
//       cout<<"\nSORTED ARRAY IN DESECANDING ORDER  => ";
//          for(int i = size-1;i>=0;i--){
//      cout <<ary[i]<<"\t";
//     } 
// }

