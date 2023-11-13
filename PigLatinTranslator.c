/*C program by Juan Marco Saca for CS1310 09.11.2023
	PigLatin.c
  				()						In Pig Latin, each word is altered by
                []						the front consonants (any letters not
                ||						a,e,i,o,u) being moved to the end 
                ||						and followed by "ay", and words 
               .'`.						that start with vowels or are 
               |  |						all consonants have "way" 
               |  |						added to the end
   |           |  |           |
   |           |  |           |
   |           |  |           |
   |       _  /    \  _       |
  |~|____.| |/      \| |.____|~|
  |                            |
  `-`-._                  _.-'-'  
        `-.           _.-'        
          ||\________/||  
*/
#include<stdio.h>
#include<string.h>



void translate(char *word){
	int i = 0, j;
	
	while(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' 
		&& word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U'
		&& word[i] != ' ' && word[i] != '\0'){
		i++;
	}
	if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || 
		word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U' ||
		strlen(word) == i){
			
		printf("%sway ", word);
		
	}else{
		
		for(j = i; j<=strlen(word); j++){
			printf("%c", word[j]);
		}
		
		for(j = 0; j<i; j++){
			printf("%c", word[j]);
		}
		
		printf("ay ");
		
	}
	
}



void main (void)
{
	char sentence[81];
	char *pword;
	

	printf("Please do not type any punctiation mark and type" 
			"all the letter in either capital case or lower. \n\n");
	
		printf("Type your sentence: \n");
		gets(sentence);
		
		
	while(strcmp(sentence, "Stop") != 0 && strcmp(sentence, "STOP") != 0 && strcmp(sentence, "stop") != 0){
		
		printf("The translation is: ");
		
		pword = strtok(sentence, " ");
		
		while(pword != NULL){
			
			translate(pword);
			pword= strtok(NULL, " ");
			
		}
		printf("\n\n");
		
		printf("Please do not type any punctiation mark and type" 
			"all the letter in either capital case or lower case but do not mix: \n\n");
	
		printf("Type your sentence: \n");
		gets(sentence);
		
	}
	
	
}



