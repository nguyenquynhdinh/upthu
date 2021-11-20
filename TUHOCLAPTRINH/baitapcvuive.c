#include<stdio.h>
int main(){
     char da;
     printf("====CAU DO VUI VE======\n");
            printf("Loai vat ma minh ghet an nhat la gi?\n");
            printf("A . TEP.\nB . Thit ga.\nC . tep va ca.\nD . Minh khong ghet an loai vat nao het.\n ");
            printf("Moi chon dap an: ");
            da=getchar();
            switch (da)
    {
    case 'A':
    case 'a':
    case 'C':
    case 'c':{
    printf("Dung roi haha con tep ma an gi:<");
         break; }
    case 'B':
    case 'b':
    case 'D':
    case 'd':
    {
        printf("Sai roi nha minh khong thich an tep huhu");
        break;
    }
    default:
        printf("Sai cu phap vui long nhap lai va chon lai\n");
        break;
    
    }
    

}