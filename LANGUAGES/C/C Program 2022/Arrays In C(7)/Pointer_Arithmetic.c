// Pointer Arithmetic

// Pointer can be incremented & decremented

// ptr++ =========> ptr = ptr + 1;
// ptr-- =========> ptr = ptr - 1;


// CASE 1---

#include<stdio.h>
int main(){


    int age = 22;;
    int *ptr = &age;
    printf("ptr  =  %u\n",ptr);
    ptr++;
    printf("ptr  =  %u\n",ptr);  //Increases by 4

    ptr--;
    printf("ptr  =  %u\n",ptr); //original value i.e line 13


    


    return 0;
}

// As int stores 4 byte so it increases or deceases by 1

// Here the int has 4 bytes --> OK

// int is stored in a memory location say 2000----------->OK

// Now ptr takes the age address location and stores ->OK

// When ptr++ ==========>> It means ki jo bhi address tha usme 4 byte badha do i.e yadi 2000 tha ptra ka address to ab 2004 ho jayega---------DONE

// NOTE==>> If it would havebeen ptr-- then it will go its original location i.e 2000




// CASE 2---------

#include<stdio.h>
int main(){


    float price = 232.78;;
    float *ptr = &price;

    printf("ptr  =  %u\n",ptr);
    ptr++;
    printf("ptr  =  %u\n",ptr); // increment by 4

    ptr--;
    printf("ptr  =  %u\n",ptr); // original value


    return 0;
}

// As float stores 4 byte so it increases or deceases by 4




// CASE 3------

#include<stdio.h>
int main(){


    char hash = '#';;
    char *ptr = &hash;
    printf("ptr  =  %u\n",ptr);
    ptr++;
    printf("ptr  =  %u\n",ptr); //Increases by 1 

    ptr--;
    printf("ptr  =  %u\n",ptr); //original value

    return 0;
}

// As char stores 1 byte so it increases or deceases by 1


// NOTE 1:- We can also subtract one pointer from another
// int ptr1 = &age;
// int ptr2 = &age1;
// ptr2 - ptr1---------------VALID


// NOTE 2:- We can also compare 2 pointers


 