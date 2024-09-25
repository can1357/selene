#pragma once
#include <sdkgen/support_library.hpp>
#include "private_cache_map_flags_t.hpp"

#include "magic/private_cache_map_t.start.hpp"
namespace nt
{
    struct file_object_t;

    // [struct _PRIVATE_CACHE_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct private_cache_map_t                                                      
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                          
        _m00 int16_t                              node_type_code;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 struct nt::private_cache_map_flags_t flags;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m02 uint32_t                             read_ahead_mask;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReadAheadMask
        _m03 struct nt::file_object_t*            file_object;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileObject
        _m04 int64_t                              file_offset1;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FileOffset1
        _m05 int64_t                              beyond_last_byte1;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BeyondLastByte1
        _m06 int64_t                              file_offset2;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FileOffset2
        _m07 int64_t                              beyond_last_byte2;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BeyondLastByte2
        _m08 uint32_t                             sequential_read_count;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SequentialReadCount
        _m09 uint32_t                             read_ahead_length;                  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ReadAheadLength
        _m10 int64_t                              read_ahead_offset;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReadAheadOffset
        _m11 int64_t                              read_ahead_beyond_last_byte;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ReadAheadBeyondLastByte
        _m12 uint64_t                             prev_read_ahead_beyond_last_byte;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PrevReadAheadBeyondLastByte
        _m13 uint64_t                             read_ahead_spin_lock;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ReadAheadSpinLock
        _m14 uint32_t                             pipelined_read_ahead_request_size;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .PipelinedReadAheadRequestSize
        _m15 uint32_t                             read_ahead_growth;                  //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .ReadAheadGrowth
        _m16 nt::list_entry_t                     private_links;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PrivateLinks
        _m17 void*                                read_ahead_work_item;               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ReadAheadWorkItem
                                                                                    
        SDK_MAGIC_PROPERTIES( "_PRIVATE_CACHE_MAP.$", 0x78, true, 0xf21f07ffd026b116 );                                  
        SDK_FIXED_SIZE( private_cache_map_t, 0x78 );                                  
    };                                                                              
};
#include "magic/private_cache_map_t.end.hpp"
SDK_VERIFY( struct nt::private_cache_map_t, 0x78 );
