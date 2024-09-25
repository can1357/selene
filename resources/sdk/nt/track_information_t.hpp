#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/track_information_t.start.hpp"
namespace nt
{
    // [struct _TRACK_INFORMATION]
    // => WDK 10 (NV)
    //
    struct track_information_t                            
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 sdk::array<uint8_t, 2> length;                 //{ +0x0000    } | .Length
        _m01 uint8_t                track_number;           //{ +0x0002    } | .TrackNumber
        _m02 uint8_t                session_number;         //{ +0x0003    } | .SessionNumber
        _m03 uint4_t                track_mode;             //{ +0x0005@0  } | .TrackMode
        _m04 uint1_t                copy;                   //{ +0x0005@4  } | .Copy
        _m05 uint1_t                damage;                 //{ +0x0005@5  } | .Damage
        _m06 uint4_t                data_mode;              //{ +0x0006@0  } | .DataMode
        _m07 uint1_t                fp;                     //{ +0x0006@4  } | .FP
        _m08 uint1_t                packet;                 //{ +0x0006@5  } | .Packet
        _m09 uint1_t                blank;                  //{ +0x0006@6  } | .Blank
        _m10 uint1_t                rt;                     //{ +0x0006@7  } | .RT
        _m11 uint1_t                nwa_v;                  //{ +0x0007@0  } | .NWA_V
        _m12 sdk::array<uint8_t, 4> track_start_address;    //{ +0x0008    } | .TrackStartAddress
        _m13 sdk::array<uint8_t, 4> next_writable_address;  //{ +0x000c    } | .NextWritableAddress
        _m14 sdk::array<uint8_t, 4> free_blocks;            //{ +0x0010    } | .FreeBlocks
        _m15 sdk::array<uint8_t, 4> fixed_packet_size;      //{ +0x0014    } | .FixedPacketSize
                                                          
        SDK_NONVOL_PROPERTIES( "_TRACK_INFORMATION.$", 0x0, false, 0x9d56bd8f4632714e );                      
        SDK_FIXED_SIZE( track_information_t, 0x18 );                      
    };                                                    
};
#include "magic/track_information_t.end.hpp"
SDK_VERIFY( struct nt::track_information_t, 0x18 );
