#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  string word;
  ifstream fr;

  // Reading the content of the file
  fr.open ("myfile.txt");
  if(fr)
  {
    while(getline(fr,word))
    {
       fr>>word;
       cout<<word;
    }
    cout<<"\nFile readed succesfully";
  }
  else
  {
      cout<<"Can't read the file";
  }
  fr.close();
  
  // Writing some content to the file
  ofstream fs("myfile2.txt");
  if(fs)
  {
      cout<<"\nEnter the content : "<<endl;
      getline(cin,word);
      fs<<word<<" ";
      cout<<"Content written succesfully into the file"<<endl;
  }
  else
  {
      cout<<"Can't open the file";
  }
  fs.close();
  return 0;
}

// #include <iostream>
// #include <fstream>
// using namespace std;
 
// int main()
// {
//     string line;
//     ifstream file1("original.txt");
//     ofstream file2("copy.txt",ios::app);
 
//     if(file1)
//     {
//         while(getline(file1,line))
//         {
//             file2<<line<<" ";
//         }
 
//         cout << "Copy Finished \n";
 
//     }
//     else
//     {
//         printf("Cannot read File");
//     }
 
//     file1.close();
//     file2.close();
 
//     return 0;
// }

// #include <iostream> // to take input and output
// #include <fstream>
// using namespace std;
// int main()
// {

//     fstream src;
//     ofstream dest;
//     string str;
//     src.open("shikhar.txt",ios::app);
//     for (int i = 0; i < 1; i++)
//     {
//         cout << "Enter the content:" << endl;
//         getline(cin, str);
//         src << str << endl;
//     }
//     if (!src)
//     {
//         cout << "Error: Cannot open";
//         exit(0);
//     }
//     dest.open("file2.txt",ios::app);
//     if (!dest)
//     {
//         cout << "Error: Cannot open";
//         src.close();
//         exit(1);
//     }
//     while (src.eof() == 0)
//     {
//         src >> str;
//         dest << str<<endl;
//     }
//     cout << "Success" << endl;
//     src.close();
//     dest.close();
//     return 0;
// }



// Suraj program
// #include <iostream> // to take input and output
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream obj;
//     ifstream obj2;
//     string str;
//     obj.open("file3.txt");
//     cout << "Writing content in the file3.txt..." << endl;
//     for (int i = 0; i < 1; i++)
//     {
//         cout << "Enter the content" << endl;
//         getline(cin, str);
//         obj << str << endl;
//         cout<<"Writing Success"<< endl;
//     }
   
//     obj.close();
//     obj2.open("file3.txt");
//     cout << "Reading content..." << endl;
//     while (obj2.eof() == 0)
//     {
//         obj2 >> str;
//         cout<<str<<endl;
//     }
//     obj2.close();
//     return 0;
// }