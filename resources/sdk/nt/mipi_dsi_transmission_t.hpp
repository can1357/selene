#pragma once
#include <sdkgen/support_library.hpp>
#include "mipi_dsi_packet_t.hpp"

#include "magic/mipi_dsi_transmission_t.start.hpp"
namespace nt
{
    // [struct _MIPI_DSI_TRANSMISSION]
    // => WDK 10 (NV)
    //
    struct mipi_dsi_transmission_t                                                   
    {                                                                                
        // WDK 10                                                                    
        //                                                                           
        _m00 uint32_t                                    total_buffer_size;            //{ +0x0000    } | .TotalBufferSize
        _m01 uint8_t                                     packet_count;                 //{ +0x0004    } | .PacketCount
        _m02 uint8_t                                     failed_packet;                //{ +0x0005    } | .FailedPacket
        _m03 uint2_t                                     transmission_mode;            //{ +0x0006@0  } | .TransmissionMode
        _m04 uint1_t                                     report_mipi_errors;           //{ +0x0006@2  } | .ReportMipiErrors
        _m05 uint1_t                                     clear_mipi_errors;            //{ +0x0006@3  } | .ClearMipiErrors
        _m06 uint1_t                                     secondary_port;               //{ +0x0006@4  } | .SecondaryPort
        _m07 uint1_t                                     manufacturing_mode;           //{ +0x0006@5  } | .ManufacturingMode
        _m08 uint16_t                                    read_word_count;              //{ +0x0008    } | .ReadWordCount
        _m09 uint16_t                                    final_command_extra_payload;  //{ +0x000a    } | .FinalCommandExtraPayload
        _m10 uint16_t                                    mipi_errors;                  //{ +0x000c    } | .MipiErrors
        _m11 uint16_t                                    host_errors;                  //{ +0x000e    } | .HostErrors
        _m12 sdk::array<struct nt::mipi_dsi_packet_t, 1> packets;                      //{ +0x0010    } | .Packets
                                                                                     
        SDK_NONVOL_PROPERTIES( "_MIPI_DSI_TRANSMISSION.$", 0x0, false, 0xd1673f6c8c53c216 );                            
        SDK_FIXED_SIZE( mipi_dsi_transmission_t, 0x20 );                             
    };                                                                               
};
#include "magic/mipi_dsi_transmission_t.end.hpp"
SDK_VERIFY( struct nt::mipi_dsi_transmission_t, 0x20 );
