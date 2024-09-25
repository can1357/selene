#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jpeg_dc_huffman_table_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_JPEG_DC_HUFFMAN_TABLE]
    // => WDK 10 (NV)
    //
    struct jpeg_dc_huffman_table_t               
    {                                            
        // WDK 10                                
        //                                       
        _m00 sdk::array<uint8_t, 12> code_counts;  //{ +0x0000    } | .CodeCounts
        _m01 sdk::array<uint8_t, 12> code_values;  //{ +0x000c    } | .CodeValues
                                                 
        SDK_NONVOL_PROPERTIES( "DXGI_JPEG_DC_HUFFMAN_TABLE.$", 0x0, false, 0xa10e9134c61ef876 );            
        SDK_FIXED_SIZE( jpeg_dc_huffman_table_t, 0x18 );            
    };                                           
};
#include "magic/jpeg_dc_huffman_table_t.end.hpp"
SDK_VERIFY( struct dxgi::jpeg_dc_huffman_table_t, 0x18 );
