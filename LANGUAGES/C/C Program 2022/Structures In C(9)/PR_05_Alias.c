// Make a structure to store Bank Account Information of a customer of Punjab National Bank. Also make an alias name for it.



#include<stdio.h>
#include<string.h>

typedef struct bankAccount{
    int accountNo;
    char accountName[100];
} acc; //alias

int main(){
    acc acc1 ={ 123, "Rahul"};
    acc acc2 ={ 124, "Divya"};
    acc acc3 ={ 126, "Khusi"};

    printf("Account No = %d\n", acc1.accountNo);
    printf("Account Name = %s\n", acc1.accountName);

    return 0;
}