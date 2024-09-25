#pragma once
#include <sdkgen/support_library.hpp>

namespace cm
{
    // [enum _CM_DIRTY_VECTOR_OPERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dirty_vector_operation_t : int32_t
    {                                            
        vector_modified =    0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data_capture_start = 0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        data_capture_end =   0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
