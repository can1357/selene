#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lba_t.start.hpp"
namespace stor::port
{
    // [struct _LBA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct lba_t                                           
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 sdk::array<uint8_t, 4> starting_block_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingBlockAddress
        _m01 sdk::array<uint8_t, 4> play_length;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PlayLength
                                                           
        SDK_NONVOL_PROPERTIES( "_LBA.$", 0x8, true, 0xa1fe008f28ab3942 );                       
        SDK_FIXED_SIZE( lba_t, 0x8 );                       
    };                                                     
};
#include "magic/lba_t.end.hpp"
SDK_VERIFY( struct stor::port::lba_t, 0x8 );
