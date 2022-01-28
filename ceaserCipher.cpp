// Program to implement encryption-decryption using ceaser cipher method

#include<iostream>
#define maxSize 100

using namespace std;

char message[maxSize];
char temp;
int key;

// Function to encrypt the message
void encryption()
{
    for(int i=0; message[i] != '\0'; i++)
    {
        temp = message[i];
        if(temp >= 'a' && temp <= 'z')
        {
            temp = temp + key;
            if(temp > 'z')
            {
                temp = temp - 'z' + 'a' - 1;
            }
            message[i] = temp;
        }
        else if(temp >= 'A' && temp <= 'Z')
        {
            temp = temp + key;
            if(temp > 'Z')
            {
                temp = temp - 'Z' + 'A' - 1;
            }
            message[i] = temp;
        }
    }

    cout << "Encrypted Message: " << message << endl;
}

// Function to decrypt the message
void decryption()
{
    for(int i=0; message[i] != '\0'; i++)
    {
        temp = message[i];
        if(temp >= 'a' && temp <= 'z')
        {
            temp = temp - key;
            if(temp > 'z')
            {
                temp = temp - 'z' - 'a' + 1;
            }
            message[i] = temp;
        }
        else if(temp >= 'A' && temp <= 'Z')
        {
            temp = temp - key;
            if(temp > 'Z')
            {
                temp = temp - 'Z' - 'A' + 1;
            }
            message[i] = temp;
        }
    }

    cout << "Decrypted Message: " << message;
}

int main()
{
    int choice;

    cout << "Enter the message: ";
    cin.getline(message,maxSize);

    cout << "Enter the key: ";
    cin >> key;

    cout << "\n*** Encryption - Decryption using Ceaser Cipher ***" << endl;
    cout << "1. Encryption of message" << endl;
    cout << "2. Decryption of message" << endl;

    cout << "Enter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            encryption();
            break;
        }

        case 2:
        {
            decryption();
            break;
        }

        default:
        {
            cout << "\n!! Please Try Again With Right Choice !!" << endl;
        }
    }

    return 0;
}
