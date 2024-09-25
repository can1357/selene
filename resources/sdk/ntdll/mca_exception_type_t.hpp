#pragma once
#include <sdkgen/support_library.hpp>

namespace ntdll
{
    // [enum MCA_EXCEPTION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mca_exception_type_t : int32_t
    {                                        
        mce_record = 0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mca_record = 0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
