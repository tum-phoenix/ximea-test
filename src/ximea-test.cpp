#include <cstdlib>
#include <m3api/xiApi.h>

int main() {
    HANDLE xiH;
    XI_IMG image;

    if (xiOpenDevice(0, &xiH) != XI_OK) {
        return EXIT_FAILURE;
    }

    xiSetParamInt(xiH, XI_PRM_EXPOSURE, 10000);
    xiSetParamInt(xiH, XI_PRM_GAIN, 2);
    xiSetParamInt(xiH, XI_PRM_IMAGE_DATA_FORMAT, XI_MONO8);
    xiSetParamInt(xiH, XI_PRM_AUTO_WB, 1);
    xiSetParamInt(xiH, XI_PRM_FRAMERATE, 100);

    if (xiStartAcquisition(xiH) != XI_OK) {
        return EXIT_FAILURE;
    }

    if (xiGetImage(xiH, 5000, &image) != XI_OK) {
        return EXIT_FAILURE;
    }

    if (xiStopAcquisition(xiH) != XI_OK) {
        return EXIT_FAILURE;
    }

    if (xiCloseDevice(xiH) != XI_OK) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
