/*
 * AUTHOR:    Samuel M.H. <samuel.mh@gmail.com>
 * LAST REV:  10-May-2012
 * DESCRIPTION:
 *   Arduino C code class for playing songs.
 *   Based on the tone library (http://code.google.com/p/arduino-tone/).
 *
 * LICENSE: GPL V3 <http://www.gnu.org/licenses/gpl.html>
*/

#include "SMH_Song.h"


/*
 * Plays a song
 *
 * PARAMETERS:
 *   output: digital pin where the song will be played.
 *   data: the song itself.
 *
 * SONG FORMAT:
 *   array of {(configuration, song_part0, song_part1, song_part2 ... song_partn }
 *   configuration: array of integers that represents the order the song parts will be played.
 *   song_part: array of integers that represents a melody.
 *     The first element of this array is  the length in miliseconds of a sixteenth note
 *      which is another way of setting the Beats Per Minute of the song.
 *     The following elements are pairs of tone and length constants that represent a note.
 *   WARNING: please end either configuration and song_parts arrays with the SMH_Song_END constant.
 *   
*/
void SMH_Song::play(int output,int** data){
  unsigned int pos=0;
  while (data[0][pos]!=SMH_Song_END){
    SMH_Song::playPart(output, data[data[0][pos]+1]);
    pos++; 
  }
};
  
/*
 * Private method
 * Plays a song part
 *
 * PARAMETERS:
 *   output: digital pin where the song will be played.
 *   melody: .
 *
*/
void SMH_Song::playPart(int output,int *melody){
  int sc_length=melody[0];
  unsigned int pos=1;
  while(melody[pos]!=SMH_Song_END){
    int noteDuration = sc_length*melody[pos+1];
    tone(output, melody[pos], noteDuration);
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(output);
    //Next note
    pos+=2;    
  }  
}

