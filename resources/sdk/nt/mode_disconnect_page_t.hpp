#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_disconnect_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_DISCONNECT_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_disconnect_page_t                            
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint6_t                page_code;                 //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                page_savable;              //{ +0x0000@7  } | .PageSavable
        _m02 uint8_t                page_length;               //{ +0x0001    } | .PageLength
        _m03 uint8_t                buffer_full_ratio;         //{ +0x0002    } | .BufferFullRatio
        _m04 uint8_t                buffer_empty_ratio;        //{ +0x0003    } | .BufferEmptyRatio
        _m05 sdk::array<uint8_t, 2> bus_inactivity_limit;      //{ +0x0004    } | .BusInactivityLimit
        _m06 sdk::array<uint8_t, 2> bus_disconnect_time;       //{ +0x0006    } | .BusDisconnectTime
        _m07 sdk::array<uint8_t, 2> bus_connect_time;          //{ +0x0008    } | .BusConnectTime
        _m08 sdk::array<uint8_t, 2> maximum_burst_size;        //{ +0x000a    } | .MaximumBurstSize
        _m09 uint2_t                data_transfer_disconnect;  //{ +0x000c@0  } | .DataTransferDisconnect
                                                             
        SDK_NONVOL_PROPERTIES( "_MODE_DISCONNECT_PAGE.$", 0x0, false, 0x71baf70d0d9c89e6 );                         
        SDK_FIXED_SIZE( mode_disconnect_page_t, 0x10 );                         
    };                                                       
};
#include "magic/mode_disconnect_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_disconnect_page_t, 0x10 );
