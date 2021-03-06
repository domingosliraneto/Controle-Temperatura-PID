#include <uRTOS_2.21.h>
#include <convAD08.h>
#include <serialInt_1.2.h>

char __code Tit1[13]=
    "p    i    d ";                 
char __code Tit2[13]=
    "Setp    Temp";                 

unsigned char pid[3]={0,0,0};
unsigned char pwm=0;            

void RTproc_1(){                
    if(cnt200==pwm) P3_3=1;     
}                               
void RTproc_2(){                
    P3_3=0;                     
}                               

void ajustPID(){                
    unsigned char Kx=0;
    __bit ajust=1;              
    pwm=0;                      
    while(ajust){
        if(S1==3){              
            S1=0;
            pid[Kx]++;          
        }
        if(S2==3){                  
            S2=0;
            pid[Kx]--;              
        }
        if(Kx==0) char2LCD(0x81, pid[0], 2);  
        if(Kx==1) char2LCD(0x86, pid[1], 2);  
        if(Kx==2) char2LCD(0x8B, pid[2], 2); 
        umSeg=0; cnt100=255;    
        while(S1==2);
        if(umSeg){S1=0;         
            umSeg=0; Kx++;      
            if(Kx==3) Kx=0;     
        }
        umSeg=0; cnt100=255;    
        while(S2==2);
        if(umSeg){S2=0;         
            umSeg=0; ajust=0;   
        }
}   }

void main (){
    unsigned char setup=70;        
    unsigned char tempC=0;         
    signed char errAt=0;           
    signed char erAnt=0;           
    signed int ctrlAt=0;           
    signed int ctlAnt=0;           
    signed int P=0, I=0, D=0;      
    unsigned int tempo=0;          
    unsigned char i=0;

    inic();
    
    P3_3=0;                       
    Ch01=0;                       
    wrLCD4(comand,0x80);
    for(i=0;i<12;i++){
        wrLCD4(letra, Tit1[i]);   
    }
    wrLCD4(comand,0xC0);
    for(i=0;i<12;i++){
        wrLCD4(letra, Tit2[i]);   
    }

    ajustPID();                   
    while(1){

        if(S1==3){
            S1=0; setup++;        
        }
        if(S2==3){
            S2=0; setup--;        
        }
        if((S1==2)&&(S2==2)){     
            S1=0; S2=0; tempo=0;  
            ajustPID();           
        }
    
        char2LCD(0xC4, setup, 3); 
        char2LCD(0xCC, tempC, 3); 
    
        char2Ser(0,errAt,3);
		int2Ser(2,ctrlAt,5);     
        char2Ser(2,pwm,3);    
        char2Ser(0,tempC,3);
		int2Ser(2, tempo,5);     
        while(!TxFlag); TxFlag=0; 
        SBUF=13;                  
    
        Ch01=0;                 
        tempC=convAD08();       
        
    
        erAnt=errAt;            
        errAt=tempC-setup;      
    
        P=errAt; I=erAnt; D=errAt-erAnt;
        P=(P*pid[0])/10; I=(I*pid[1])/10; D=(D*pid[2])/10;
        ctlAnt=ctrlAt;
        ctrlAt=ctlAnt+P+I+D;      
        if(ctrlAt>255) ctrlAt=255;
        if(ctrlAt<0) ctrlAt=0;    
        pwm=ctrlAt*199/255;       
    
    
        while(!umSeg); umSeg=0; tempo++;
}   }
