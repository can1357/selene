#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NetSetupStoreType]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class net_setup_store_type_t : int32_t
    {                                          
        system =   0x0,                          // Windows 10 v2004, Windows 10 v20H2
        _mutable = 0x1,                          // Windows 10 v2004, Windows 10 v20H2
    };                                         
};
