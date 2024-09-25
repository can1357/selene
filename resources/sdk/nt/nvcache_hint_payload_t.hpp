#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvcache_hint_payload_t.start.hpp"
namespace nt
{
    // [struct _NVCACHE_HINT_PAYLOAD]
    // => WDK 10 (NV)
    //
    struct nvcache_hint_payload_t   
    {                               
        // WDK 10                   
        //                          
        _m00 uint8_t command;         //{ +0x0000    } | .Command
        _m01 uint8_t feature7_0;      //{ +0x0001    } | .Feature7_0
        _m02 uint8_t feature15_8;     //{ +0x0002    } | .Feature15_8
        _m03 uint8_t count15_8;       //{ +0x0003    } | .Count15_8
        _m04 uint8_t lba7_0;          //{ +0x0004    } | .LBA7_0
        _m05 uint8_t lba15_8;         //{ +0x0005    } | .LBA15_8
        _m06 uint8_t lba23_16;        //{ +0x0006    } | .LBA23_16
        _m07 uint8_t lba31_24;        //{ +0x0007    } | .LBA31_24
        _m08 uint8_t lba39_32;        //{ +0x0008    } | .LBA39_32
        _m09 uint8_t lba47_40;        //{ +0x0009    } | .LBA47_40
        _m10 uint8_t auxiliary7_0;    //{ +0x000a    } | .Auxiliary7_0
        _m11 uint8_t auxiliary23_16;  //{ +0x000b    } | .Auxiliary23_16
                                    
        SDK_NONVOL_PROPERTIES( "_NVCACHE_HINT_PAYLOAD.$", 0x0, false, 0xe6a3206bd93942b2 );               
        SDK_FIXED_SIZE( nvcache_hint_payload_t, 0x10 );               
    };                              
};
#include "magic/nvcache_hint_payload_t.end.hpp"
SDK_VERIFY( struct nt::nvcache_hint_payload_t, 0x10 );
