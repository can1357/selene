#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_pointers_version_t.start.hpp"
namespace nt
{
    // [struct _DUMP_POINTERS_VERSION]
    // => WDK 10 (NV)
    //
    struct dump_pointers_version_t
    {                             
        // WDK 10             
        //                    
        _m00 uint32_t version;      //{ +0x0000    } | .Version
        _m01 uint32_t size;         //{ +0x0004    } | .Size
                                  
        SDK_NONVOL_PROPERTIES( "_DUMP_POINTERS_VERSION.$", 0x0, false, 0xecca225554c4b870 );        
        SDK_FIXED_SIZE( dump_pointers_version_t, 0x8 );        
    };                            
};
#include "magic/dump_pointers_version_t.end.hpp"
SDK_VERIFY( struct nt::dump_pointers_version_t, 0x8 );
