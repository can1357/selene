#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_entry_t.start.hpp"
namespace cls
{
    // [struct _CLS_WRITE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct write_entry_t          
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    buffer;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint32_t byte_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ByteLength
                                  
        SDK_NONVOL_PROPERTIES( "_CLS_WRITE_ENTRY.$", 0x10, true, 0xa910145ddb87f9f1 );            
        SDK_FIXED_SIZE( write_entry_t, 0x10 );            
    };                            
};
#include "magic/write_entry_t.end.hpp"
SDK_VERIFY( struct cls::write_entry_t, 0x10 );
