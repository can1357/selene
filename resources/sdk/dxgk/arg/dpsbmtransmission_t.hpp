#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpsbmtransmission_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DPSBMTRANSMISSION]
    // => WDK 10 (NV)
    //
    struct dpsbmtransmission_t                           
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint1_t                can_use_cached_data;   //{ +0x0000@0  } | .CanUseCachedData
        _m01 uint32_t               root_port_index;       //{ +0x0004    } | .RootPortIndex
        _m02 uint32_t               buffer_size_supplied;  //{ +0x0008    } | .BufferSizeSupplied
        _m03 uint32_t               request_length;        //{ +0x000c    } | .RequestLength
        _m04 uint32_t               max_reply_length;      //{ +0x0010    } | .MaxReplyLength
        _m05 uint32_t               dp_native_error;       //{ +0x0014    } | .DPNativeError
        _m06 uint32_t               actual_reply_length;   //{ +0x0018    } | .ActualReplyLength
        _m07 sdk::array<uint8_t, 1> data;                  //{ +0x001c    } | .Data
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DPSBMTRANSMISSION.$", 0x0, false, 0xf2d320546987acd3 );                     
        SDK_FIXED_SIZE( dpsbmtransmission_t, 0x20 );                     
    };                                                   
};
#include "magic/dpsbmtransmission_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::dpsbmtransmission_t, 0x20 );
