#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/block_information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_BLOCK_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct block_information_t                      
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint64_t address;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint32_t flags;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint64_t data_size;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataSize
        _m03 uint64_t overhead_size;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OverheadSize
        _m04 uint64_t next_block_information_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NextBlockInformationOffset
                                                    
        SDK_MAGIC_PROPERTIES( "_HEAP_BLOCK_INFORMATION.$", 0x28, true, 0x8c8e4b0e4711113f );                              
        SDK_FIXED_SIZE( block_information_t, 0x28 );                              
    };                                              
};
#include "magic/block_information_t.end.hpp"
SDK_VERIFY( struct heap::block_information_t, 0x28 );
