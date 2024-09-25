#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unpacked_entry_t.start.hpp"
namespace heap
{
    // [struct _HEAP_UNPACKED_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unpacked_entry_t                       
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 void*    previous_block_private_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreviousBlockPrivateData
        _m01 uint16_t size;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint8_t  flags;                        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Flags
        _m03 uint8_t  small_tag_index;              //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .SmallTagIndex
        _m04 uint32_t sub_segment_code;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubSegmentCode
        _m05 uint16_t previous_size;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PreviousSize
        _m06 uint8_t  segment_offset;               //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .SegmentOffset
        _m07 uint8_t  lfh_flags;                    //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .LFHFlags
        _m08 uint8_t  unused_bytes;                 //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .UnusedBytes
        _m09 uint64_t compact_header;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompactHeader
                                                  
        SDK_MAGIC_PROPERTIES( "_HEAP_UNPACKED_ENTRY.$", 0x10, true, 0xff70768545ec2e73 );                            
        SDK_FIXED_SIZE( unpacked_entry_t, 0x10 );                            
    };                                            
};
#include "magic/unpacked_entry_t.end.hpp"
SDK_VERIFY( struct heap::unpacked_entry_t, 0x10 );
