#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSMFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class smflags_t : int32_t                             
    {                                                          
        client_side =                            0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pendingdisconnect =                      0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        registeredoid =                          0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disconnected =                           0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firstmarshal =                           0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handler =                                0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        weakclient =                             0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignorerundown =                          0x80,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clientmarshaled =                        0x100,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noping =                                 0x200,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        triedtoconnect =                         0x400,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cstaticmarshal =                         0x800,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        useaggstdmarshal =                       0x1000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =                                 0x2000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deactivated =                            0x4000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ftm =                                    0x8000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clientpolicyset =                        0x10000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        appdisconnect =                          0x20000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sysdisconnect =                          0x40000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundowndisconnect =                      0x80000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cleanedup =                              0x100000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lightna =                                0x200000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fastrundown =                            0x400000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        implements_iagileobject =                0x800000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow_asta_to_asta_deadlock_risk =       0x1000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        safe_to_qi_during_disconnect =           0x2000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        checksuspend =                           0x4000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_async_remoting_for_winrt_async = 0x8000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        proxy_to_inproc_object =                 0x10000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        made_winrt_async_call =                  0x20000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //all =                                  0x3fffffff,     // Windows 10 v1607
        rundown_object_of_interest =             0x40000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        all =                                    0x7fffffff,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
