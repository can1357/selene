#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_t.hpp"

#include "magic/pshed_plugin_dimm_mismatch_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PLUGIN_DIMM_MISMATCH]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_plugin_dimm_mismatch_t                          
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 uint16_t                       firmware_bank;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FirmwareBank
        _m02 uint16_t                       firmware_col;          //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .FirmwareCol
        _m03 uint16_t                       firmware_row;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .FirmwareRow
        _m04 uint16_t                       retry_rd_bank;         //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .RetryRdBank
        _m05 uint16_t                       retry_rd_col;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RetryRdCol
        _m06 uint16_t                       retry_rd_row;          //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .RetryRdRow
        _m07 uint16_t                       ta_bank;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .TaBank
        _m08 uint16_t                       ta_col;                //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .TaCol
        _m09 uint16_t                       ta_row;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TaRow
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.$", 0x32, true, 0x409e1e3668df0773 );                     
        SDK_FIXED_SIZE( pshed_plugin_dimm_mismatch_t, 0x32 );                     
    };                                                           
};
#include "magic/pshed_plugin_dimm_mismatch_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_dimm_mismatch_t, 0x32 );
