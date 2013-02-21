/*
 * AUTHOR:    Samuel M.H. <samuel.mh@gmail.com>
 * LAST REV:  16-May-2012
 * DESCRIPTION:
 *   Arduino C code headers for the SMH_Song class (play songs!!).
 *
 * LICENSE: GPL V3 <http://www.gnu.org/licenses/gpl.html>
*/

#ifndef SMH_Song_h
#define SMH_Song_h

#include "Arduino.h"

//Please end any array of the song with this
#define SMH_Song_END -1


//**********************    SPANISH MUSICAL NOTATION    ************************
//What I learned at school.

//DURACION (en semicorcheas)
#define R  16  //Redonda
#define BP 12  //Blanca con puntillo
#define B   8  //Blanca
#define NP  6  //Negra con puntillo
#define N   4  //Negra
#define C   2  //Corchea
#define SC  1  //Semicorchea


//TONO (en hertzios)
#define SILENCIO 0

#define DO0   131
#define DOS0  139
#define RE0   147
#define RES0  156
#define MI0   165
#define FA0   175
#define FAS0  185
#define SOL0  196
#define SOLS0 208
#define LA0   220
#define LAS0  233
#define SI0   247

#define DO   262
#define DOS  277
#define RE   294
#define RES  311
#define MI   330
#define FA   349
#define FAS  370
#define SOL  392
#define SOLS 415
#define LA   440
#define LAS  466
#define SI   494

#define DO2   523
#define DOS2  554
#define RE2   587
#define RES2  622
#define MI2   659
#define FA2   698
#define FAS2  740
#define SOL2  784
#define SOLS2 831
#define LA2   880
#define LAS2  932
#define SI2   988

#define DO3   1047
#define DOS3  1109
#define RE3   1175
#define RES3  1245
#define MI3   1319
#define FA3   1397
#define FAS3  1480
#define SOL3  1568
#define SOLS3 1661
#define LA3   1760
#define LAS3  1865
#define SI3   1976




//**********************    AMERICAN NOTATION     ************************

//LENGTH OF a NOTE (in sixteenths notes)
#define W  16  //Whole note
#define HD 12  //Half note with dot
#define H   8  //Half note
#define QD  6  //Quarter note with dot
#define Q   4  //Quarter note
#define E   2  //Eightth note
#define S   1  //Sixteenth note


// TONES from the tone library (in Hertz)
#define SILENCE 0

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978





class SMH_Song{
  private:
    static void playPart(int,int *);
  public:
    static void play(int,int**);
};

#endif
