#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miracast_caps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MIRACAST_CAPS]
    // => WDK 10 (NV)
    //
    struct miracast_caps_t                                                
    {                                                                     
        union u0_flags_t                                                  
        {                                                                 
            // WDK 10                                                     
            //                                                            
            _m01 uint1_t  hdcp_support;                                     //{ +0x0000@0  } | .HdcpSupport
            _m02 uint32_t value;                                            //{ +0x0000    } | .Value
                                                                          
            SDK_NONVOL_PROPERTIES( "_DXGK_MIRACAST_CAPS.Flags.$", 0x0, false, 0x11e83f877f2e136a );                                                
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                
        };                                                                
                                                                          
        // WDK 10                                                         
        //                                                                
        _m00 uint32_t                  max_chunk_private_driver_data_size;  //{ +0x0000    } | .MaxChunkPrivateDriverDataSize
        _m03 u0_flags_t                flags;                               //{ +0x0004    } | .Flags
                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_MIRACAST_CAPS.$", 0x0, false, 0x9b1623813d04a68f );                                   
        SDK_FIXED_SIZE( miracast_caps_t, 0x8 );                                   
    };                                                                    
};
#include "magic/miracast_caps_t.end.hpp"
SDK_VERIFY( union dxgk::miracast_caps_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct dxgk::miracast_caps_t, 0x8 );
