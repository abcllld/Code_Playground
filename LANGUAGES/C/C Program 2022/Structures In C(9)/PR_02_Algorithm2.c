// Enter address(House No, Block, City, State) of 5 people.

#include<stdio.h>
#include<string.h>

struct address{
    int houseNo;
    char block[100];
    char city[80];
    char state[100];
};

int main(){
    struct address p1 = {12, "B","Aizwal","Mizorzm" };
    struct address p2 = {18, "C","Nagon","Assam" };
    struct address p3 = {11, "C","Noida","Uttar Pradesh" };
    struct address p4 = {19, "B","Imphal","Manipur" };
    struct address p5 = {42, "A","Saran","Bihar" };

    printf("House No = %d\t Block = %s\t City = %s\t State = %s\n\n",p1.houseNo, p1.block, p1.city, p1.state);

    printf("House No = %d\t Block = %s\t City = %s\t State = %s\n\n",p2.houseNo, p2.block, p2.city, p2.state);

    printf("House No = %d\t Block = %s\t City = %s\t State = %s\n\n",p3.houseNo, p3.block, p3.city, p3.state);

    printf("House No = %d\t Block = %s\t City = %s\t State = %s\n\n",p4.houseNo, p4.block, p4.city, p4.state);

    printf("House No = %d\t Block = %s\t City = %s\t State = %s\n\n",p5.houseNo, p5.block, p5.city, p5.state);



    return 0;
}