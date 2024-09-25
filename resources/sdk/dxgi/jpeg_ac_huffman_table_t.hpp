#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jpeg_ac_huffman_table_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_JPEG_AC_HUFFMAN_TABLE]
    // => WDK 10 (NV)
    //
    struct jpeg_ac_huffman_table_t                
    {                                             
        // WDK 10                                 
        //                                        
        _m00 sdk::array<uint8_t, 16>  code_counts;  //{ +0x0000    } | .CodeCounts
        _m01 sdk::array<uint8_t, 162> code_values;  //{ +0x0010    } | .CodeValues
                                                  
        SDK_NONVOL_PROPERTIES( "DXGI_JPEG_AC_HUFFMAN_TABLE.$", 0x0, false, 0x9bf2ead42e2fcb01 );            
        SDK_FIXED_SIZE( jpeg_ac_huffman_table_t, 0xb2 );            
    };                                            
};
#include "magic/jpeg_ac_huffman_table_t.end.hpp"
SDK_VERIFY( struct dxgi::jpeg_ac_huffman_table_t, 0xb2 );
