#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/track_information2_t.start.hpp"
namespace nt
{
    // [struct _TRACK_INFORMATION2]
    // => WDK 10 (NV)
    //
    struct track_information2_t                           
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 sdk::array<uint8_t, 2> length;                 //{ +0x0000    } | .Length
        _m01 uint8_t                track_number_lsb;       //{ +0x0002    } | .TrackNumberLsb
        _m02 uint8_t                session_number_lsb;     //{ +0x0003    } | .SessionNumberLsb
        _m03 uint4_t                track_mode;             //{ +0x0005@0  } | .TrackMode
        _m04 uint1_t                copy;                   //{ +0x0005@4  } | .Copy
        _m05 uint1_t                damage;                 //{ +0x0005@5  } | .Damage
        _m06 uint4_t                data_mode;              //{ +0x0006@0  } | .DataMode
        _m07 uint1_t                fixed_packet;           //{ +0x0006@4  } | .FixedPacket
        _m08 uint1_t                packet;                 //{ +0x0006@5  } | .Packet
        _m09 uint1_t                blank;                  //{ +0x0006@6  } | .Blank
        _m10 uint1_t                reserved_track;         //{ +0x0006@7  } | .ReservedTrack
        _m11 uint1_t                nwa_v;                  //{ +0x0007@0  } | .NWA_V
        _m12 uint1_t                lra_v;                  //{ +0x0007@1  } | .LRA_V
        _m13 sdk::array<uint8_t, 4> track_start_address;    //{ +0x0008    } | .TrackStartAddress
        _m14 sdk::array<uint8_t, 4> next_writable_address;  //{ +0x000c    } | .NextWritableAddress
        _m15 sdk::array<uint8_t, 4> free_blocks;            //{ +0x0010    } | .FreeBlocks
        _m16 sdk::array<uint8_t, 4> fixed_packet_size;      //{ +0x0014    } | .FixedPacketSize
        _m17 sdk::array<uint8_t, 4> track_size;             //{ +0x0018    } | .TrackSize
        _m18 sdk::array<uint8_t, 4> last_recorded_address;  //{ +0x001c    } | .LastRecordedAddress
        _m19 uint8_t                track_number_msb;       //{ +0x0020    } | .TrackNumberMsb
        _m20 uint8_t                session_number_msb;     //{ +0x0021    } | .SessionNumberMsb
                                                          
        SDK_NONVOL_PROPERTIES( "_TRACK_INFORMATION2.$", 0x0, false, 0x7507bb68428e157b );                      
        SDK_FIXED_SIZE( track_information2_t, 0x24 );                      
    };                                                    
};
#include "magic/track_information2_t.end.hpp"
SDK_VERIFY( struct nt::track_information2_t, 0x24 );
