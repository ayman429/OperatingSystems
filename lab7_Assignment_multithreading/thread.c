
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int sum, x=0,y[5];// this data is shared by the threads
void *runner(void *param); // threads will call this function
int main( )
{
pthread_t thread[5];
for(int i = 0; i<5; i++){
pthread_create( &thread[i], 0,runner,0 );
pthread_join(thread[i], NULL);//wait for the thread to exit
x++;
}	
for(int i = 0; i<5; i++){
	sum+=y[i];
}
printf( "sum=%d\n",sum);
return 0;
}
void* runner( void * param )
{
	srand(time(0));
    y[x]=rand()%10;
	pthread_exit(0);
}





