#pragma once

class Earth{
public:

    inline double G_EarthParam() noexcept{
        const double G_EARTH_PARAM = 398600.4415;
        return G_EARTH_PARAM;
    }

    inline double EarthR() noexcept {
        return 0;
    }
};