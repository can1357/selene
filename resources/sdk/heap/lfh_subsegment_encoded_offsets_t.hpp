#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_subsegment_encoded_offsets_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_subsegment_encoded_offsets_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint16_t block_size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BlockSize
        _m01 uint16_t first_block_offset;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .FirstBlockOffset
        _m02 uint32_t encoded_data;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EncodedData
                                           
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS.$", 0x4, true, 0x76c5d41e48c59e66 );                   
        SDK_FIXED_SIZE( lfh_subsegment_encoded_offsets_t, 0x4 );                   
    };                                     
};
#include "magic/lfh_subsegment_encoded_offsets_t.end.hpp"
SDK_VERIFY( struct heap::lfh_subsegment_encoded_offsets_t, 0x4 );
