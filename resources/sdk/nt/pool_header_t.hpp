#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_header_t.start.hpp"
namespace nt
{
    struct eprocess_t;

    // [struct _POOL_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_header_t                                       
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                     
        _m00 uint8_t                previous_size;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PreviousSize
        _m01 uint8_t                pool_index;                  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .PoolIndex
        _m02 uint8_t                block_size;                  //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .BlockSize
        _m03 uint8_t                pool_type;                   //{ +0x0002@8  +0x0002@8  +0x0002@8  +0x0002@8  } | .PoolType
        _m04 uint32_t               ulong1;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ulong1
        _m05 uint32_t               pool_tag;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PoolTag
        _m06 struct nt::eprocess_t* process_billed;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessBilled
        _m07 uint16_t               allocator_back_trace_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatorBackTraceIndex
        _m08 uint16_t               pool_tag_hash;               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .PoolTagHash
                                                               
        SDK_MAGIC_PROPERTIES( "_POOL_HEADER.$", 0x10, true, 0x2117740af4c021f9 );                           
        SDK_FIXED_SIZE( pool_header_t, 0x10 );                           
    };                                                         
};
#include "magic/pool_header_t.end.hpp"
SDK_VERIFY( struct nt::pool_header_t, 0x10 );
