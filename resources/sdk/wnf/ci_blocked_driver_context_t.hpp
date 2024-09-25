#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/ci_blocked_driver_context_t.start.hpp"
namespace wnf
{
    // [struct _WNF_CI_BLOCKED_DRIVER_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ci_blocked_driver_context_t                
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 struct nt::guid_t      guid;               //{ +0x0000    +0x0000    +0x0000    } | .Guid
        _m01 uint16_t               image_path_length;  //{ +0x0010    +0x0014    +0x0010    } | .ImagePathLength
        _m02 sdk::array<wchar_t, 1> image_path;         //{ +0x0012    +0x0016    +0x0012    } | .ImagePath
                                                      
        // Windows 11                                 
        //                                            
        _m03 uint32_t               policy;             //{ +0x0010    } | .Policy
                                                      
        SDK_MAGIC_PROPERTIES( "_WNF_CI_BLOCKED_DRIVER_CONTEXT.$", 0x14, true, 0xfa634af1c32d35f7 );                  
        SDK_DYNAMIC_SIZE( ci_blocked_driver_context_t );                  
    };                                                
};
#include "magic/ci_blocked_driver_context_t.end.hpp"
