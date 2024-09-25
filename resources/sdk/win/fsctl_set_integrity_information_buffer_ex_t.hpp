#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_set_integrity_information_buffer_ex_t.start.hpp"
namespace win
{
    // [struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_set_integrity_information_buffer_ex_t
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint8_t  enable_integrity;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EnableIntegrity
        _m01 uint8_t  keep_integrity_state_unchanged;   //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .KeepIntegrityStateUnchanged
        _m02 uint32_t flags;                            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 uint8_t  version;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Version
                                                      
        SDK_NONVOL_PROPERTIES( "_FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX.$", 0x10, true, 0xf30858d88dfb863e );                               
        SDK_FIXED_SIZE( fsctl_set_integrity_information_buffer_ex_t, 0x10 );                               
    };                                                
};
#include "magic/fsctl_set_integrity_information_buffer_ex_t.end.hpp"
SDK_VERIFY( struct win::fsctl_set_integrity_information_buffer_ex_t, 0x10 );
