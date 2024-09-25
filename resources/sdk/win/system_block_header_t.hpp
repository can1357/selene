#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_block_header_t.start.hpp"
namespace win
{
    // [struct SystemBlockHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_block_header_t   
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t dw_index;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwIndex
        _m01 uint32_t ul_signature;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulSignature
                                   
        SDK_MAGIC_PROPERTIES( "SystemBlockHeader.$", 0x10, true, 0xb4f811078075653 );             
        SDK_FIXED_SIZE( system_block_header_t, 0x10 );             
    };                             
};
#include "magic/system_block_header_t.end.hpp"
SDK_VERIFY( struct win::system_block_header_t, 0x10 );
