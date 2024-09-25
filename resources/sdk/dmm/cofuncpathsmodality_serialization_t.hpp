#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cofuncpathsmodality_serialization_t.start.hpp"
namespace dmm
{
    // [struct _DMM_COFUNCPATHSMODALITY_SERIALIZATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cofuncpathsmodality_serialization_t                       
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                           
        _m00 uint8_t                 num_paths_from_source;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumPathsFromSource
        _m01 sdk::array<uint32_t, 1> path_and_target_mode_set_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PathAndTargetModeSetOffset
                                                                     
        SDK_MAGIC_PROPERTIES( "_DMM_COFUNCPATHSMODALITY_SERIALIZATION.$", 0x8, true, 0x98342fa9fe90543 );                                
        SDK_FIXED_SIZE( cofuncpathsmodality_serialization_t, 0x8 );                                
    };                                                               
};
#include "magic/cofuncpathsmodality_serialization_t.end.hpp"
SDK_VERIFY( struct dmm::cofuncpathsmodality_serialization_t, 0x8 );
