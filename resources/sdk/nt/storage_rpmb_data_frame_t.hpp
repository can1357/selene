#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_rpmb_data_frame_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_RPMB_DATA_FRAME]
    // => WDK 10 (NV)
    //
    struct storage_rpmb_data_frame_t                           
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 sdk::array<uint8_t, 196> stuff;                     //{ +0x0000    } | .Stuff
        _m01 sdk::array<uint8_t, 32>  key_or_mac;                //{ +0x00c4    } | .KeyOrMAC
        _m02 sdk::array<uint8_t, 256> data;                      //{ +0x00e4    } | .Data
        _m03 sdk::array<uint8_t, 16>  nonce;                     //{ +0x01e4    } | .Nonce
        _m04 sdk::array<uint8_t, 4>   write_counter;             //{ +0x01f4    } | .WriteCounter
        _m05 sdk::array<uint8_t, 2>   address;                   //{ +0x01f8    } | .Address
        _m06 sdk::array<uint8_t, 2>   block_count;               //{ +0x01fa    } | .BlockCount
        _m07 sdk::array<uint8_t, 2>   operation_result;          //{ +0x01fc    } | .OperationResult
        _m08 sdk::array<uint8_t, 2>   request_or_response_type;  //{ +0x01fe    } | .RequestOrResponseType
                                                               
        SDK_NONVOL_PROPERTIES( "_STORAGE_RPMB_DATA_FRAME.$", 0x0, false, 0x7ea160fe28456ed1 );                         
        SDK_FIXED_SIZE( storage_rpmb_data_frame_t, 0x200 );                         
    };                                                         
};
#include "magic/storage_rpmb_data_frame_t.end.hpp"
SDK_VERIFY( struct nt::storage_rpmb_data_frame_t, 0x200 );
