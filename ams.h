//
// Created by alexm on 04/03/2024.
//

#ifndef AUDISEN_AMS_H
#define AUDISEN_AMS_H

#include "define.h"

struct song initSong();
struct song readAMS(char* fileName);
void createAMS(char* txtFileName, char* amsFileName);

#endif //AUDISEN_AMS_H
