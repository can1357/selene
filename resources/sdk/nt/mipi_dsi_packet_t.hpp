#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mipi_dsi_packet_t.start.hpp"
namespace nt
{
    // [struct _MIPI_DSI_PACKET]
    // => WDK 10 (NV)
    //
    struct mipi_dsi_packet_t                              
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint8_t                data_id;                //{ +0x0000    } | .DataId
        _m01 uint6_t                data_type;              //{ +0x0000@0  } | .DataType
        _m02 uint2_t                virtual_channel;        //{ +0x0000@6  } | .VirtualChannel
        _m03 uint8_t                data0;                  //{ +0x0002    } | .Data0
        _m04 uint8_t                data1;                  //{ +0x0003    } | .Data1
        _m05 uint16_t               long_write_word_count;  //{ +0x0002    } | .LongWriteWordCount
        _m06 uint8_t                ecc_filler;             //{ +0x0004    } | .EccFiller
        _m07 sdk::array<uint8_t, 8> payload;                //{ +0x0005    } | .Payload
                                                          
        SDK_NONVOL_PROPERTIES( "_MIPI_DSI_PACKET.$", 0x0, false, 0x696daaa03252a6af );                      
        SDK_FIXED_SIZE( mipi_dsi_packet_t, 0xe );                      
    };                                                    
};
#include "magic/mipi_dsi_packet_t.end.hpp"
SDK_VERIFY( struct nt::mipi_dsi_packet_t, 0xe );
