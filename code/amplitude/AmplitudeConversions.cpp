#include "AmplitudeConversions.h"
#include <cmath>

using namespace std;

float AmplitudeConverter::fromAmplitudeToDb() {
//    return 20.f * log10(amplitude);
    return round(20.0f * log10(amplitude));
}

float AmplitudeConverter::fromDbToAmplitude() {
    return pow(10.0f, db /20.0f);
}