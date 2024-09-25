#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_FaceClientEnrollmentExperience]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_face_client_enrollment_experience_t : uint8_t
    {                                                               
        none =      0x0,                                              // Windows 10 v2004, Windows 10 v20H2
        phase_one = 0x1,                                              // Windows 10 v2004, Windows 10 v20H2
        phase_two = 0x2,                                              // Windows 10 v2004, Windows 10 v20H2
    };                                                              
};
