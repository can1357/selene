#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_virtualization_information_t.start.hpp"
namespace win
{
    // [struct _KEY_VIRTUALIZATION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_virtualization_information_t   
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                    
        _m00 uint1_t virtualization_candidate;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .VirtualizationCandidate
        _m01 uint1_t virtualization_enabled;    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .VirtualizationEnabled
        _m02 uint1_t virtual_target;            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .VirtualTarget
        _m03 uint1_t virtual_store;             //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .VirtualStore
        _m04 uint1_t virtual_source;            //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .VirtualSource
                                              
        SDK_NONVOL_PROPERTIES( "_KEY_VIRTUALIZATION_INFORMATION.$", 0x4, true, 0xac25519fca81030d );                         
        SDK_FIXED_SIZE( key_virtualization_information_t, 0x4 );                         
    };                                        
};
#include "magic/key_virtualization_information_t.end.hpp"
SDK_VERIFY( struct win::key_virtualization_information_t, 0x4 );
