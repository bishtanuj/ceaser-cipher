// Program to implement encryption-decryption using ceaser cipher method

#include<stdio.h>
#define maxSize 100

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

    printf("Encrypted Message: %s",message);
}

// Fuction to decrypt the message
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

    printf("Decrypted Message: %s",message);
}

void main()
{
    int choice;

    printf("Enter the message: ");
    fgets(message, maxSize, stdin);

    printf("Enter the key: ");
    scanf("%d",&key);

    printf("\n*** Encryption - Decryption using Ceasar Cipher ***\n");
    printf("1.  Encryption of message\n");
    printf("2.  Decryption of message\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

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
            printf("\n!! Please Try Again With Right Choice !!\n");
        }
    }
}
