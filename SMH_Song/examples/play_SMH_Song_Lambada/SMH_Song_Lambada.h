/*
 * AUTHOR:    Samuel M.H. <samuel.mh@gmail.com>
 * LAST REV:  10-May-2012
 * DESCRIPTION:
 *   Arduino C code constant that represents the Lambada song.
 *   Sheet from http://http://diegosax.blogspot.com.es/
 *
 * LICENSE:
 *  I'm NOT the author of the song neither the owner.
 *  I'm only the writter of this document that I release under
 *   the following license:
 *   <GPL V3 <http://www.gnu.org/licenses/gpl.html>
*/

#define SMH_Song_Lambada                                               \
  (int *[]){                                                           \
   (int[]) {                                                           \
    0,1,1,2,1,1,0,                                                     \
    SMH_Song_END,                                                      \
   },                                                                  \
   (int[]){                                                            \
    90,                                                                \
     SILENCIO,B,  SILENCIO,N,  SILENCIO,C,  MI,C,                      \
     MI2,NP,  RE2,C,  DO2,C,  SI,C,  LA,N,                             \
     LA,C,  DO2,C,  SI,C,  LA,C,  SOL,C,  LA,C,  MI,C,  RE,C,          \
     MI,BP,  SILENCIO,C,  MI,C,                                        \
     MI2,NP,  RE2,C,  DO2,C, SI,C,  LA,C,  MI,C,                       \
     LA,C,  DO2,C,  SI,C,  LA,C, SOL,C,  LA,C,  MI,C, RE,C,            \
     MI,R,                                                             \
    SMH_Song_END                                                       \
   },                                                                  \
   (int[]){                                                            \
    90,                                                                \
     RE2,C,  RE2,C,  RE2,C,  DO2,C,  FA,N,  FA,C,  LA,C,               \
     MI2,N,  RE2,C,  DO2,C,  FA,N,  LA,C,  DO2,C,                      \
     SI,C,  SI,SC,  LA,SC,  SOL,N,  SILENCIO,C,  SOL,C,  LA,C, SOL,C,  \
     LA,R,                                                             \
    SMH_Song_END                                                       \
   },                                                                  \
   (int[]){                                                                                          \
    90,                                                                                              \
     MI,SC,  LA,SC,  SILENCIO,SC,  LA,SC,  LA,N,  MI,SC,  LA,SC,  SILENCIO,SC,  LA,SC,  LA,N,        \
     SOL,SC,  DO2,SC,  SILENCIO,SC,  DO2,SC,  DO2,N,  SOL,SC,  DO2,SC,  SILENCIO,SC,  DO2,SC,  DO2,N,\
     MI,SC,  LA,SC,  SILENCIO,SC,  LA,SC,  LA,N,  MI,SC,  LA,SC,  SILENCIO,SC,  LA,SC,  LA,N,        \
     SOL,SC,  DO2,SC,  DO2,SC,  DO2,SC,  DO2,N,  SOL,SC,  DO2,SC,  DO2,SC,  DO2,SC,  DO2,N,          \
    SMH_Song_END                                                                                     \
   }                                                                                                 \
  }
