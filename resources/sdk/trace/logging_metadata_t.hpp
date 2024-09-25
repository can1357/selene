#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logging_metadata_t.start.hpp"
namespace trace
{
    // [struct _TraceLoggingMetadata_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logging_metadata_t   
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t size;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint8_t  version;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Version
        _m03 uint8_t  flags;      //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .Flags
        _m04 uint64_t magic;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Magic
                                
        SDK_MAGIC_PROPERTIES( "_TraceLoggingMetadata_t.$", 0x10, true, 0x533bf9604bd689cf );          
        SDK_FIXED_SIZE( logging_metadata_t, 0x10 );          
    };                          
};
#include "magic/logging_metadata_t.end.hpp"
SDK_VERIFY( struct trace::logging_metadata_t, 0x10 );
