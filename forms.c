#include <stdio.h>
#include <string.h>

void yazdir(int row, int col, int* matrix,char *b){
 
int i=0;
int j=0;
char ll[10];
for (i=0; i<strlen(b);i++){
	ll[i]=b[i];
}
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen(ll,"w");

 
for (i=0; i<row; i++){
	for(j=0; j<col; j++){
		fprintf(fptr,"%d,",*(matrix + i*col + j));
		
	}
}
   
  
   fclose(fptr);

   
}

void a(int row, int col, int* matrix){
		int dizi[row][col];
		printf("A and Orjinal\n");
	int qq,ww=0;
      int i, j;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", *(matrix + i*col + j)); // or better: printf("%d ", *matrix++);
              dizi[qq][ww]=*(matrix + i*col + j);
      
              
            ww++;
        }
      
        qq++;
        ww=0;
        printf("\n");
        
    }
    yazdir(row,col,dizi[0],"aa.txt");
}


void b(int row, int col, int* matrix){
		
	int qq=0;
	int sss=0;
	int mydizi[row][col];
	

	printf("\n");
      int i, j;
    for(i=0; i<row; i++){
    	if(i%2==0){
		
        for(j=0; j<col; j++){
            printf("%d ", *(matrix + i*col + j)); 
            mydizi[qq][sss]=*(matrix + i*col + j);
            
            sss++;
            
	   
            
           
          
            
               
           
        }}
        else{
        	for(j=col-1; j>=0; j--){
        		printf("%d ", *(matrix + i*col + j));
        		mydizi[qq][sss]=*(matrix + i*col + j);
        		sss++;

            
			}
			
        	
		}
			qq=qq+1;
		sss=0;
	

		printf("\n");
    }
     yazdir(row,col,mydizi[0],"bb.txt");
     
}

void c(int row, int col, int* matrix){
		int dizi[row][col];
	int qq=0;
	int ww=0;
	
		printf("\n");
   int i, j;
   int sayac=0;
    for(i=0; i<row; i++){
    
		
        for(j=i; j<col-i; j++){
            printf("%d ", *(matrix + col*(col-i-1) + j)); 
              dizi[qq][sayac]=*(matrix + col*(col-i-1) + j);
            sayac++;
            if(sayac==row){
	
	qq++;
        	
		printf("\n");
		sayac=0;}
    }
        
        
    
        	for(j=row-2-i; j>i-1; j--){
        		printf("%d ", *(matrix + col*j + (row-1-i)));
        		  dizi[qq][sayac]=*(matrix + col*j + (row-1-i));
        		sayac++;
        		if(sayac==row){
        			qq++;
	
        	
		            printf("\n");
					sayac=0;}
    }
			
			  for(j=row-2-i; j>i-1; j--){
            printf("%d ", *(matrix + i*col + j)); 
          dizi[qq][sayac]=*(matrix + i*col + j);
            sayac++;
            if(sayac==row){
            	qq++;
	
        	
		printf("\n");
		sayac=0;}
    }
        
    
        	for(j=i+1; j<row-i-1; j++){
        		printf("%d ", *(matrix + j*col + i));
        		  dizi[qq][sayac]=*(matrix + j*col + i);
        		sayac++;
        		if(sayac==row){
        			qq++;
	
        	
		printf("\n");
		sayac=0;
		}
    }
			}
			  yazdir(row,col,dizi[0],"cc.txt");
			
			
			
	
}
     	
     	
   

void d(int row, int col, int* matrix){
		int dizi[row][col];
	int qq=0;
		printf("\n");
int i=0,x=0,temp=0;
int zz=0;
for(x=0; x<row; x++){
if (x%2==0||x==0){
temp=0;
for (i=row-x-1; i<row; i++){
printf("%d ", *(matrix + col*i + temp));
dizi[qq][zz]=*(matrix + col*i + temp);
	zz++;
        		if(zz==row){
        			qq++;
	
        	
		printf("\n");
		zz=0;}


temp=temp+1;}}
else{
temp=x;
for (i=row-1; i>row-x-2; i--){
printf("%d ", *(matrix + col*i + temp));
dizi[qq][zz]=*(matrix + col*i + temp);
	zz++;
        		if(zz==row){
        			qq++;
	
        	
		printf("\n");
		zz=0;}
temp=temp-1;}}}
for(x=0; x<row; x++){
if (x%2==0||x==0){
temp=x+1;
for (i=0; i<row-1-x; i++){
printf("%d ", *(matrix + col*i + temp));
dizi[qq][zz]=*(matrix + col*i + temp);
	zz++;
        		if(zz==row){
        			qq++;
	
        	
		printf("\n");
		zz=0;}
temp=temp+1;}}
else{
temp=row-1;
for (i=row-2-x; i>-1; i--){
printf("%d ", *(matrix + col*i + temp));
dizi[qq][zz]=*(matrix + col*i + temp);
	zz++;
        		if(zz==row){
        			qq++;
	
        	
		printf("\n");
		zz=0;}
temp=temp-1;}}}

 yazdir(row,col,dizi[0],"dd.txt");}


