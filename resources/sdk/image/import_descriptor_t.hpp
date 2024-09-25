#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/import_descriptor_t.start.hpp"
namespace image
{
    // [struct _IMAGE_IMPORT_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct import_descriptor_t             
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t characteristics;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Characteristics
        _m01 uint32_t original_first_thunk;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OriginalFirstThunk
        _m02 uint32_t time_date_stamp;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeDateStamp
        _m03 uint32_t forwarder_chain;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ForwarderChain
        _m04 uint32_t name;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Name
        _m05 uint32_t first_thunk;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FirstThunk
                                           
        SDK_MAGIC_PROPERTIES( "_IMAGE_IMPORT_DESCRIPTOR.$", 0x14, true, 0xaadea7b99714b798 );                     
        SDK_FIXED_SIZE( import_descriptor_t, 0x14 );                     
    };                                     
};
#include "magic/import_descriptor_t.end.hpp"
SDK_VERIFY( struct image::import_descriptor_t, 0x14 );
