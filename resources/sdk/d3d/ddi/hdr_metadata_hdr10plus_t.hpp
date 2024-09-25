#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hdr_metadata_hdr10plus_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_HDR_METADATA_HDR10PLUS]
    // => WDK 10 (NV)
    //
    struct hdr_metadata_hdr10plus_t       
    {                                     
        // WDK 10                         
        //                                
        _m00 sdk::array<uint8_t, 72> data;  //{ +0x0000    } | .Data
                                          
        SDK_NONVOL_PROPERTIES( "D3DDDI_HDR_METADATA_HDR10PLUS.$", 0x0, false, 0xf75659c290411aef );     
        SDK_FIXED_SIZE( hdr_metadata_hdr10plus_t, 0x48 );     
    };                                    
};
#include "magic/hdr_metadata_hdr10plus_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::hdr_metadata_hdr10plus_t, 0x48 );
