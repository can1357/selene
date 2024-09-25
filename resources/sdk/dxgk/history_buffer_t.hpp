#pragma once
#include <sdkgen/support_library.hpp>
#include "history_buffer_header_t.hpp"

#include "magic/history_buffer_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_HISTORY_BUFFER]
    // => WDK 10 (NV)
    //
    struct history_buffer_t                                           
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 struct dxgk::history_buffer_header_t header;               //{ +0x0000    } | .Header
        _m01 sdk::array<uint8_t, 1>               driver_private_data;  //{ +0x0010    } | .DriverPrivateData
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_HISTORY_BUFFER.$", 0x0, false, 0xc210ad5a3cc9db14 );                    
        SDK_FIXED_SIZE( history_buffer_t, 0x14 );                     
    };                                                                
};
#include "magic/history_buffer_t.end.hpp"
SDK_VERIFY( struct dxgk::history_buffer_t, 0x14 );
