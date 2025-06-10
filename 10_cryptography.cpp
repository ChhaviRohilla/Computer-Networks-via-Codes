# include <iostream>
# include <cmath>
# include <fstream>
using namespace std;

int main(){
    FILE *f1, *f2, *f3;
    int p=13;
    int q=17;
    int x=19;
    int y=21;

    int r1=(int)(pow(p,x))%q;
    int r2=(int)(pow(p,y))%q;

    int k1=(int)(pow(r2,x))%q;
    int k2=(int)(pow(r1,y))%q;
   
    f1=fopen("file1.txt", "r");
    f2=fopen("file2.txt", "w");

    if(!f1){
        cout<<("file not found")<<"\n";
    }
    if(!f2){
        cout<<("file not found")<<"\n";
    }
    char ch = fgetc(f1);
    while(ch!=EOF){
        fputc(ch + (k1) ,f2);
        ch = fgetc(f1); 

    }

    fclose(f1);
    fclose(f2);

    f2=fopen("file2.txt", "r");
    
    f3=fopen("file3.txt", "w");

    if(!f2){
        printf("file not found");
        
    }
    if(!f3){
        printf("file not found");
        
    }
    ch = fgetc(f2);
    while(ch!=EOF){
       fprintf(f3, "%c", ch-(k2));
       ch=fgetc(f2);
    }

    fclose(f2);
    fclose(f3);

}