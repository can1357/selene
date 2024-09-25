#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpauxiotransmission_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DPAUXIOTRANSMISSION]
    // => WDK 10 (NV)
    //
    struct dpauxiotransmission_t                         
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint1_t                 write;                //{ +0x0000@0  } | .Write
        _m01 uint1_t                 can_use_cached_data;  //{ +0x0000@1  } | .CanUseCachedData
        _m02 uint32_t                root_port_index;      //{ +0x0004    } | .RootPortIndex
        _m03 uint32_t                dpcd_address;         //{ +0x0008    } | .DPCDAddress
        _m04 uint8_t                 num_bytes_requested;  //{ +0x000c    } | .NumBytesRequested
        _m05 uint32_t                dp_native_error;      //{ +0x0010    } | .DPNativeError
        _m06 uint8_t                 num_bytes_done;       //{ +0x0014    } | .NumBytesDone
        _m07 sdk::array<uint8_t, 16> data;                 //{ +0x0015    } | .Data
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DPAUXIOTRANSMISSION.$", 0x0, false, 0x32d41eec81c4246a );                    
        SDK_FIXED_SIZE( dpauxiotransmission_t, 0x28 );                    
    };                                                   
};
#include "magic/dpauxiotransmission_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::dpauxiotransmission_t, 0x28 );
