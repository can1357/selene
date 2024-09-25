#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_diagnostic_level_t.hpp"
#include "storage_diagnostic_target_type_t.hpp"

#include "magic/storage_diagnostic_request_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DIAGNOSTIC_REQUEST]
    // => WDK 10 (NV)
    //
    struct storage_diagnostic_request_t                            
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                                  version;      //{ +0x0000    } | .Version
        _m01 uint32_t                                  size;         //{ +0x0004    } | .Size
        _m02 enum nt::storage_diagnostic_target_type_t target_type;  //{ +0x000c    } | .TargetType
        _m03 enum nt::storage_diagnostic_level_t       level;        //{ +0x0010    } | .Level
                                                                   
        SDK_NONVOL_PROPERTIES( "_STORAGE_DIAGNOSTIC_REQUEST.$", 0x0, false, 0x6712b01f4c7f7e28 );            
        SDK_FIXED_SIZE( storage_diagnostic_request_t, 0x14 );            
    };                                                             
};
#include "magic/storage_diagnostic_request_t.end.hpp"
SDK_VERIFY( struct nt::storage_diagnostic_request_t, 0x14 );
