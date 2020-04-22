#include<stdio.h>

int partition(int A[10],int p,int r){


        int tmp,i,x,j;

        x = A[r]; //pivot element.
        i = p-1;

        for(j = p; j <= r; j++)
        {

                if(A[j] < x)
                {

                i++;
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;

                }

        }

        i++;
        tmp = A[i];
        A[i] = A[r];
        A[r] = tmp;

        return i;

}

void qsort (int A[10],int p, int r){

        int q;

        if(p<r)
        {
                q = partition(A,p,r);
                qsort (A,p,q-1);
                qsort (A,q+1,r);

        }	

}

int main(void)
{

        int A[10] = {0};
        int i;
	float median;

	for(i=0;i<10;i++){

	printf("Enter number (%d) :",i+1);
	scanf(" %d", &A[i]);	


	}

          printf("\n\n !!!!!!!!!!!!!  Original Array  !!!!!!!!!!!!!\n\n");

        for(i = 0;i <= 9; i++){

                printf(" %d\t",A[i]);

        }

	printf("\n\n @@@@@@@@@@@@  Sorted Array   @@@@@@@@@@@@\n\n");


        qsort(A,0,9);

         for(i = 0;i <= 9; i++){

                printf(" %d\t",A[i]);

        }	
	
	median = ((A[4] + A[5]) / 2.0);

	printf("\n\n Median of given numbers : %.2f \n\n", median);


	return 0;
}
