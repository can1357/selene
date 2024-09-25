#pragma once
#include <sdkgen/support_library.hpp>
#include "refs_smr_volume_gc_state_t.hpp"

#include "magic/refs_smr_volume_info_output_t.start.hpp"
namespace win
{
    // [struct _REFS_SMR_VOLUME_INFO_OUTPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct refs_smr_volume_info_output_t                                               
    {                                                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                             
        _m00 uint32_t                             version;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                             flags;                                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 int64_t                              size_of_randomly_writable_tier;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SizeOfRandomlyWritableTier
        _m03 int64_t                              free_space_in_randomly_writable_tier;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FreeSpaceInRandomlyWritableTier
        _m04 int64_t                              sizeof_smr_tier;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SizeofSMRTier
        _m05 int64_t                              free_space_in_smr_tier;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeSpaceInSMRTier
        _m06 int64_t                              usable_free_space_in_smr_tier;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .UsableFreeSpaceInSMRTier
        _m07 enum win::refs_smr_volume_gc_state_t volume_gc_state;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VolumeGcState
        _m08 int32_t                              volume_gc_last_status;                 //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .VolumeGcLastStatus
                                                                                       
        // Windows 11                                                                  
        //                                                                             
        _m09 uint32_t                             current_gc_band_fill_percentage;       //{ +0x0038    } | .CurrentGcBandFillPercentage
                                                                                       
        SDK_NONVOL_PROPERTIES( "_REFS_SMR_VOLUME_INFO_OUTPUT.$", 0x70, true, 0x6a7facac35b411fa );                                     
        SDK_FIXED_SIZE( refs_smr_volume_info_output_t, 0x70 );                                     
    };                                                                                 
};
#include "magic/refs_smr_volume_info_output_t.end.hpp"
SDK_VERIFY( struct win::refs_smr_volume_info_output_t, 0x70 );
