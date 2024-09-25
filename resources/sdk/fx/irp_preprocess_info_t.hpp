#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/irp_preprocess_info_t.start.hpp"
namespace fx
{
    // [struct FxIrpPreprocessInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_preprocess_info_t              
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::list_entry_t list_entry;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint8_t          class_extension;  //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | .ClassExtension
                                              
        SDK_MAGIC_PROPERTIES( "FxIrpPreprocessInfo.$", 0x2b8, true, 0x54a6fa71f52b22f5 );                
        SDK_FIXED_SIZE( irp_preprocess_info_t, 0x2b8 );                
    };                                        
};
#include "magic/irp_preprocess_info_t.end.hpp"
SDK_VERIFY( struct fx::irp_preprocess_info_t, 0x2b8 );
