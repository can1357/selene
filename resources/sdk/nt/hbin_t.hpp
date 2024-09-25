#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hbin_t.start.hpp"
namespace nt
{
    // [struct _HBIN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct hbin_t                 
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2            
        //                        
        _m00 uint32_t signature;    //{ +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t file_offset;  //{ +0x0004    +0x0004    +0x0004    } | .FileOffset
        _m02 uint32_t size;         //{ +0x0008    +0x0008    +0x0008    } | .Size
        _m03 int64_t  time_stamp;   //{ +0x0014    +0x0014    +0x0014    } | .TimeStamp
                                  
        SDK_MAGIC_PROPERTIES( "_HBIN.$", 0x20, true, 0xb26c9975ec9c5653 );            
        SDK_FIXED_SIZE( hbin_t, 0x20 );            
    };                            
};
#include "magic/hbin_t.end.hpp"
SDK_VERIFY( struct nt::hbin_t, 0x20 );
