#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum __MIDL_IBindStatusCallback_0003]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class midl_i_bind_status_callback_0003_t : int32_t
    {                                                      
        asynchronous =             0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asyncstorage =             0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noprogressiverendering =   0x4,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offlineoperation =         0x8,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getnewestversion =         0x10,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nowritecache =             0x20,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        needfile =                 0x40,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pulldata =                 0x80,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignoresecurityproblem =    0x100,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resynchronize =            0x200,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hyperlink =                0x400,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_ui =                    0x800,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        silentoperation =          0x1000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pragma_no_cache =          0x2000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getclassobject =           0x4000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_1 =               0x8000,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        free_threaded =            0x10000,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        direct_read =              0x20000,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forms_submit =             0x40000,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getfromcache_if_net_fail = 0x80000,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fromurlmon =               0x100000,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fwd_back =                 0x200000,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        preferdefaulthandler =     0x400000,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enforcerestricted =        0x800000,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_3 =               0x1000000,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_4 =               0x2000000,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_5 =               0x4000000,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_6 =               0x8000000,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_8 =               0x20000000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_7 =               0x40000000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_2 =               0x80000000,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
