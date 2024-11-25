#include <bits/stdc++.h>
using namespace std;

struct student {
    char nam[20], rollno[20];
    int marks, random;
};

student st;

void generalKnowledgeQuiz() {
    int i=0, arr[6];
    st.marks=0;
    char choice;

    while (i<5) {
        bool back=false;
        st.random= rand() % 6;
        for(int j=0; j<=6; j++) {
            if (st.random == arr[j]) {
                back=true;
                break;
            }
        }

        if (back) continue;

        arr[i]=st.random;

        switch (st.random) {
        case 0:
            cout<<i+1<<") Who is the first President of India?" << endl;
            cout<<"A. Jawaharlal Nehru\nB. Dr. Rajendra Prasad\nC. Dr. Zakir Husain\nD. Indira Gandhi" << endl;
            cin>>choice;
            if (choice=='B' || choice=='b') {
                cout<<choice<<" is correct Answer\n\n";
                st.marks++;
            } else {
                cout<<choice<<" is incorrect Answer\nThe correct answer is B\n\n";
            }
            break;
        case 1:
            cout<<i+1<< ") What is the national fruit of India?" << endl;
            cout<<"A. Mango\nB. Banana\nC. Apple\nD. Papaya" << endl;
            cin>>choice;
            if (choice == 'A' || choice == 'a') {
                cout<<choice<<" is correct Answer\n\n";
                st.marks++;
            } else {
                cout<<choice <<" is incorrect Answer\nThe correct answer is A\n\n";
            }
            break;
        case 2:
            cout<<i+1<< ") What is the capital of India?" << endl;
            cout<<"A. Mumbai\nB. New Delhi\nC. Kolkata\nD. Chennai" << endl;
            cin>>choice;
            if(choice == 'B' || choice == 'b') {
                cout<<choice<<" is correct Answer\n\n";
                st.marks++;
            } else {
                cout<<choice<<" is incorrect Answer\nThe correct answer is B\n\n";
            }
            break;
        case 3:
            cout<<i+1<< ") Who is known as the 'Father of the Nation' in India?" << endl;
            cout<<"A. Jawaharlal Nehru\nB. Mahatma Gandhi\nC. Sardar Patel\nD. Subhas Chandra Bose" << endl;
            cin>>choice;
            if (choice == 'B' || choice == 'b') {
                cout << choice << " is correct Answer\n\n";
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer\nThe correct answer is B\n\n";
            }
            break;
        case 4:
            cout<<i+1<< ") What is the national currency of India?" << endl;
            cout<<"A. Dollar\nB. Pound\nC. Rupee\nD. Euro" << endl;
            cin>>choice;
            if (choice == 'C' || choice == 'c') {
                cout << choice << " is correct Answer\n\n";
                st.marks++;
            } else {
                cout << choice << " is incorrect Answer\nThe correct answer is C\n\n";
            }
            break;
        case 5:
            cout<<i+ 1<< ") Which river is considered the holiest in India?" << endl;
            cout<<"A. Yamuna\nB. Ganga\nC. Brahmaputra\nD. Godavari" << endl;
            cin>>choice;
            if (choice == 'B' || choice == 'b') {
                cout << choice << " is correct Answer\n\n";
                st.marks++;
            } else {
                cout<<choice<<" is incorrect Answer\nThe correct answer is B\n\n";
            }
            break;
        }

        i++;
    }
}

void result() {
    float percentage = 0;
    cout<< "Student Name: " << st.nam << endl;
    cout<< "Roll no: " << st.rollno << endl;
    cout<< "Marks: " << st.marks << " out of 6" << endl;
    percentage= 100 * st.marks / 6;
    cout<< "Percentage: " << percentage << "%" << endl;

    if (percentage >= 50) {
        cout<< "Status: Pass\n";
    } else {
        cout<< "Status: Fail\n";
    }
}

int main() {
    char press;

    cout<<"Enter name: ";
    cin>> st.nam;
    cout<< "Enter rollno: ";
    cin>> st.rollno;

    cout<< "\n General Knowledge Quiz on India!" << endl;
    cout<< "Press any key to begin...";
    cin>> press;

    generalKnowledgeQuiz();
    cout<< "General Knowledge Quiz Result\n";
    result();

    cout<< "Press y if you want to continue or any other key to exit: ";
    cin>> press;

    if (press == 'y' || press == 'Y') {
        main();
    }

    return 0;
}
