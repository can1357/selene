#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eisa_memory_type_t.start.hpp"
namespace win
{
    // [struct _EISA_MEMORY_TYPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eisa_memory_type_t     
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 uint1_t read_write;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ReadWrite
        _m01 uint1_t cached;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Cached
        _m02 uint2_t type;          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Type
        _m03 uint1_t shared;        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Shared
        _m04 uint1_t more_entries;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .MoreEntries
                                  
        SDK_NONVOL_PROPERTIES( "_EISA_MEMORY_TYPE.$", 0x1, true, 0xaa88352beeba6aab );             
        SDK_FIXED_SIZE( eisa_memory_type_t, 0x1 );             
    };                            
};
#include "magic/eisa_memory_type_t.end.hpp"
SDK_VERIFY( struct win::eisa_memory_type_t, 0x1 );
