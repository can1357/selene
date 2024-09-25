#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_get_media_parameters_t.start.hpp"
namespace win
{
    // [struct _TAPE_GET_MEDIA_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_get_media_parameters_t
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  capacity;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Capacity
        _m01 int64_t  remaining;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Remaining
        _m02 uint32_t block_size;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BlockSize
        _m03 uint32_t partition_count;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .PartitionCount
        _m04 uint8_t  write_protected;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .WriteProtected
                                      
        SDK_NONVOL_PROPERTIES( "_TAPE_GET_MEDIA_PARAMETERS.$", 0x20, true, 0x62b81c640a2db3a );                
        SDK_FIXED_SIZE( tape_get_media_parameters_t, 0x20 );                
    };                                
};
#include "magic/tape_get_media_parameters_t.end.hpp"
SDK_VERIFY( struct win::tape_get_media_parameters_t, 0x20 );
