#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdvd_feature_set_page_t.start.hpp"
namespace nt
{
    // [struct _CDVD_FEATURE_SET_PAGE]
    // => WDK 10 (NV)
    //
    struct cdvd_feature_set_page_t                            
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 uint6_t                page_code;                  //{ +0x0000@0  } | .PageCode
        _m01 uint1_t                ps_bit;                     //{ +0x0000@7  } | .PSBit
        _m02 uint8_t                page_length;                //{ +0x0001    } | .PageLength
        _m03 sdk::array<uint8_t, 2> cd_audio;                   //{ +0x0002    } | .CDAudio
        _m04 sdk::array<uint8_t, 2> embedded_changer;           //{ +0x0004    } | .EmbeddedChanger
        _m05 sdk::array<uint8_t, 2> packet_smart;               //{ +0x0006    } | .PacketSMART
        _m06 sdk::array<uint8_t, 2> persistant_prevent;         //{ +0x0008    } | .PersistantPrevent
        _m07 sdk::array<uint8_t, 2> event_status_notification;  //{ +0x000a    } | .EventStatusNotification
        _m08 sdk::array<uint8_t, 2> digital_output;             //{ +0x000c    } | .DigitalOutput
        _m09 sdk::array<uint8_t, 2> cd_sequential_recordable;   //{ +0x000e    } | .CDSequentialRecordable
        _m10 sdk::array<uint8_t, 2> dvd_sequential_recordable;  //{ +0x0010    } | .DVDSequentialRecordable
        _m11 sdk::array<uint8_t, 2> random_recordable;          //{ +0x0012    } | .RandomRecordable
        _m12 sdk::array<uint8_t, 2> key_exchange;               //{ +0x0014    } | .KeyExchange
                                                              
        SDK_NONVOL_PROPERTIES( "_CDVD_FEATURE_SET_PAGE.$", 0x0, false, 0x46beea3c9fa7ebcb );                          
        SDK_FIXED_SIZE( cdvd_feature_set_page_t, 0x18 );                          
    };                                                        
};
#include "magic/cdvd_feature_set_page_t.end.hpp"
SDK_VERIFY( struct nt::cdvd_feature_set_page_t, 0x18 );
