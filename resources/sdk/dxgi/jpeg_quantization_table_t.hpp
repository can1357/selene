#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jpeg_quantization_table_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_JPEG_QUANTIZATION_TABLE]
    // => WDK 10 (NV)
    //
    struct jpeg_quantization_table_t          
    {                                         
        // WDK 10                             
        //                                    
        _m00 sdk::array<uint8_t, 64> elements;  //{ +0x0000    } | .Elements
                                              
        SDK_NONVOL_PROPERTIES( "DXGI_JPEG_QUANTIZATION_TABLE.$", 0x0, false, 0x145b22b3393d8314 );         
        SDK_FIXED_SIZE( jpeg_quantization_table_t, 0x40 );         
    };                                        
};
#include "magic/jpeg_quantization_table_t.end.hpp"
SDK_VERIFY( struct dxgi::jpeg_quantization_table_t, 0x40 );
