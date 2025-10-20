#include <stdio.h>

int main(){
    int maths;
    int chem;
    int phy;
    int totalmarksthreesubject;
    int subject2;


    printf("Type your maths marks:");
    scanf("%d", &maths);

    printf("Type your chem marks:");
    scanf("%d", &chem);

    printf("Type your phy marks:");
    scanf("%d", &phy);

    totalmarksthreesubject= maths+chem+phy;
    subject2=maths+chem;

    if ( totalmarksthreesubject>=190){
        printf("you are eligible");

        }


     else if(subject2 >=140){
            printf("you are eligible");

        }
        else{
            printf("you are not eligible");
        }

        return 0;

}


















