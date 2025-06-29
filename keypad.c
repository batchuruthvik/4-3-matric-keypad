#include<regx51.h>
#define seg P3
sbit C1=P2^0; sbit C2=P2^1; sbit C3=P2^2;
sbit R1=P2^3; sbit R2=P2^4; sbit R3=P2^5; sbit R4=P2^6;
void main(){
	R1=0;R2=1;R3=1;R4=1;
	if(C1==0){
		seg=0xF9;
	}
	else if(C2==0){
		seg=0xA4;}
	else if(C3==0){
		seg=0xB0;}
	R1=1;R2=0;R3=1;R4=1;
	
	if(C1==0){
  	seg=0x99;}
	else if(C2==0){
		seg=0x92;}
	else if(C3==0){
		seg=0x82;}
	R1=1;R2=1;R3=0;R4=1;
		if(C1==0){
			seg=0xF8;}
		else if(C2==0){
			seg=0x80;}
		else if(C3==0){
			seg=0x90;}
		R1=1;R2=1;R3=1;R4=0;
			if(C2==0){
				seg=0xC0;}
}
