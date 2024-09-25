#pragma once
#include <sdkgen/support_library.hpp>
#include "opc_table_entry_t.hpp"

#include "magic/disc_information_t.start.hpp"
namespace nt
{
    // [struct _DISC_INFORMATION]
    // => WDK 10 (NV)
    //
    struct disc_information_t                                                              
    {                                                                                      
        // WDK 10                                                                          
        //                                                                                 
        _m00 sdk::array<uint8_t, 2>                      length;                             //{ +0x0000    } | .Length
        _m01 uint2_t                                     disc_status;                        //{ +0x0002@0  } | .DiscStatus
        _m02 uint2_t                                     last_session_status;                //{ +0x0002@2  } | .LastSessionStatus
        _m03 uint1_t                                     erasable;                           //{ +0x0002@4  } | .Erasable
        _m04 uint8_t                                     first_track_number;                 //{ +0x0003    } | .FirstTrackNumber
        _m05 uint8_t                                     number_of_sessions_lsb;             //{ +0x0004    } | .NumberOfSessionsLsb
        _m06 uint8_t                                     last_session_first_track_lsb;       //{ +0x0005    } | .LastSessionFirstTrackLsb
        _m07 uint8_t                                     last_session_last_track_lsb;        //{ +0x0006    } | .LastSessionLastTrackLsb
        _m08 uint2_t                                     mrw_status;                         //{ +0x0007@0  } | .MrwStatus
        _m09 uint1_t                                     mrw_dirty_bit;                      //{ +0x0007@2  } | .MrwDirtyBit
        _m10 uint1_t                                     uru;                                //{ +0x0007@5  } | .URU
        _m11 uint1_t                                     dbc_v;                              //{ +0x0007@6  } | .DBC_V
        _m12 uint1_t                                     did_v;                              //{ +0x0007@7  } | .DID_V
        _m13 uint8_t                                     disc_type;                          //{ +0x0008    } | .DiscType
        _m14 uint8_t                                     number_of_sessions_msb;             //{ +0x0009    } | .NumberOfSessionsMsb
        _m15 uint8_t                                     last_session_first_track_msb;       //{ +0x000a    } | .LastSessionFirstTrackMsb
        _m16 uint8_t                                     last_session_last_track_msb;        //{ +0x000b    } | .LastSessionLastTrackMsb
        _m17 sdk::array<uint8_t, 4>                      disk_identification;                //{ +0x000c    } | .DiskIdentification
        _m18 sdk::array<uint8_t, 4>                      last_session_lead_in;               //{ +0x0010    } | .LastSessionLeadIn
        _m19 sdk::array<uint8_t, 4>                      last_possible_lead_out_start_time;  //{ +0x0014    } | .LastPossibleLeadOutStartTime
        _m20 sdk::array<uint8_t, 8>                      disk_bar_code;                      //{ +0x0018    } | .DiskBarCode
        _m21 uint8_t                                     number_opc_entries;                 //{ +0x0021    } | .NumberOPCEntries
        _m22 sdk::array<struct nt::opc_table_entry_t, 1> opc_table;                          //{ +0x0022    } | .OPCTable
                                                                                           
        SDK_NONVOL_PROPERTIES( "_DISC_INFORMATION.$", 0x0, false, 0x14700474114af480 );                                  
        SDK_FIXED_SIZE( disc_information_t, 0x2a );                                        
    };                                                                                     
};
#include "magic/disc_information_t.end.hpp"
SDK_VERIFY( struct nt::disc_information_t, 0x2a );
