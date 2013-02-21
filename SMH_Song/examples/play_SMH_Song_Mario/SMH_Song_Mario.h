/*
 * AUTHOR:    Samuel M.H. <samuel.mh@gmail.com>
 * LAST REV:  10-May-2012
 * DESCRIPTION:
 *   Arduino C code constant that represents the
 *    Super Mario Bros (1985) Overworld/Main Theme song.
 *   Original composition for the Nintendo Entertainment System by Koji Kondo.
 *   Accurate transcription & optimized fingering for the piano by Joseph Karam.
 *
 * LICENSE:
 *  I'm NOT the author of the song neither the owner.
 *  I'm only the writter of this document that I release under
 *   the following license:
 *   <GPL V3 <http://www.gnu.org/licenses/gpl.html>
*/

#define SMH_Song_Mario                                                \
  (int *[]){                                                          \
   (int[]) {                                                          \
    0,                                                                \
    1,1, 2,3,2,4, 2,3,2,4, 5, 0,1,1, 6,7,6,8,  6,7,6,8, 5, 0, 6,7,6,8,\
    1,1, 2,3,2,4, 2,3,2,4, 5, 0,1,1, 6,7,6,8,  6,7,6,8, 5, 0, 6,7,6,8,\
    SMH_Song_END,                                                     \
   },                                                                 \
   (int[]) {                                                          \
     37,                                                              \
      MI2,N,  MI2,N,  SILENCIO,N,  MI2,N,     \
      SILENCIO,N,  DO2,N,  MI2,N,  SILENCIO,N,\
      SOL2,N,  SILENCIO,N,  SILENCIO,B,       \
      SOL,N,  SILENCIO,N,  SILENCIO,B,        \
     SMH_Song_END                             \
   },                                         \
   (int[]) {                                  \
     37,                                      \
      DO2,N, SILENCIO,B,  SOL,N,              \
      SILENCIO,B,  MI,N,  SILENCIO,N,         \
      SILENCIO,N,  LA,N,  SILENCIO,N,  SI,N,  \
      SILENCIO,N,  LAS,N,  LA,N,  SILENCIO,N, \
                                              \
      SOL,B,  MI2,B,  SOL2,B,                 \
      LA2,N,  SILENCIO,N,  FA2,N,  SOL2,N,    \
      SILENCIO,N,  MI2,N,  SILENCIO,N,  DO2,N,\
      RE2,N,  SI,N,  SILENCIO,B,              \
     SMH_Song_END                             \
   },                                         \
   (int[]) {                                  \
     37,                                      \
      DO,N, SILENCIO,N,  SOL2,N,  FAS2,N,     \
      FA2,N,  RES2,N,  SILENCIO,N,  MI2,N,    \
      SILENCIO,N,  SOLS,N,  LA,N,  DO2,N,     \
      SILENCIO,N,  LA,N,  DO2,N,  RE2,N,      \
     SMH_Song_END                             \
   },                                         \
   (int[]) {                                  \
    37,                                       \
      DO,N, SILENCIO,N,  SOL2,N,  FAS2,N,     \
      FA2,N,  RES2,N,  SILENCIO,N, MI2,N,     \
      SILENCIO,N,  DO3,N,  SILENCIO,N, DO3,N, \
      DO3,N, SILENCIO,N, SOL,N, SILENCIO,N,   \
     SMH_Song_END                             \
   },                                         \
   (int[]) {                                  \
     37,                                      \
      DO,N, SILENCIO,N,  RES2,N,  SILENCIO,N, \
      SILENCIO,N,  RE2,N,  SILENCIO,B,        \
      DO2,N,  SILENCIO,B, SOL,N,              \
      SOL,N, SILENCIO,N, DO,N, SILENCIO,N,    \
     SMH_Song_END                             \
   },                                         \
   (int[]) {                                  \
     37,                                      \
      DO2,N,  DO2,N,  SILENCIO,N,  DO2,N,     \
      SILENCIO,N,  DO2,N,  RE2,N,  SILENCIO,N,\
      MI2,N,  DO2,N,  SILENCIO,N,  LA,N,      \
      SOL,N,  SILENCIO,N, SOL0,N,  SILENCIO,N,\
                                              \
      DO2,N,  DO2,N,  SILENCIO,N,  DO2,N,     \
      SILENCIO,N,  DO2,N,  RE2,N,  MI2,N,     \
      SOL,N,  SILENCIO,B,  DO,N,              \
      SILENCIO,B,  SOL0,N,  SILENCIO,N,       \
                                              \
      DO2,N,  DO2,N,  SILENCIO,N,  DO2,N,     \
      SILENCIO,N,  DO2,N,  RE2,N,  SILENCIO,N,\
      MI2,N,  DO2,N,  SILENCIO,N,  LA,N,      \
      SOL,N,  SILENCIO,N, SOL0,N,  SILENCIO,N,\
     SMH_Song_END                             \
    },                                        \
    (int[]) {                                 \
     37,                                      \
      MI2,N,  DO2,N,  SILENCIO,N,  SOL,N,     \
      SILENCIO,BP,  SOLS,N,  SILENCIO,N,      \
      LA,N,  FA2,N,  SILENCIO,N,  FA2,N,      \
      LA,N,  SILENCIO,BP,                     \
     SMH_Song_END                             \
    },                                        \
    (int[]) {                                 \
     37,                                      \
      SI,N,  LA2,NP,  LA2,N,                  \
      LA2,N,  SOL2,NP,  FA2,N,                \
      MI2,N,  DO2,N,  SILENCIO,N,  LA,N,      \
      SOL,N,  SILENCIO,BP,                    \
     SMH_Song_END                             \
    },                                        \
    (int[]) {                                 \
     37,                                      \
      SOL,N,  FA2,N,  SILENCIO,N,  FA2,N,     \
      FA2,N,  MI2,NP,  RE2,N,                 \
      DO2,N,  MI,N,  SILENCIO,N,  MI,N,       \
      DO,N,  SILENCIO,BP,                     \
     SMH_Song_END                             \
    },                                        \
  }
