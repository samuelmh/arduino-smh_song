/*
 * AUTHOR:    Samuel M.H. <samuel.mh@gmail.com>
 * LAST REV:  25-May-2012
 * DESCRIPTION:
 *   Example for the SMH_Song Arduino library.
 *   The arduino will play the Nyan Cat song
 *    through the digital output specified.
 *
 * Please note you'll need at least a speaker to hear the sound.
 * http://arduino.cc/en/Tutorial/tone
 *
 * LICENSE: GPL V3 <http://www.gnu.org/licenses/gpl.html>
*/

#include <SMH_Song.h>
#include "SMH_Song_Nyan.h"

void setup() {  
 pinMode(11, OUTPUT);
 SMH_Song::play(11, SMH_Song_Nyan_INTRO);
}

// Go Nyan cat! Go!
void loop() { 
 SMH_Song::play(11, SMH_Song_Nyan);
}
