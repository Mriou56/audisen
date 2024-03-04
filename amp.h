/**
 * @authors Cavaro Alexandre Riou Margot Groupe 2 Caen
 */

#ifndef AUDISEN_AMP_H
#define AUDISEN_AMP_H

#include "define.h"


FILE* initAMP(char* filename);

void readAMP(FILE* pf, char * song_filename);

void closeAMP(FILE* pf);

#endif //AUDISEN_AMP_H



