#include <stdio.h>
#include <conio.h>
#include <string.h>
#define max_stack 10

struct stack //Mendefinisikan stack dengan menggunakan struct
{
    int top;//pendeklarasian variable untuk dipanggil pada fungsi void
    int data [15];//Membuat variable array sebagai implementasi stack
};

struct stack tumpuk;

void push(int d){//fungsi Push menginputkan data pada stack
    tumpuk.top++;
    tumpuk.data[tumpuk.top]=d;
    printf("Data berhasil dimasukkan");
    printf("\n \n");
}
void pop_des(){//fungsi Pop (mengambil data pada stack)
    printf("\n");
    printf("Data Terambil",tumpuk.data[tumpuk.top]);
    printf("\n");
    tumpuk.top--;
}
int isFull(){//fungsi IsFull untuk megecek apakah fungsi  stack sdah penuh
    if(tumpuk.top==max_stack-1)
        return 1;
    else
        return 0;
}

int isEmpty(){//isEmpty(mengecek apakah stack kosong)
    if(tumpuk.top==-1)
        return 1;
    else
        return 0;
}
void clear(){//clear (membersihkan seluruh isi stack)
    tumpuk.top=-1;
    printf("\n");
    printf("Semua data terhapus");
    printf("\n");
}
void print_as(){//print (mencetak seluruh isi stack)
    int j,i;
    int tampung;
    for(i=0;i<=tumpuk.top;i++)
    {
    for(j=i+1;j<=tumpuk.top;j++)
        {
            if(tumpuk.data[i]>tumpuk.data[j])
            {
                tampung=tumpuk.data[i];
                tumpuk.data[i]=tumpuk.data[j];
                tumpuk.data[j]=tampung;
            }
        }
    }
    for (int c=0;c<=tumpuk.top;c++)
    printf("%i",tumpuk.data[c]);
}
void execute(){
int x;
printf("stack:");scanf("%d",x);
                    for (int c=0;c<=tumpuk.top;c++)
                        if(tumpuk.data[c] % x==0){
                            printf("%i",tumpuk.data[c]);
                        }}

int main()// fungsi utama
{
    int pil,x;
    int input;
    tumpuk.top=-1;
    do
    {
        puts("_____");
        printf("\t\tMENU UTAMA\n");
        puts("_____");
        printf("1. Tambah data (Push)\n");
        printf("2. Keluarkan isi Stack (Pop)\n");
        printf("3. Kosongkan Stack\n");
        printf("4. Tampilkan Stack\n");
        printf("5. Proses\n");
        printf("6. out\n");
        printf("Pilihan : ");
        scanf("%d",&pil);
    switch(pil)
    {
    case 1 ://perintah dibawah ini dicetek apabilah kondisi ini memenuhi 1
        printf("\n");
        printf("1. Tambah data (Push)");
        if(isFull()==1){
            printf("Stack Penuh ! \n");
        }

        else
        printf("\nMasukkan Data = ");
        scanf("%d", &input);
        push(input);
        getch();
    break;

    case 2 ://perintah dibawah ini dicetek apabilah kondisi ini memenuhi 2
            printf("\n");
            printf("2. Keluarkan isi Stack (Pop)");
            if(isEmpty()==1){
                printf("Stack Kosong");
            }

            else
                pop_des();
                getch();

    break;

    case 3://perintah dibawah ini dicetek apabilah kondisi ini memenuhi 3
            printf("\n");
            printf("3. Kosongkan Stack");
            clear();
            printf("Stack Kosong\n");
    break;
    case 4 ://perintah dibawah ini dicetek apabilah kondisi ini memenuhi 4
            printf("\n");
            printf("");
            if(isEmpty()==1){
                printf("Stack Kosong");
            }

            else
                printf("\nData yang dicetak\n");
                print_as();
                getch();
    break;
    case 5:
            execute();
            break;

    case 6:
        // kodisi exit  5
            printf("\n");
            printf("Keluar Dari program ! Terima kasih ");
    }
    }while (pil!=5);

    getch();
    return 0;
}
