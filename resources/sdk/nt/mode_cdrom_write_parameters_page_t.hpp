#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_cdrom_write_parameters_page_t.start.hpp"
namespace nt
{
    // [struct _MODE_CDROM_WRITE_PARAMETERS_PAGE]
    // => WDK 10 (NV)
    //
    struct mode_cdrom_write_parameters_page_t                      
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m000 uint8_t                 page_length;                   //{ +0x0000    } | .PageLength
        _m001 uint4_t                 write_type;                    //{ +0x0001@0  } | .WriteType
        _m002 uint1_t                 test_write;                    //{ +0x0001@4  } | .TestWrite
        _m003 uint1_t                 link_size_valid;               //{ +0x0001@5  } | .LinkSizeValid
        _m004 uint1_t                 buffer_underrun_free_enabled;  //{ +0x0001@6  } | .BufferUnderrunFreeEnabled
        _m005 uint4_t                 track_mode;                    //{ +0x0002@0  } | .TrackMode
        _m006 uint1_t                 copy;                          //{ +0x0002@4  } | .Copy
        _m007 uint1_t                 fixed_packet;                  //{ +0x0002@5  } | .FixedPacket
        _m008 uint2_t                 multi_session;                 //{ +0x0002@6  } | .MultiSession
        _m009 uint4_t                 data_block_type;               //{ +0x0003@0  } | .DataBlockType
        _m010 uint8_t                 link_size;                     //{ +0x0004    } | .LinkSize
        _m011 uint6_t                 host_application_code;         //{ +0x0006@0  } | .HostApplicationCode
        _m012 uint8_t                 session_format;                //{ +0x0007    } | .SessionFormat
        _m013 sdk::array<uint8_t, 4>  packet_size;                   //{ +0x0009    } | .PacketSize
        _m014 sdk::array<uint8_t, 2>  audio_pause_length;            //{ +0x000d    } | .AudioPauseLength
        _m015 uint1_t                 media_catalog_number_valid;    //{ +0x000f@7  } | .MediaCatalogNumberValid
        _m016 sdk::array<uint8_t, 13> media_catalog_number;          //{ +0x0010    } | .MediaCatalogNumber
        _m017 uint8_t                 media_catalog_number_zero;     //{ +0x001d    } | .MediaCatalogNumberZero
        _m018 uint8_t                 media_catalog_number_a_frame;  //{ +0x001e    } | .MediaCatalogNumberAFrame
        _m019 uint1_t                 isrc_valid;                    //{ +0x001f@7  } | .ISRCValid
        _m020 sdk::array<uint8_t, 2>  isrc_country;                  //{ +0x0020    } | .ISRCCountry
        _m021 sdk::array<uint8_t, 3>  isrc_owner;                    //{ +0x0022    } | .ISRCOwner
        _m022 sdk::array<uint8_t, 2>  isrc_recording_year;           //{ +0x0025    } | .ISRCRecordingYear
        _m023 sdk::array<uint8_t, 5>  isrc_serial_number;            //{ +0x0027    } | .ISRCSerialNumber
        _m024 uint8_t                 isrc_zero;                     //{ +0x002c    } | .ISRCZero
        _m025 uint8_t                 isrca_frame;                   //{ +0x002d    } | .ISRCAFrame
        _m026 uint8_t                 isrc_reserved;                 //{ +0x002e    } | .ISRCReserved
        _m027 sdk::array<uint8_t, 4>  sub_header_data;               //{ +0x002f    } | .SubHeaderData
                                                                   
        SDK_NONVOL_PROPERTIES( "_MODE_CDROM_WRITE_PARAMETERS_PAGE.$", 0x0, false, 0x1a080ea6c846a7ec );                             
        SDK_FIXED_SIZE( mode_cdrom_write_parameters_page_t, 0x33 );                             
    };                                                             
};
#include "magic/mode_cdrom_write_parameters_page_t.end.hpp"
SDK_VERIFY( struct nt::mode_cdrom_write_parameters_page_t, 0x33 );
