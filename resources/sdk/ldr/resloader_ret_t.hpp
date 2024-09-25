#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resloader_ret_t.start.hpp"
namespace ldr
{
    // [struct _LDR_RESLOADER_RET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resloader_ret_t       
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                       
        _m00 void* module;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Module
        _m01 void* data_entry;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataEntry
        _m02 void* target_module;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetModule
                                 
        SDK_MAGIC_PROPERTIES( "_LDR_RESLOADER_RET.$", 0x18, true, 0x92f979b888b6778e );              
        SDK_FIXED_SIZE( resloader_ret_t, 0x18 );              
    };                           
};
#include "magic/resloader_ret_t.end.hpp"
SDK_VERIFY( struct ldr::resloader_ret_t, 0x18 );
