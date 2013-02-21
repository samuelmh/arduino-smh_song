/*
 * AUTHOR:    Samuel M.H. <samuel.mh@gmail.com>
 * LAST REV:  25-May-2012
 * DESCRIPTION:
 *   Arduino C code constants that represent the Nyan Cat song.
 *   Piano Sheet Transcribed by Zorsy
 *
 * LICENSE:
 *  I'm NOT the author of the song neither the owner.
 *  I'm only the writter of this document that I release under
 *   the following license:
 *   <GPL V3 <http://www.gnu.org/licenses/gpl.html>
*/

#define SMH_Song_Nyan_INTRO  \
  (int *[]){           \
   (int[]) {           \
    0,                 \
    SMH_Song_END       \
   },                  \
   (int[]){            \
    90,                \
     RES2,SC,MI2,SC,FAS2,C, SI2,C,RES2,SC,MI2,SC, FAS2,SC,SI2,SC,DOS3,SC,RES3,SC, DOS3,SC,LAS2,SC,SI2,C, \
     FAS2,C,RES2,SC,MI2,SC, FAS2,C,SI2,C, DOS3,SC,LAS2,SC,SI2,SC,DOS3,SC, MI3,SC,RES3,SC,MI3,SC,DOS3,SC, \
    SMH_Song_END       \
   }                   \
  }



#define SMH_Song_Nyan  \
  (int *[]){           \
   (int[]) {           \
    0,0,1,2,1,3,       \
    SMH_Song_END,      \
   },                  \
   (int[]){            \
    90,                \
    FAS2,C,SOLS2,C, RES2,SC,RES2,SC,SILENCIO,SC,SI,SC, RE2,SC,DOS2,SC,SI,SC,SILENCIO,SC, SI,C,DOS2,C, \
    RE2,C,RES2,SC,DOS2,SC, SI,SC,DOS2,SC,RES2,SC,FAS2,SC, SOLS2,SC,RES2,SC,FAS2,SC,DOS2,SC, RES2,SC,SI,SC,DOS2,SC,SI,SC, \
    RES2,C,FAS2,C, SOLS2,SC,RES2,SC,FAS2,SC,DOS2,SC, RES2,SC,SI,SC,RE2,SC,RES2,SC, RE2,SC,DOS2,SC,SI,SC,DOS2,SC, \
    RE2,C,SI,SC,DOS2,SC, RES2,SC,FAS2,SC,DOS2,SC,RES2,SC, DOS2,SC,SI,SC,DOS2,C, SI,C,DOS2,C,\
    SMH_Song_END       \
   },                  \
   (int[]){            \
    90,                \
    SI,C,FAS,SC,SOLS,SC, SI,C,FAS,SC,SOLS,SC, SI,SC,DOS2,SC,RES2,SC,SI,SC, MI2,SC,RES2,SC,MI2,SC,FAS2,SC, \
    SI,C,SI,C, FAS,SC,SOLS,SC,SI,SC,FAS,SC, MI2,SC,RES2,SC,DOS2,SC,SI,SC, FAS,SC,RES,SC,MI,SC,FAS,SC,     \
    SI,C,FAS,SC,SOLS,SC, SI,C,FAS,SC,SOLS,SC, SI,SC,SI,SC,DOS2,SC,RES2,SC, SI,SC,FAS,SC,SOLS,SC,FAS,SC,   \
    SMH_Song_END       \
   },                  \
   (int[]){            \
    90,                \
    SI,C,SI,SC,LAS,SC, SI,SC,FAS,SC,SOLS,SC,SI,SC, MI2,SC,RES2,SC,MI2,SC,FAS2,SC, SI,C,LAS,C, \
    SMH_Song_END                                                                              \
   },                                                                                         \
   (int[]){                                                                                   \
    90,                                                                                       \
    SI,C,SI,SC,LAS,SC, SI,SC,FAS,SC,SOLS,SC,SI,SC, MI2,SC,RES2,SC,MI2,SC,FAS2,SC, SI,C,DOS2,C,\
    SMH_Song_END                                                                              \
   }                                                                                          \
  }
