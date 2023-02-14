// Structures:---->>

// It is a collection of values of different data types

// Note that array is a also a collection of data but of different data types

// EXAMPLE:======>>
// For a student store the following :

// name (String)
// roll no (Integer)
// cgpa (Float)

// Structures in Memory:-

// struct student {    
    // char name[100];  
    //   int roll;   
    //    float cgpa;
    // };

// structures are stored in contiguous memory locations.


// Syntax:
// struct student {
    // char name[100];   
    // int roll;  
    // float cgpa;
    // };

// The struct is a user defined data type unlike int or floats which are inbuilt.
// Here in struct there are multiple data types stored

// Till now we have defined the struct

// struct student s1;
// s1.cgpa = 7.5;

//To use the data types we need to as done above

#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;

    s1.roll = 45;
    s1.cgpa = 9.7;
    // s1.name = "Rahul"; 
    // This is wrong because we know that we cannot change or modify the array and above we have used array notation

    strcpy(s1.name, "Rahul"); // we know this will copy Rahul in s1,name


    printf("Students name = %s\n", s1.name);
    printf("Students roll = %d\n", s1.roll);
    printf("Students cgpa = %f\n", s1.cgpa);

    return 0;

}



// Benefits of using Structures
// - (1): Good data management/organization
// - (2): Saves us from creating too many variables


// Array of Structures:-

// struct student COE[100];
// struct student ECE[100];
// struct student IT[100];

/*where struct student  = Data type;
        COE             = Variable;
        [100]           = Quantity;*/

// ACCESS:-
// IT[0].roll = 200;
// IT[0].cgpa = 7.6;

/* where IT = variable
         0  = index no
       roll = property*/

#include<stdio.h>
#include<string.h>

    //user- defined
    struct student{
        char name[100];
        int roll; 
        float cgpa; 
    };

    int main(){
        struct student ece[100];
        ece[0].roll = 76;
        ece[0].cgpa = 8.96;
        strcpy(ece[0].name, "Rahul");

        printf("Name = %s\n", ece[0].name);

        printf("Roll = %d\n", ece[0].roll);

        printf("CGPA = %f\n", ece[0].cgpa);


    return 0;
}





// Initializing Structures:---------->>

// struct student s1 = { "shradha", 1664, 7.9};
// struct student s2 = { "rahul", 1552, 8.3};
// struct student s3 = { 0 };


#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;

};

    int main(){
        struct student s1 = {"Rahul Mishra", 2, 9.4 };
        printf("Roll = %d\n", s1.roll);
        printf("Name = %s\n", s1.name);
        printf("CGPA = %f\n", s1.cgpa);

        return 0;
}




// Pointers to Structures:--------------->>

// struct student *ptr;
// ptr =&s1;
// struct student s1;



#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;

};

    int main(){
        struct student s1 = {"Rahul Mishra", 2, 9.4 };
        printf("Roll = %d\n", s1.roll);

        struct student *ptr = &s1; //Here s1 means that we are pointing towards whole s1 i.e LIne no 173's data

        printf("Name = %s\n", (*ptr).name ); //(*ptr) is pointing towards s1 and from s1 we now need le tus say "name to print";

        return 0; 


}





// Arrow Operator:-------->>

// (*ptr).code <------> ptr -->code

// i.e, (*ptr).name <----> ptr-->name;


#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;

};

    int main(){
        struct student s1 = {"Rahul Mishra", 2, 9.4 };
        printf("Roll = %d\n", s1.roll);

        struct student *ptr = &s1;

        printf("Name = %s\n", ptr->name ); 

        return 0; 


}





// Passing structure to function:--------->>

//Function Prototype
// void printInfo(struct student s1);



#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;

};

void printInfo(struct student s1);

int main(){
    struct student s1 = {"Rahul Mishra", 10, 8.9943};

    // If we want we can change the data's also i.e

    s1.roll = 65;
    printInfo(s1);        
    


    return 0;
}


void printInfo(struct student s1){

    printf("Students Information\n\n");
    printf("Name = %s\n", s1.name);
    printf("Roll No = %d\n", s1.roll);
    printf("CGPA = %f\n", s1.cgpa);

}




// typedef Keyword:---------------->>

// It is used to create alias(nicknames) for data types

// coe student1;



#include<stdio.h>
#include<string.h>

typedef struct studentOfEngineering{
    char name[100];
    int roll;
    float cgpa;

} soe;

int main(){

    soe s1 = {"Rahul", 76, 8.95};  //Instead of writing struct st....en..we can just write it ALIAS i.e "soe"
    printf("Name = %s\n", s1.name);
    printf("Roll No = %d\n", s1.roll);
    printf("CGPA = %f\n", s1.cgpa);


    return 0;

}








