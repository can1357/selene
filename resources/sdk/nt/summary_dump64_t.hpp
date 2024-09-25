#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/summary_dump64_t.start.hpp"
namespace nt
{
    // [struct _SUMMARY_DUMP64]
    // => WDK 10 (NV)
    //
    struct summary_dump64_t                                        
    {                                                              
        struct u0_bitmap_t                                         
        {                                                          
            // WDK 10                                              
            //                                                     
            _m06 uint32_t             size_of_bit_map;               //{ +0x0000    } | .SizeOfBitMap
            _m07 uint64_t             reserved0;                     //{ +0x0008    } | ._reserved0
            _m08 sdk::array<uint32_t> buffer;                        //{ +0x0010    } | .Buffer
                                                                   
            SDK_NONVOL_PROPERTIES( "_SUMMARY_DUMP64.Bitmap.$", 0x0, false, 0xf6f1c32c4f426fb2 );                             
            SDK_FIXED_SIZE( u0_bitmap_t, 0x10 );                             
        };                                                         
                                                                   
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                                 signature;     //{ +0x0000    } | .Signature
        _m01 uint32_t                                 valid_dump;    //{ +0x0004    } | .ValidDump
        _m02 uint32_t                                 dump_options;  //{ +0x0008    } | .DumpOptions
        _m03 uint32_t                                 header_size;   //{ +0x000c    } | .HeaderSize
        _m04 uint32_t                                 bitmap_size;   //{ +0x0010    } | .BitmapSize
        _m05 uint32_t                                 pages;         //{ +0x0014    } | .Pages
        _m09 u0_bitmap_t                              bitmap;        //{ +0x0018    } | .Bitmap
                                                                   
        SDK_NONVOL_PROPERTIES( "_SUMMARY_DUMP64.$", 0x0, false, 0xdf009decd9a5e9e2 );             
        SDK_FIXED_SIZE( summary_dump64_t, 0x28 );                  
    };                                                             
};
#include "magic/summary_dump64_t.end.hpp"
SDK_VERIFY( struct nt::summary_dump64_t::u0_bitmap_t, 0x10 );
SDK_VERIFY( struct nt::summary_dump64_t, 0x28 );
