#pragma once
#include <sdkgen/support_library.hpp>
#include "opc_table_entry_t.hpp"

#include "magic/disk_information_t.start.hpp"
namespace nt
{
    // [struct _DISK_INFORMATION]
    // => WDK 10 (NV)
    //
    struct disk_information_t                                                  
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 sdk::array<uint8_t, 2>                   length;                    //{ +0x0000    } | .Length
        _m01 uint2_t                                  disk_status;               //{ +0x0002@0  } | .DiskStatus
        _m02 uint2_t                                  last_session_status;       //{ +0x0002@2  } | .LastSessionStatus
        _m03 uint1_t                                  erasable;                  //{ +0x0002@4  } | .Erasable
        _m04 uint8_t                                  first_track_number;        //{ +0x0003    } | .FirstTrackNumber
        _m05 uint8_t                                  number_of_sessions;        //{ +0x0004    } | .NumberOfSessions
        _m06 uint8_t                                  last_session_first_track;  //{ +0x0005    } | .LastSessionFirstTrack
        _m07 uint8_t                                  last_session_last_track;   //{ +0x0006    } | .LastSessionLastTrack
        _m08 uint1_t                                  gen;                       //{ +0x0007@5  } | .GEN
        _m09 uint1_t                                  dbc_v;                     //{ +0x0007@6  } | .DBC_V
        _m10 uint1_t                                  did_v;                     //{ +0x0007@7  } | .DID_V
        _m11 uint8_t                                  disk_type;                 //{ +0x0008    } | .DiskType
        _m12 sdk::array<uint8_t, 4>                   disk_identification;       //{ +0x000c    } | .DiskIdentification
        _m13 sdk::array<uint8_t, 4>                   last_session_lead_in;      //{ +0x0010    } | .LastSessionLeadIn
        _m14 sdk::array<uint8_t, 4>                   last_possible_start_time;  //{ +0x0014    } | .LastPossibleStartTime
        _m15 sdk::array<uint8_t, 8>                   disk_bar_code;             //{ +0x0018    } | .DiskBarCode
        _m16 uint8_t                                  number_opc_entries;        //{ +0x0021    } | .NumberOPCEntries
        _m17 sdk::array<struct nt::opc_table_entry_t> opc_table;                 //{ +0x0022    } | .OPCTable
                                                                               
        SDK_NONVOL_PROPERTIES( "_DISK_INFORMATION.$", 0x0, false, 0xb03f0c248465f661 );                         
        SDK_FIXED_SIZE( disk_information_t, 0x22 );                            
    };                                                                         
};
#include "magic/disk_information_t.end.hpp"
SDK_VERIFY( struct nt::disk_information_t, 0x22 );
