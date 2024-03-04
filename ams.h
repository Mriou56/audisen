/**
 * @authors Cavaro Alexandre Riou Margot Groupe 2 Caen
 */

#ifndef AUDISEN_AMS_H
#define AUDISEN_AMS_H

#include "define.h"

struct song initSong();
struct song readAMS(char* fileName);
void createAMS(char* txtFileName, char* amsFileName);

#endif //AUDISEN_AMS_H
