/*

Nome: Jean Louren√ßo     RA: 22.216.015-2
Nome: Filipi de Luca    RA: 22.216.027-7

*/

#include <stdio.h>
#include <conio.h>
#include <cstdlib>

char preg[9][10] = { {"IF"}, {"ELSE"}, {"THEN"}, {"PRINT"}, {"READ"}, {"OF"}, {"GOTO"}, {"END"}, {"LET"} };
char tempC [200];
char tempS [200]; //
int tempN[200]; // numeros
char var [200][200];
char vetor[200];

int f=0;
int pos = 0, i = 0;
//char simbolo;// Concertar simbolo

void E0();
void E1();
void E2();
void E3();
void E4();
void E5();
void E6();
void compara();

void s1();
void s2();
void s3();
void s4();
void s5();
void s6();
void s7();
void s8();


void insereMatriz(int x){
	int c = 0;

	while(tempC[c] != '\0'){
		var[x][c] = tempC[c];
		c++;
		if(tempC[c] == '\0')
		    var[x][c] = tempC[c];
	}
	
	printf("V(%i)", x);
	

}

void compara(){

int auxPR = 0;

if(tempS[auxPR] == 'i'){
    auxPR++;

    if(tempS[auxPR] == 'f'){
        auxPR++;

        if( tempS[auxPR] == '\0' ){
            printf( "P(0)");
        }
    }
}

auxPR = 0;

if(tempS[auxPR] == 'e'){
    auxPR++;

    if( tempS[auxPR] == 'l'){
        auxPR++;

        if( tempS[auxPR] == 's'){
            auxPR++;

            if( tempS[auxPR] == 'e'){
                auxPR++;

                if( tempS[auxPR] == '\0' ){
                    printf( "P(1)");
                }
            }
        }
    }
}

auxPR = 0;

if( tempS[auxPR] == 't'){
    auxPR++;

    if(tempS[auxPR] == 'h'){
        auxPR++;

        if(tempS[auxPR] == 'e'){
            auxPR++;

            if( tempS[auxPR] == 'n'){
                auxPR++;

                if( tempS[auxPR] == '\0' ){
                    printf( "P(2)");
                }
            }
        }
    }
}

auxPR = 0;

if( tempS[auxPR] == 'p'){
    auxPR++;

    if(tempS[auxPR] == 'r'){
        auxPR++;

        if(tempS[auxPR] == 'i'){
            auxPR++;

            if( tempS[auxPR] == 'n'){
                auxPR++;

                if(tempS[auxPR] == 't'){
                    auxPR++;

                    if( tempS[auxPR] == '\0' ){
                        printf( "P(3)");

                    }
                }
            }
        }
    }
}

auxPR = 0;

if( tempS[auxPR] == 'r'){
    auxPR++;

    if( tempS[auxPR] == 'e'){
        auxPR++;

        if(tempS[auxPR] == 'a'){
            auxPR++;

            if(tempS[auxPR] == 'd'){
                auxPR++;

                if( tempS[auxPR] == '\0' ){
                    printf( "P(4)");

                }

            }
        }
    }
}

auxPR = 0;

if( tempS[auxPR] == 'o'){
    auxPR++;

    if( tempS[auxPR] == 'f'){
            auxPR++;

        if( tempS[auxPR] == '\0' ){
            printf( "P(5)");

        }
    }
}

auxPR = 0;

if(tempS[auxPR] == 'g'){
    auxPR++;

    if(tempS[auxPR] == 'o'){
        auxPR++;

        if(tempS[auxPR] == 't'){
            auxPR++;

            if( tempS[auxPR] == 'o' ){
                auxPR++;

                if( tempS[auxPR] == '\0' ){
                    printf( "P(6)");

                }
            }
        }
    }
}

auxPR = 0;

if( tempS[auxPR] == 'e'){
    auxPR++;

    if( tempS[auxPR] == 'n'){
        auxPR++;

        if( tempS[auxPR] == 'd' ){
            auxPR++;

            if( tempS[auxPR] == '\0' ){
                printf( "P(7)");

            }
        }
    }
}

auxPR = 0;

if( tempS[auxPR] == 'l'){
auxPR++;

    if( tempS[auxPR] == 'e'){
    auxPR++;

        if( tempS[auxPR] == 't'){
            auxPR++;

            if( tempS[auxPR] == '\0' ){
                printf( "P(8)");

            }
        }
    }
}


}



void s1(){
	pos = 0;
	tempC[pos] = tempS[i];
}

void s2(){
	pos++;
	tempC[pos] = tempS[i];
}

void s3(){
	pos++;
	tempC[pos];
}
void s4(){
	pos = 0;
	tempC[pos] = tempS[i];
}

void s5(){
	pos++;
	tempC[pos] = tempS[i];
}

void s7(){
	printf("%c", tempS[i]);
	i++;
	}
void s8(){
	printf("%c%c", tempS[i], tempS[i+1]);
	i++;
}


void E0(){

	if(tempS[i] == '\0'){
		getch();
	exit(0);
	}

	
	if(tempS[i] == 32){
		i++;
		E0();
		}
	else if(tempS[i] >= '0' && tempS[i]<='9'){//ok
		    //printf("\nEncontrei um numero");
		   
			s4();
			i++;
			E2();
			
			

		}else if ((tempS[i] >= 'A' && tempS[i] <= 'Z') || (tempS[i]>='a' && tempS[i]<='z')){//ok
					
					s1();
                    i++;
                    E1();

		}
			
		else if (tempS[i] == ':'){//ok
			
				E3();
		}
			
		else if(vetor[pos] == '%'){
			
				E5();
				
		}else{//ok
		

			E6();
		}
	i++;


}
void E1(){//ok

int aux = 0;
		if((tempS[i] >= '0' && tempS[i]<='9') || (tempS[i] >= 'A' && tempS[i] <= 'Z') || (tempS[i]>='a' && tempS[i]<='z')){
			s2();
			i++;

			E1();
		}
		else{

            pos++;
			tempC[pos] = '\0';
			f++;
			insereMatriz(f - 1);
			compara();
			

			
			E0();
		}
			
			
	

	
	
}
void E2(){//ok
	//printf("\nEntrei no E2");
	if(tempS[i] >= '0' && tempS[i]<='9'){
			
			s5();
			i++;
			E2();
			

		}else{
			pos++;
			tempC[pos] = '\0';
			printf("N(%s)", tempC);
			E0();
		}
		
		//printf("Tenho isso no temp: %s", tempC);
	
}
void E3(){//ok
	
	if(tempS[pos] == '='){

		E4();
		
	}else{
		
		s7();
		E0();
	}
	
}
void E4(){//ok
	
	s8();
}
void E5(){

    if( tempS[i] == '\0'){
    E0();
    }
    else{
    	tempS[i] = 0;
        i++;
        E5();
        }

}


void E6(){
	

	
 printf("%c", tempS[i]);
	pos++;
	E0();
	
}



int main (){

printf("\n\nDigite numeros ou letras maiusculos ou minusculos: \n");
scanf("%[^\n]c", tempS); //Pega inclusive espaÁo.

//printf("\nPassei do scanf");

E0();


getch();
return 0;
}
