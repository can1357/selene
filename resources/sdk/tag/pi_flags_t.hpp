#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum _tagPI_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pi_flags_t : int32_t          
    {                                        
        pi_parse_url =            0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_filter_mode =          0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_force_async =          0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_use_workerthread =     0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_mimeverification =     0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_clsidlookup =          0x20,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_dataprogress =         0x40,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_synchronous =          0x80,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_apartmentthreaded =    0x100,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_classinstall =         0x200,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_passonbindctx =        0x2000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_loadappdirect =        0x4000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_nomimehandler =        0x8000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pd_force_switch =         0x10000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi_preferdefaulthandler = 0x20000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
