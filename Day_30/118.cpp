// C++ program to implement a simple library management system using structures
#include<iostream> 
#include<cstring>
using namespace std; 

struct Book{
    int id;
    char name[50];
    char author[50];
    int status;      // 0 = Available, 1 = Issued
};

int main(){
    Book b[100];
    int n=0, choice, id, i, found;

    do{
        cout<<"\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout<<"\n1. Add Book";
        cout<<"\n2. Display Books";
        cout<<"\n3. Search Book";
        cout<<"\n4. Issue Book";
        cout<<"\n5. Return Book";
        cout<<"\n6. Delete Book";
        cout<<"\n7. Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;
        cin.ignore();

        switch(choice){

        case 1:
            cout<<"Enter Book ID: ";
            cin>>b[n].id;
            cin.ignore();

            cout<<"Enter Book Name: ";
            cin.getline(b[n].name,50);

            cout<<"Enter Author Name: ";
            cin.getline(b[n].author,50);

            b[n].status = 0;
            n++;

            cout<<"Book Added Successfully.\n";
            break;

        case 2:
            if(n==0){
                cout<<"No Books Available.\n";
                break;
            }

            cout<<"\nID\tBook Name\tAuthor\t\tStatus\n";

            for(i=0;i<n;i++){
                cout<<b[i].id<<"\t"
                    <<b[i].name<<"\t\t"
                    <<b[i].author<<"\t\t";

                if(b[i].status==0)
                    cout<<"Available";
                else
                    cout<<"Issued";

                cout<<endl;
            }
            break;

        case 3:
            cout<<"Enter Book ID to Search: ";
            cin>>id;

            found=0;

            for(i=0;i<n;i++){
                if(b[i].id==id){
                    cout<<"\nBook Found\n";
                    cout<<"Name   : "<<b[i].name<<endl;
                    cout<<"Author : "<<b[i].author<<endl;

                    if(b[i].status==0)
                        cout<<"Status : Available\n";
                    else
                        cout<<"Status : Issued\n";

                    found=1;
                    break;
                }
            }

            if(found==0)
                cout<<"Book Not Found.\n";

            break;

        case 4:
            cout<<"Enter Book ID to Issue: ";
            cin>>id;

            found=0;

            for(i=0;i<n;i++){
                if(b[i].id==id){

                    if(b[i].status==0){
                        b[i].status=1;
                        cout<<"Book Issued Successfully.\n";
                    }
                    else{
                        cout<<"Book Already Issued.\n";
                    }

                    found=1;
                    break;
                }
            }

            if(found==0)
                cout<<"Book Not Found.\n";

            break;

        case 5:
            cout<<"Enter Book ID to Return: ";
            cin>>id;

            found=0;

            for(i=0;i<n;i++){
                if(b[i].id==id){

                    if(b[i].status==1){
                        b[i].status=0;
                        cout<<"Book Returned Successfully.\n";
                    }
                    else{
                        cout<<"Book is Already Available.\n";
                    }

                    found=1;
                    break;
                }
            }

            if(found==0)
                cout<<"Book Not Found.\n";

            break;

        case 6:
            cout<<"Enter Book ID to Delete: ";
            cin>>id;

            found=0;

            for(i=0;i<n;i++){
                if(b[i].id==id){

                    for(int j=i;j<n-1;j++){
                        b[j]=b[j+1];
                    }

                    n--;
                    found=1;

                    cout<<"Book Deleted Successfully.\n";
                    break;
                }
            }

            if(found==0)
                cout<<"Book Not Found.\n";

            break;

        case 7:
            cout<<"Program Ended.\n";
            break;

        default:
            cout<<"Invalid Choice.\n";
        }

    }while(choice!=7);

    return 0;
}