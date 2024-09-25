#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/jobobject_wake_filter_t.hpp"

#include "magic/jobobject_freeze_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_FREEZE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_freeze_information_t                        
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                       
        _m00 uint32_t                           flags;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t                            freeze_operation;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .FreezeOperation
        _m02 uint1_t                            filter_operation;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .FilterOperation
        _m03 uint1_t                            swap_operation;    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .SwapOperation
        _m04 uint8_t                            freeze;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Freeze
        _m05 uint8_t                            swap;              //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .Swap
        _m06 struct nt::jobobject_wake_filter_t wake_filter;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WakeFilter
                                                                 
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_FREEZE_INFORMATION.$", 0x10, true, 0x54e193a22340013b );                 
        SDK_FIXED_SIZE( jobobject_freeze_information_t, 0x10 );                 
    };                                                           
};
#include "magic/jobobject_freeze_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_freeze_information_t, 0x10 );
