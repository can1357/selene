#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualization_record_t.start.hpp"
namespace win
{
    // [struct _VIRTUALIZATION_RECORD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct virtualization_record_t       
    {                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t vbs_enabled;          //{ +0x0000    +0x0000    +0x0000    } | .VbsEnabled
        _m01 uint8_t hvci_enabled;         //{ +0x0001    +0x0001    +0x0001    } | .HvciEnabled
        _m02 uint8_t hyper_visor_enabled;  //{ +0x0002    +0x0002    +0x0002    } | .HyperVisorEnabled
                                         
        SDK_MAGIC_PROPERTIES( "_VIRTUALIZATION_RECORD.$", 0x4, true, 0x6b4ee3f8e698c5c8 );                    
        SDK_FIXED_SIZE( virtualization_record_t, 0x4 );                    
    };                                   
};
#include "magic/virtualization_record_t.end.hpp"
SDK_VERIFY( struct win::virtualization_record_t, 0x4 );
