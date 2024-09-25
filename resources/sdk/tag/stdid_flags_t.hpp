#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSTDID_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stdid_flags_t : int32_t                        
    {                                                         
        server =                                 0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client =                                 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        freethreaded =                           0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        haveid =                                 0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignoreid =                               0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aggregated =                             0x10,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        indestructor =                           0x100,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lockedinmem =                            0x200,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        defhandler =                             0x400,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aggid =                                  0x800,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stcmrshl =                               0x1000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removedfromidobj =                       0x2000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =                                 0x4000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ftm =                                    0x8000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noiec =                                  0x10000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fastrundown =                            0x20000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        agile_oop_proxy =                        0x40000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suppress_wake_set =                      0x80000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implements_iagileobject =                0x100000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow_asta_to_asta_deadlock_risk =       0x200000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        do_not_disturb_set =                     0x400000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_async_remoting_for_winrt_async = 0x800000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //all =                                  0xffff1f,      // Windows 10 v1607
        fake_oid_for_internal_proxy =            0x1000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown_object_of_interest =             0x2000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_fastrundown =                    0x4000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =                                    0x7ffff1f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
