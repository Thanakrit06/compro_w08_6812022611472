#include <stdio.h>

int main() {
    int startnumber,stopnumber;      //กำหนดตัวแปร
    printf("Enter start number : ",startnumber); //แสดงค่า ให้กรอก start number
    scanf("%d",&startnumber); //เก็บค่าตัวแปร start number

    printf("Enter stop number : ",stopnumber);  //แสดงค่า ให้กรอก stop number
    scanf("%d",&stopnumber); //เก็บค่าตัวแปร stop number

    printf("Start number is %d and stop number is %d\n",startnumber,stopnumber); //แสดงค่า Start number  stop number

    printf("----------------\n");

    printf("Sequence from start to stop: "); //แสดงค่า Sequence from start to stop
    while (startnumber <= stopnumber) //ใช้ while loop เงื่อนไข startnumber <= stopnumber
    {
        printf("%d ",startnumber); // แสดงค่า startnumber
        startnumber++; //นำค่า startnumber + 1 
        
    }
    
    printf("\n"); //เว้นบรรทัด 
    printf("Thank you."); //แสดงค่า Thank you

    return 0;
}       

            //กำหนดตัวแปร 
            //แสดงค่า ให้กรอก start number และ stop number
            //แสดงค่า Start number  stop number
            //ใช้ while loop เงื่อนไข startnumber <= stopnumber 
            //นำค่าตัวเลขเริ่มต้นที่กรอก มาตรวจสอบเงื่อนไข หากยังไม่หลุดจากเงือนไข ให้นำไป +1 
            //วนซ้ำไปเรื่อยๆ จนหลุดจากเงื่อนไข