#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/architecture_entry_t.start.hpp"
namespace image
{
    // [struct _ImageArchitectureEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct architecture_entry_t      
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t fixup_inst_rva;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FixupInstRVA
        _m01 uint32_t new_inst;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NewInst
                                     
        SDK_MAGIC_PROPERTIES( "_ImageArchitectureEntry.$", 0x8, true, 0x70e4e9c8ff7b33c8 );               
        SDK_FIXED_SIZE( architecture_entry_t, 0x8 );               
    };                               
};
#include "magic/architecture_entry_t.end.hpp"
SDK_VERIFY( struct image::architecture_entry_t, 0x8 );
