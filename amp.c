/**
 * @authors Cavaro Alexandre Riou Margot Groupe 2 Caen
 */

#include "amp.h"
#include "define.h"


/**
 * Open the file called by param filename if
 * @param filename
 * @return
 */
FILE* initAMP(char* filename){
    FILE * pf = NULL;

    return pf;
}

/**
 *
 * @param pf
 * @param song_filename
 */
void readAMP(FILE* pf, char * song_filename){

}

/**
 *
 * @param pf
 */
void closeAMP(FILE* pf){
    if (pf){
        fclose(pf);
    }else{
        printf("The file doesn't exist.")
    }

}
