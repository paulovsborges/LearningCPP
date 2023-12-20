
class AmplitudeConverter {

public:

    float db = 0.f;
    float amplitude = 0.f;

    ~AmplitudeConverter();

    AmplitudeConverter(float db, float amplitude) {
        this->db = db;
        this->amplitude = amplitude;
    };

    float fromDbToAmplitude();

    float fromAmplitudeToDb();
};