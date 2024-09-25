#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOLETLSFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class oletlsflags_t : int32_t            
    {                                             
        localtid =                  0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uuidinitialized =           0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inthreaddetach =            0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        channelthreadinitialzed =   0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wowthread =                 0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        threaduninitializing =      0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_ole1dde =           0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        apartmentthreaded =         0x80,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multithreaded =             0x100,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        impersonating =             0x200,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_eventlogger =       0x400,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inneutralapt =              0x800,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatchthread =            0x1000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hostthread =                0x2000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allowcoinit =               0x4000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pendinguninit =             0x8000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firstmtainit =              0x10000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firstntainit =              0x20000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aptinitializing =           0x40000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uimsgsinmodalloop =         0x80000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        marshaling_error_object =   0x100000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        winrt_initialize =          0x200000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        application_sta =           0x400000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_shutdown_callbacks =     0x800000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pointer_input_blocked =     0x1000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_activation_filter =      0x2000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        astatoastaexempt_quirk =    0x4000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        astatoastaexempt_proxy =    0x8000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        astatoastaexempt_indoubt =  0x10000000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        detected_user_initialized = 0x20000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bridge_sta =                0x40000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        nainitializing =            0x80000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
