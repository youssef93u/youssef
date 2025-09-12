#include <stdio.h>

int main() {
    int i;
float T=0,M;
float notes[5];
float note_haute,note_basse;
for(i=0;i<5;i++){
    printf(" notes[%d] :",i);
    scanf("%f",&notes[i]);
    T = T + notes[i];
    if(i==0)
    note_basse=note_haute=notes[i];
    if(note_haute<notes[i])
    note_haute = notes[i]; 
     if(note_basse>notes[i])
    note_basse = notes[i];   
}

printf(" total des notes %.2f:\n",T);
M = T/5;
 printf(" la moyenne %.2f:\n",M);
printf("la note_haute %f :\n",note_haute);
  printf("la note_basse %f :\n",note_basse);
if(M>=90) {
    printf("excellent\n");
}
else if(M>=80 && M<=89) {
    printf("tres bien\n");
}
else if(M>=70 && M<=79) {
    printf("bien \n");
}
else if(M>=60 && M<=69) {
    printf("passable \n");
}
else if(M<60) {
    printf("Echec \n");
}

if(M>=50){
    printf("l Etudiant a reussi \n");
}else{
    printf("l Etudiant a Echoue\n");
}



return 0;
}