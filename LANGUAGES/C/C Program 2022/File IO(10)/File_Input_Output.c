// FILE - 
// It is a container in a storage device(Hard Disk) to store data 

// -->> RAM is volatile i.e
// - Contents are lost when program terminates(e.g word program save in RAM by default)

//--->> So Files are used to persist(Save) the data




// Operation on Files:-------->>

// Create a File

// Open a File

// Close a File

// Read from a File

// Write in a File




// Types of Files:---->>

// (1)---> Textual Files (.c, .txt, .java etc..)

// (2)---> Binary Files(.mp3,.mp4, .jpg,.exe etc..)




// File Pointer:-------->>

// FILE is a (hidden)structure that needs to be created for opening a file

// A FILE ptr is one that points to this structure & is used to access the file.

// FILE *fptr;

// NOTE: It can be written anything, 8ptr, *vty, *oirteg, *ioreg,etc




// Opening a File:------------>>

// fptr = fopen("filename", mode);
// FILE *fptr;

/* where mode = read, write,etc..*/


// Closing a File:----------->>

// fclose(fptr);

//It is always advisable to close the file after using because it consumes resources.........





// File Opening Modes:---->>

//(1) open to read====>> "r"             

// (2) open to read in binary=====>>"rb"              

// (1) & (2) are used to open and see  the content present in it. If no file is present it gives the NULL value


//(3) open to write =====>> "w"             

// (4) open to write in binary =====>> "wb"

/*(3) & (4) are used to overwrite the file i.e all data gets deleted. If the file is not present then also it will create one.And if the file is present it will overwrite previous data and write new data*/


//(5) open to append ======>> "a"

// It is used to modify the data without overwriting the previous data



#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r"); 
    if(fptr == NULL){
        printf("The file doesn't exists\n");
    }else{
    fclose(fptr); //it means file exists

    }


    return 0;
}

// Try this:

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("NewTest.txt", "w"); 
    if(fptr == NULL){
        printf("The file doesn't exists\n"); //it will create file newtest.txt
    }else{
    fclose(fptr); //it means file exists

    }


    return 0;
}




// Reading from a file:->>

// fscanf(fptr, "%c", &ch);
// char ch;

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "r"); 
    
    char ch;

    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("Character = %c\n", ch);

    fclose(fptr);
    
    return 0;
}




// Writing to a file:---->>

// fprintf(fptr, "%c", ch);
// char ch = 'A';



#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "w");  //Till now we have apple written but now it will change TO mango ------>> overwrite
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);

    return 0;
}




// Appending to a file:---->>

// fprintf(fptr, "%c", ch);
// char ch = 'A';



#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "a");  //Till now we have MANGO written but now it will to MANGOmango ------>> No overwrite
    fprintf(fptr, "%c", 'm');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');

    fclose(fptr);


    return 0;
}





// Read & Write a char:----->>

// (1) fgetc(fptr):----->Used to Read a File. Same as fscanf()

// (2) fputc( 'A', fptr):------> Used to write a File.


#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "r");

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    fclose(fptr);


    return 0;
}

// We can do this in write mode also

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "w");

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);

    fclose(fptr);

    return 0;
}



// EOF (End Of File):------>>

// fgetc returns EOF to show that the file has ended