#pragma once
#include <sdkgen/support_library.hpp>
#include "extended_entry_t.hpp"
#include "unpacked_entry_t.hpp"

#include "magic/entry_t.start.hpp"
namespace heap
{
    // [struct _HEAP_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entry_t                                                     
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                             
        _m00 struct heap::unpacked_entry_t unpacked_entry;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UnpackedEntry
        _m01 void*                         previous_block_private_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreviousBlockPrivateData
        _m02 uint16_t                      size;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m03 uint8_t                       flags;                        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Flags
        _m04 uint8_t                       small_tag_index;              //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .SmallTagIndex
        _m05 uint32_t                      sub_segment_code;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubSegmentCode
        _m06 uint16_t                      previous_size;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PreviousSize
        _m07 uint8_t                       segment_offset;               //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .SegmentOffset
        _m08 uint8_t                       lfh_flags;                    //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .LFHFlags
        _m09 uint8_t                       unused_bytes;                 //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .UnusedBytes
        _m10 uint64_t                      compact_header;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompactHeader
        _m11 struct heap::extended_entry_t extended_entry;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtendedEntry
        _m12 uint16_t                      function_index;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FunctionIndex
        _m13 uint16_t                      context_value;                //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ContextValue
        _m14 uint32_t                      interceptor_value;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterceptorValue
        _m15 uint16_t                      unused_bytes_length;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UnusedBytesLength
        _m16 uint8_t                       entry_offset;                 //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .EntryOffset
        _m17 uint8_t                       extended_block_signature;     //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .ExtendedBlockSignature
        _m18 void*                         reserved_for_alignment;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReservedForAlignment
        _m19 uint32_t                      code1;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Code1
        _m20 uint16_t                      code2;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Code2
        _m21 uint8_t                       code3;                        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Code3
        _m22 uint8_t                       code4;                        //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Code4
        _m23 uint32_t                      code234;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Code234
        _m24 uint64_t                      agregate_code;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AgregateCode
                                                                       
        SDK_MAGIC_PROPERTIES( "_HEAP_ENTRY.$", 0x10, true, 0xb23a23ff25321a67 );                            
        SDK_FIXED_SIZE( entry_t, 0x10 );                               
    };                                                                 
};
#include "magic/entry_t.end.hpp"
SDK_VERIFY( struct heap::entry_t, 0x10 );