void e(int row, int col, int* matrix){
	int qq=0;
	int sss=0;
	int mydizi[row][col];
		printf("\n");
int i=0,x=0,temp,zz=0;
int k,j,v,s,y,say=0;
int nes=(row/4)-1;
int ves;
int xes;
for(i=0; i<row/4; i++){
	if(i==nes){
		ves=i*4;
		xes=0;
	
	}
		for(j=0; j<row/4; j++){
		if (j==nes){
			xes=j*4;
		}
	for(v=0; v<2; v++){
		say=v*2;
		for(s=0; s<2; s++){
			k=s*2;
			for(x=0; x<2; x++){
				for(y=0; y<2; y++){
					printf("%d ", *(matrix + col*(x+say+ves) + (y+k+xes)));
					mydizi[qq][zz]=*(matrix + col*(x+say+ves) + (y+k+xes));
						zz++;
        		if(zz==row){
        			qq++;
	
        	
		printf("\n");
		zz=0;}
				}
}}}
}

	
}
 yazdir(row,col,mydizi[0],"ee.txt");

}



void func(int row, int col, int* matrix){
		int qq=0;
		int zz=0;
		int ww=0;

	int mydizi[row][col];
		printf("\n");
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int s=0;
	int z=0;
	int x=0;
	int sayac=0;
	int right=0;
	int y=0;
	int up=0;
	int m=row/4;
	int n=row/4;
	
	
	
	for (i=0; i<m; i++){
		if (i==m-1 && m!=1){
			sayac+=1;
			right=right+2;
		}
		for (j=0; j<n; j++){
			if (j== n-1 && sayac==0 && n!=1){
				up=up-4;
				right=right-2;}
			if(j== n-1 && sayac==1){
				up=up+4;
				right=right-2;}
			for (k=0; k<2; k++){
				if(k==1){
					right = right+2;
					y=y+1;}
					for (l=0; l<2; l++){
						zz=0;
						if (l==1){
							
							if (y==0){
								up=up-2;		}
							else{
								up=up+2;
								y=y-1;}}
							for (s=0+right; s<right+2; s++){
								
								if(s==0+right){
									
									for(z=row-1+up; z>row-3+up; z--){
										printf("%d ", *(matrix + col*z + s));
											mydizi[qq][zz]= *(matrix + col*z + s);
												
												zz++;
											
											
        		if(zz==row-1){
        			qq++;
        		
	
        	
		printf("\n");
		zz=0;}
										}}
								if(s==1+right){
									
									for(z=row-2+up; z<row+up; z++){
										printf("%d ", *(matrix + col*z + s));
										mydizi[qq][zz]= *(matrix + col*z + s);
												zz=zz+1;
        		if(zz==row){
        			
        			
        			qq++;
        	
        			zz=0;
        			        		

	
        	
		printf("\n");
		}
									}
								}
							}
							}	}}}
							 yazdir(row,col,mydizi[0],"ff.txt");

      
}




void g(int row, int col, int* matrix){
	int qq=0;
	
int mydizi[row][col];
	printf(" \n");
int i,j,k,l,o,sayac,sayac1,v,zz=0;
   int  n = row/4;
   int m= col/2;
    for(i=0; i<n; i++){
    	sayac=i*4;
		for(j=0; j<m; j++){
			sayac1=j*2;
			for(o=0; o<2; o++){
				v=o*2;
				
					for(k=0; k<2; k++){
				for(l=0; l<2; l++){
					printf("%d ", *(matrix + col*(sayac+v+k) + (l+sayac1)));
					mydizi[qq][zz]=*(matrix + col*(sayac+v+k) + (l+sayac1));
							zz++;
        		if(zz==row){
        			qq++;
	
        	
		printf("\n");
		zz=0;}
				}
			}}}}
			yazdir(row,col,mydizi[0],"gg.txt");}




int main(void){
	
	printf("Hello please let your file name be fileName.txt \n");
	        int size1,size2;
        printf("n=?");
        scanf("%d",&size1);
        printf("m=?");
        scanf("%d",&size2);
	int x [size1][size2];
	int temp;
  FILE *myFile; 
  int   i,     
        n,      
        arr[100][100] , 
        row=0,  
       
        col,   
        zero=(int)'0';
  char line[1028]; 
  myFile=fopen("fileName.txt","r");
  if (myFile){
     
        while(fgets(line,1028,myFile)){
                col = 0;    
                n = 0;          
                for(i=0;i<=strlen(line);i++){
                        if(line[i]>='0' && line[i]<='9') n=10*n + (line[i]-zero);
                        else {
                                arr[row][col]=n;
                                col++;
                                if(col==size1){
                                	row=row+1;
                                	col=0;
                                
                                	
								}
                                
                               
                                
                                n=0;
                               
                        }
                }
                
            
        }
     

      
        int i,j;
        for(i=0; i<size1; i++){
        	for(j=0; j<size2;j++){
        		x[i][j]=arr[i][j];
			}
		}

    

  } else {
        printf("Error: unable to open File");
        return 1;
  }
  a(size1,size2,x[0]);
b(size1,size2,x[0]);
c(size1,size2,x[0]);
d(size1,size2,x[0]);
e(size1,size2,x[0]);
func(size1,size2,x[0]);
g(size1,size2,x[0]);
 
  
  

  
      
}
