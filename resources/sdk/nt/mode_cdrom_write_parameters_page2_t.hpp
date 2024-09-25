#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_cdrom_write_parameters_page2_t.start.hpp"
namespace nt
{
    // [struct _MODE_CDROM_WRITE_PARAMETERS_PAGE2]
    // => WDK 10 (NV)
    //
    struct mode_cdrom_write_parameters_page2_t                    
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint6_t                 page_code;                     //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                 page_savable;                  //{ +0x0000@7  } | .PageSavable
        _m02 uint8_t                 page_length;                   //{ +0x0001    } | .PageLength
        _m03 uint4_t                 write_type;                    //{ +0x0002@0  } | .WriteType
        _m04 uint1_t                 test_write;                    //{ +0x0002@4  } | .TestWrite
        _m05 uint1_t                 link_size_valid;               //{ +0x0002@5  } | .LinkSizeValid
        _m06 uint1_t                 buffer_underrun_free_enabled;  //{ +0x0002@6  } | .BufferUnderrunFreeEnabled
        _m07 uint4_t                 track_mode;                    //{ +0x0003@0  } | .TrackMode
        _m08 uint1_t                 copy;                          //{ +0x0003@4  } | .Copy
        _m09 uint1_t                 fixed_packet;                  //{ +0x0003@5  } | .FixedPacket
        _m10 uint2_t                 multi_session;                 //{ +0x0003@6  } | .MultiSession
        _m11 uint4_t                 data_block_type;               //{ +0x0004@0  } | .DataBlockType
        _m12 uint8_t                 link_size;                     //{ +0x0005    } | .LinkSize
        _m13 uint6_t                 host_application_code;         //{ +0x0007@0  } | .HostApplicationCode
        _m14 uint8_t                 session_format;                //{ +0x0008    } | .SessionFormat
        _m15 sdk::array<uint8_t, 4>  packet_size;                   //{ +0x000a    } | .PacketSize
        _m16 sdk::array<uint8_t, 2>  audio_pause_length;            //{ +0x000e    } | .AudioPauseLength
        _m17 sdk::array<uint8_t, 16> media_catalog_number;          //{ +0x0010    } | .MediaCatalogNumber
        _m18 sdk::array<uint8_t, 16> isrc;                          //{ +0x0020    } | .ISRC
        _m19 sdk::array<uint8_t, 4>  sub_header_data;               //{ +0x0030    } | .SubHeaderData
                                                                  
        SDK_NONVOL_PROPERTIES( "_MODE_CDROM_WRITE_PARAMETERS_PAGE2.$", 0x0, false, 0x9eb8ad62e5a68cfe );                             
        SDK_FIXED_SIZE( mode_cdrom_write_parameters_page2_t, 0x34 );                             
    };                                                            
};
#include "magic/mode_cdrom_write_parameters_page2_t.end.hpp"
SDK_VERIFY( struct nt::mode_cdrom_write_parameters_page2_t, 0x34 );
