#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum GLOBALOPT_SERVICE_REFCOUNT_ENFORCEMENT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class globalopt_service_refcount_enforcement_t : int32_t
    {                                                            
        _default =               0x0,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disallowglobalrefcount = 0x1,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        valuecount =             0x2,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                           
};
