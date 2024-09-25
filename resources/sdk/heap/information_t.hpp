#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct information_t                              
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint64_t address;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint32_t mode;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Mode
        _m02 uint64_t reserve_size;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReserveSize
        _m03 uint64_t commit_size;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommitSize
        _m04 uint64_t first_region_information_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FirstRegionInformationOffset
        _m05 uint64_t next_heap_information_offset;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NextHeapInformationOffset
                                                      
        SDK_MAGIC_PROPERTIES( "_HEAP_INFORMATION.$", 0x30, true, 0x7d41be7985fc361b );                                
        SDK_FIXED_SIZE( information_t, 0x30 );                                
    };                                                
};
#include "magic/information_t.end.hpp"
SDK_VERIFY( struct heap::information_t, 0x30 );
