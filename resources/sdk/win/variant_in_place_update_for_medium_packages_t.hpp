#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_InPlaceUpdateForMediumPackages]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class variant_in_place_update_for_medium_packages_t : uint8_t
    {                                                                 
        none =                                0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_place_update_for_medium_packages = 0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                
};
