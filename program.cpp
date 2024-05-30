#include <stdio.h>
#include <cstring>

int main() {
    int mainOption;

    do {
        printf("\n\n\t\t**********WELCOME TO DSU VIRTUAL BANK LIMITED**********\n\n");
        printf("\n1) Money Transfer\n2) Bill Payment\n3) My Account\n4) Customer support\n5) Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &mainOption);

        switch (mainOption) {
            case 1:
                // Money Transfer
                printf("\nSelect Transfer Type\n1) Mobile Account\n2) Branch\n3) Bank Transfer\n4) International Remittance\n");
                printf("\nEnter your choice: ");
                int transferOption;
                scanf("%d", &transferOption);

                switch (transferOption) {
                    case 1:
                        
                        char mobileapp[20];
                        printf("Enter the app where you want to send your amount:");
                        scanf("%19s", mobileapp);
                      
                        while (getchar() != '\n');

                        char name[25], reciver[25];
                        printf("Enter your name:");
                        fgets(reciver, sizeof(reciver), stdin);
                        reciver[strcspn(reciver, "\n")] = '\0';
                        printf("Enter receiver name:");
                        fgets(name, sizeof(name), stdin);
                        name[strcspn(name, "\n")] = '\0';
                        int num, numreciver, amount;
                        printf("Enter your num/ibn:");
                        scanf("%d", &num);
                        printf("Enter receiver num/ibn:");
                        scanf("%d", &numreciver);
                        printf("Enter the amount:");
                        scanf("%d", &amount);
                        printf("\n\tYour amount of %d has been successfully sent to %s\n", amount, reciver);
                        break;

                    case 2:
                        // Branch transfer selected.
                        char bank[25];
                        printf("Enter the bank:");
                        scanf("%24s", bank);
                    
                        while (getchar() != '\n');

                        char branch[30];
                        printf("Enter the branch:");
                        fgets(branch, sizeof(branch), stdin);
                        branch[strcspn(branch, "\n")] = '\0';
                        int code;
                        printf("Enter branch code:");
                        scanf("%d", &code);
                        int num1, numreciver2, amount1;
                        printf("Enter your num/ibn:");
                        scanf("%d", &num1);
                        printf("Enter receiver num/ibn:");
                        scanf("%d", &numreciver2);
                        printf("Enter the amount:");
                        scanf("%d", &amount1);
                        printf("\n\tYour Payment from %s of %s branch has sent to receiver num/ibn:%d\n", bank, branch, numreciver2);
                        break;

                    case 3:
                        // Bank transfer selected.
                        char bank1[25];
                        printf("Enter the bank:");
                        scanf("%24s", bank1);
                        
                        while (getchar() != '\n');

                        int num2, numreciver3, amount2;
                        printf("Enter your num/ibn:");
                        scanf("%d", &num2);
                        printf("Enter receiver num/ibn:");
                        scanf("%d", &numreciver3);
                        printf("Enter the amount:");
                        scanf("%d", &amount2);
                        printf("\n\tYour Payment from %s has sent to receiver num/ibn:%d\n", bank1, numreciver3);
                        break;

                    case 4:
                        // International Remittance selected.
                        int remittance;
                        printf("Enter your no of international transactions:");
                        scanf("%d", &remittance);
                        printf("\n\tUnable to proceed the transaction due to mismatch. Please call 0011 or contact the sender.\n");
                        break;

                    default:
                        printf("Invalid choice for transfer type.\n");
                        break;
                }
                break;

            case 2:
                // Bill Payment
                int billPaymentOption;
                printf("\n1) Utility Bill\n2) Mobile Top-up\n3) Credit Card\n4) Back to Main Menu\n");
                printf("\nEnter your choice for Bill Payment: ");
                scanf("%d", &billPaymentOption);

                switch (billPaymentOption) {
                    case 1:
                        // Utility Bill payment selected.
                        int bill;
                        printf("Select your bill type\n1) K.E\n2) KWSB\n3) Gas\n4) Fee challans\n");
                        printf("\nEnter your choice:");
                        scanf("%d", &bill);
                        int billnum;
                        printf("Enter your challen num/account no:");
                        scanf("%d", &billnum);
                        printf("\n\tBill/Challen no %d has been paid\n", billnum);
                        break;

                    case 2:
                        // Mobile Top-up selected.
                        printf("Mobile Top-up selected.\n");
                        char network[7];
                        printf("Choose your network:\n1) Jazz\n2) Telenor\n3) Ufone\n4) Zong");
                        printf("\nEnter your choice:");
                        scanf("%6s", network);
                      
                        while (getchar() != '\n');

                        int phonenum, balance;
                        printf("Enter your phone num:");
                        scanf("%d", &phonenum);
                        printf("Enter your load/balance:");
                        scanf("%d", &balance);
                        printf("\n\tMobile load/balance of %d rupees on phone num %d has been loaded\n", balance, phonenum);
                        break;

                    case 3:
                        // Credit Card payment selected.
                        printf("Credit Card payment selected.\n");
                        int card, exp;
                        printf("Enter card num:");
                        scanf("%d", &card);
                        int bill4;
                        printf("Enter your challen num/account no:");
                        scanf("%d", &bill4);
                        printf("Enter the expiry year of your card:");
                        scanf("%d", &exp);
                        if (exp <= 2023) {
                            printf("\n\tCard expired!\n");
                        } else {
                            printf("\n\tBill/Challan of %d paid by card no %d successfully\n", bill4, card);
                        }
                        break;

                    default:
                        printf("\n\tWELCOME TO DSU VIRTUAL BANK LIMITED \n");
                        break;
                }
                break;

            case 3:
                // My Account
                {
                    int account;
                    printf("1) Create account\n2) Already existed\n");
                    printf("\nEnter your choice:");
                    scanf("%d", &account);

                    if (account == 1) {
                        char Name[20];
                        printf("Enter your name:");
                        scanf("%19s", Name);
                       
                        while (getchar() != '\n');

                        int CNIC;
                        printf("Enter Your CNIC num:");
                        scanf("%d", &CNIC);
                        int phone;
                        printf("Enter your phone num:");
                        scanf("%d", &phone);
                        printf("\n\tYour account created\nWelcome to DSU VIRTUAL BANK LTD\n");
                    } else if (account == 2) {
                        // ... other cases ...
                }
                    

                    printf("\n1) Check Balance\n2) Update Password\n3) Account limit\n");
                    int b;
                    printf("\nEnter your choice: ");
                    scanf("%d", &b);
                    if (b == 1) {
                        printf("\nYour Balance is 50,000,00 PKR\n");
                    } else if (b == 2) {
                        char old[20];
                        printf("Enter your old alphabetic password:");
                        scanf("%19s", old);
                    
                        while (getchar() != '\n');

                        int password;
                        printf("Enter old pin:");
                        scanf("%d", &password);
                        char g[20];
                        printf("Enter your new alphabetic password:");
                        scanf("%19s", g);
                      
                        while (getchar() != '\n');

                        int Password;
                        printf("\nEnter new pin:");
                        scanf("%d", &Password);

                        char m[20];
                        printf("Enter confirm alphabetic password:");
                        scanf("%19s", m);
                       
                        while (getchar() != '\n');

                        int confirmpassword;
                        printf("\nEnter confirm pin:");
                        scanf("%d", &confirmpassword);

                        if (Password == confirmpassword)
                            printf("\nPassword Updated\n");
                        else
                            printf("\nMismatch!\n");
                    } 
					
                    
					else if (b == 3) {
                        printf("\nYour account limited to withdraw in a month 1000000 PKR\n");
                    }
                    else
                    printf("invalid\n");
                }
                break;

            case 4:
                // Customer Support
                printf("\n\tBANK WILL NOT ASK FOR YOUR PERSONAL DETAILS LIKE OTP AND PIN!!!!!\n");
                printf("\n1) Service problem\n2) Transaction issues\n3) Card online activation\n4) Card internationally activation\n");
                 int z;
                printf("\nEnter your choice:");
                scanf("%d", &z);
				char con[100];
                printf("Indentify your problem:");
                scanf("%99s", con);
               
                while (getchar() != '\n');

               

                printf("\n\tTHANK YOU FOR INFORMING US. WE'LL CONTACT YOU SHORTLY!!!!\n");
                break;

            case 5:
                printf("\nExiting...\n\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        printf("\t\n\nThanks for using our service:");
    } while (mainOption != 5);

    return 0;
}

