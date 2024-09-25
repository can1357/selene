#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/block_extra_information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_BLOCK_EXTRA_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct block_extra_information_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint8_t  next;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint32_t type;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 uint64_t size;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                                    
        SDK_MAGIC_PROPERTIES( "_HEAP_BLOCK_EXTRA_INFORMATION.$", 0x10, true, 0xbdb03dbb542261b1 );     
        SDK_FIXED_SIZE( block_extra_information_t, 0x10 );     
    };                              
};
#include "magic/block_extra_information_t.end.hpp"
SDK_VERIFY( struct heap::block_extra_information_t, 0x10 );
