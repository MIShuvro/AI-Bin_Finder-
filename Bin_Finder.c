#include<stdio.h>

#define F1 1
#define F2 2
#define F3 3
#define F4 4
#define F5 5
#define F6 6

#define BIN1 1
#define BIN2 5


///define Bin Finder Agent
int bin_finder(int location){
    if(location>=F1 && location<=F3){
        return BIN1;
    }else{
        return BIN2;
    }
}

int main(){
    int location,action ;
    printf("         BIN FINDER             \n");
    printf("PRESS 1 TO YOUR LOCATION FLOOR 1\n");
    printf("PRESS 2 TO YOUR LOCATION FLOOR 2\n");
    printf("PRESS 3 TO YOUR LOCATION FLOOR 3\n");
    printf("PRESS 4 TO YOUR LOCATION FLOOR 4\n");
    printf("PRESS 5 TO YOUR LOCATION FLOOR 5\n");
    printf("PRESS 6 TO YOUR LOCATION FLOOR 6\n");
    printf("ENTER YOUR LOCATION:-");
       while(1){
            scanf("%d",&location);
                if( location>0 && location<=6){
                     ///calling bin_finder agent
                     action=bin_finder(location);
                     printf("YOUR LOCATION IS FLOOR NUMBER %d AND YOUR NEARBY BIN IS %d",location,action);
                     break;
                }else{
                     printf("INVALID LOCATION PLEASE ENTER CORRECT LOCATION:-");
                }
       }

}
