#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorMethodImpl]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_method_impl_t : int32_t
    {                                     
        il =                   0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        managed =              0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        native =               0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        optil =                0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        code_type_mask =       0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        runtime =              0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        managed_mask =         0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmanaged =            0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_inlining =          0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        forward_ref =          0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _synchronized =        0x20,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_optimization =      0x40,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        preserve_sig =         0x80,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aggressive_inlining =  0x100,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_mitigations = 0x400,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal_call =        0x1000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //user_mask =          0x11fc,      // Windows 10 v1607
        user_mask =            0x15fc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_method_impl_val =  0xffff,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
