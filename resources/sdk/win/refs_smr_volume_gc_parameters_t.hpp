#pragma once
#include <sdkgen/support_library.hpp>
#include "refs_smr_volume_gc_action_t.hpp"
#include "refs_smr_volume_gc_method_t.hpp"

#include "magic/refs_smr_volume_gc_parameters_t.start.hpp"
namespace win
{
    // [struct _REFS_SMR_VOLUME_GC_PARAMETERS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct refs_smr_volume_gc_parameters_t                            
    {                                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                            
        _m00 uint32_t                              version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                              flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum win::refs_smr_volume_gc_action_t action;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Action
        _m03 enum win::refs_smr_volume_gc_method_t method;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Method
        _m04 uint32_t                              io_granularity;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoGranularity
        _m05 uint32_t                              compression_format;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .CompressionFormat
                                                                      
        SDK_NONVOL_PROPERTIES( "_REFS_SMR_VOLUME_GC_PARAMETERS.$", 0x58, true, 0xff200c2f0d99d4e2 );                   
        SDK_FIXED_SIZE( refs_smr_volume_gc_parameters_t, 0x58 );                   
    };                                                                
};
#include "magic/refs_smr_volume_gc_parameters_t.end.hpp"
SDK_VERIFY( struct win::refs_smr_volume_gc_parameters_t, 0x58 );
