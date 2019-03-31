/*
 * Date:        31.03.2019
 * Author:      alsa64
 * Description: Get the next bigger or smaller width and length of a image, for using ctp by Deorder.
 * License:     GNU General Public License v3.0
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    // not enough arguments
    if (argc < 4) {
        fprintf(stderr, "[Error] Not enough Arguments\n");
        return 1;
    }
    // unsupported first argument
    if (argv[1][0] != '-' && (argv[1][1] != 'r' || argv[1][1] != 'e')) {
        fprintf(stderr, "[Error] Bad Argument, should be -e or -r\n");
        return 1;
    }
    //convert the arguments to integer
    int targetTitleSize = atoi(argv[2]);
    int width           = atoi(argv[3]);
    int length          = atoi(argv[4]);
    // get the next bigger supported width and length
    if (argv[1][1] == 'e') {
        if (width % targetTitleSize == 0 && width % targetTitleSize == 0) {
            printf("-1\n"); // both are fine
            return 0;
        }
        if (width % targetTitleSize == 0) {
            printf("-2\n"); // width is fine
        } else {
            printf("%i\n", ((width / targetTitleSize) + 1 ) * targetTitleSize); // print new target width
        }
        if (length % targetTitleSize == 0) {
            printf("-3\n"); // length is fine
        } else {
            printf("%i\n", ((length / targetTitleSize) + 1 ) * targetTitleSize); // print new target length
        }
        return 0;
    }
    // get the next smaller supported width and length
    if (argv[1][1] == 'r') {
        if (width % targetTitleSize == 0 && width % targetTitleSize == 0) {
            printf("-1\n"); // both are fine
            return 0;
        }
        if (width % targetTitleSize == 0) {
            printf("-2\n"); // width is fine
        } else {
            printf("%i\n", (width / targetTitleSize) * targetTitleSize); // print new target width
        }
        if (length % targetTitleSize == 0) {
            printf("-3\n"); // length is fine
        } else {
            printf("%i\n", (length / targetTitleSize) * targetTitleSize); // print new target length
        }
        return 0;
    }
    return 0;
}