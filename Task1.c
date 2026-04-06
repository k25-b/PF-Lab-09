#include<stdio.h>
#include<string.h>
float triageScore(float injury, float risk, float vitals){
return ((injury*0.5) + (risk*0.3) + (vitals*0.2));
}



int main(){
float injury, risk, vitals;
printf("Enter the injury severity: ");
scanf("%f", &injury);
printf("Enter risk assesment: ");
scanf("%f", & risk);
printf("Enter vitals: ");
scanf("%f", &vitals);
float score = triageScore(injury, risk, vitals);
if ( score >= 7.0){
printf("Immediate attention required!");
}
else if (score < 7.0 && score >= 4.0){

printf("Moderate Attention Required! ");
}
else if (score < 4.0){
printf("Can Wait!");
}
else{
printf("Wrong Input!");
}

}
