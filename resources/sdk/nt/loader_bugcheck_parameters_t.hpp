#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/loader_bugcheck_parameters_t.start.hpp"
namespace nt
{
    // [struct _LOADER_BUGCHECK_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct loader_bugcheck_parameters_t   
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t bugcheck_code;        //{ +0x0000    +0x0000    +0x0000    } | .BugcheckCode
        _m01 uint64_t bugcheck_parameter1;  //{ +0x0008    +0x0008    +0x0008    } | .BugcheckParameter1
        _m02 uint64_t bugcheck_parameter2;  //{ +0x0010    +0x0010    +0x0010    } | .BugcheckParameter2
        _m03 uint64_t bugcheck_parameter3;  //{ +0x0018    +0x0018    +0x0018    } | .BugcheckParameter3
        _m04 uint64_t bugcheck_parameter4;  //{ +0x0020    +0x0020    +0x0020    } | .BugcheckParameter4
                                          
        SDK_MAGIC_PROPERTIES( "_LOADER_BUGCHECK_PARAMETERS.$", 0x28, true, 0x4983bb75f5ef897c );                    
        SDK_FIXED_SIZE( loader_bugcheck_parameters_t, 0x28 );                    
    };                                    
};
#include "magic/loader_bugcheck_parameters_t.end.hpp"
SDK_VERIFY( struct nt::loader_bugcheck_parameters_t, 0x28 );
