/*
 * AUTHOR:    Samuel M.H. <samuel.mh@gmail.com>
 * LAST REV:  16-May-2012
 * DESCRIPTION:
 *   Example for the SMH_Song Arduino library.
 *   The arduino will play the Lambada song
 *    through the digital output specified.
 *
 * Please note you'll need at least a speaker to hear the sound.
 * http://arduino.cc/en/Tutorial/tone
 *
 * LICENSE: GPL V3 <http://www.gnu.org/licenses/gpl.html>
*/

#include <SMH_Song.h>
#include "SMH_Song_Lambada.h"

void setup() {  
 pinMode(11, OUTPUT);
 SMH_Song::play(11, SMH_Song_Lambada);
}

void loop() { 
}
