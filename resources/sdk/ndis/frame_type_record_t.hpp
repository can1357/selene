#pragma once
#include <sdkgen/support_library.hpp>
#include "frame_type_and_open_t.hpp"

#include "magic/frame_type_record_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_FRAME_TYPE_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct frame_type_record_t    
    {                             
        using entry_t = sdk::array<struct ndis::frame_type_and_open_t, 16>;            
                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t num_entries;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumEntries
        _m01 entry_t  entry;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Entry
                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_FRAME_TYPE_RECORD.$", 0x108, true, 0x4e000818d5827acc );            
        SDK_FIXED_SIZE( frame_type_record_t, 0x108 );            
    };                            
};
#include "magic/frame_type_record_t.end.hpp"
SDK_VERIFY( struct ndis::frame_type_record_t, 0x108 );
