#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_read_capacity_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_READ_CAPACITY]
    // => WDK 10 (NV)
    //
    struct storage_read_capacity_t     
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t version;           //{ +0x0000    } | .Version
        _m01 uint32_t size;              //{ +0x0004    } | .Size
        _m02 uint32_t block_length;      //{ +0x0008    } | .BlockLength
        _m03 int64_t  number_of_blocks;  //{ +0x0010    } | .NumberOfBlocks
        _m04 int64_t  disk_length;       //{ +0x0018    } | .DiskLength
                                       
        SDK_NONVOL_PROPERTIES( "_STORAGE_READ_CAPACITY.$", 0x0, false, 0x19c4735cc29ef25b );                 
        SDK_FIXED_SIZE( storage_read_capacity_t, 0x20 );                 
    };                                 
};
#include "magic/storage_read_capacity_t.end.hpp"
SDK_VERIFY( struct nt::storage_read_capacity_t, 0x20 );
