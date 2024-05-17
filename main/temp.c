
/* The original JSON string is converted to hex array because C99 requires support only 4096 character long strings.

   lvgl/scripts/tohex.py is sued to convert a json file to a hex array. E.g.
   ./filetohex.py my_lottie.json > output.txt

   If your compiler support very long strings you can do
   const char * my_lottie = "JSON data here";
   But be sure to replace all " characters with \".


*/
#include "lvgl.h"

const unsigned char temp[] = {

};
const size_t temp_size = sizeof(temp);