#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sample_desc_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_SAMPLE_DESC]
    // => WDK 10 (NV)
    //
    struct sample_desc_t      
    {                         
        // WDK 10             
        //                    
        _m00 uint32_t count;    //{ +0x0000    } | .Count
        _m01 uint32_t quality;  //{ +0x0004    } | .Quality
                              
        SDK_NONVOL_PROPERTIES( "DXGI_SAMPLE_DESC.$", 0x0, false, 0x88f0bbf225f2bbd8 );        
        SDK_FIXED_SIZE( sample_desc_t, 0x8 );        
    };                        
};
#include "magic/sample_desc_t.end.hpp"
SDK_VERIFY( struct dxgi::sample_desc_t, 0x8 );
