#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sd_change_machine_sid_output_t.start.hpp"
namespace win
{
    // [struct _SD_CHANGE_MACHINE_SID_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sd_change_machine_sid_output_t        
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint64_t num_sd_changed_success;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumSDChangedSuccess
        _m01 uint64_t num_sd_changed_fail;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumSDChangedFail
        _m02 uint64_t num_sd_unused;               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumSDUnused
        _m03 uint64_t num_sd_total;                //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .NumSDTotal
        _m04 uint64_t num_mft_sd_changed_success;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NumMftSDChangedSuccess
        _m05 uint64_t num_mft_sd_changed_fail;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .NumMftSDChangedFail
        _m06 uint64_t num_mft_sd_total;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .NumMftSDTotal
                                                 
        SDK_NONVOL_PROPERTIES( "_SD_CHANGE_MACHINE_SID_OUTPUT.$", 0x38, true, 0xb08af512ad95b841 );                           
        SDK_FIXED_SIZE( sd_change_machine_sid_output_t, 0x38 );                           
    };                                           
};
#include "magic/sd_change_machine_sid_output_t.end.hpp"
SDK_VERIFY( struct win::sd_change_machine_sid_output_t, 0x38 );
