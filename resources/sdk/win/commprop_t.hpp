#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/commprop_t.start.hpp"
namespace win
{
    // [struct _COMMPROP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct commprop_t                                      
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint16_t               w_packet_length;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wPacketLength
        _m01 uint16_t               w_packet_version;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wPacketVersion
        _m02 uint32_t               dw_service_mask;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwServiceMask
        _m03 uint32_t               dw_reserved1;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwReserved1
        _m04 uint32_t               dw_max_tx_queue;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwMaxTxQueue
        _m05 uint32_t               dw_max_rx_queue;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwMaxRxQueue
        _m06 uint32_t               dw_max_baud;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwMaxBaud
        _m07 uint32_t               dw_prov_sub_type;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwProvSubType
        _m08 uint32_t               dw_prov_capabilities;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwProvCapabilities
        _m09 uint32_t               dw_settable_params;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwSettableParams
        _m10 uint32_t               dw_settable_baud;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwSettableBaud
        _m11 uint16_t               w_settable_data;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .wSettableData
        _m12 uint16_t               w_settable_stop_parity;  //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .wSettableStopParity
        _m13 uint32_t               dw_current_tx_queue;     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .dwCurrentTxQueue
        _m14 uint32_t               dw_current_rx_queue;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwCurrentRxQueue
        _m15 uint32_t               dw_prov_spec1;           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .dwProvSpec1
        _m16 uint32_t               dw_prov_spec2;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .dwProvSpec2
        _m17 sdk::array<wchar_t, 1> wc_prov_char;            //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .wcProvChar
                                                           
        SDK_MAGIC_PROPERTIES( "_COMMPROP.$", 0x40, true, 0x63a932b6f4387a21 );                       
        SDK_FIXED_SIZE( commprop_t, 0x40 );                       
    };                                                     
};
#include "magic/commprop_t.end.hpp"
SDK_VERIFY( struct win::commprop_t, 0x40 );
