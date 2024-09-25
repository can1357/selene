#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/switch_context_platform_id_t.hpp"

#include "magic/switch_context_platform_details_t.start.hpp"
namespace tag
{
    // [struct tagSWITCH_CONTEXT_PLATFORM_DETAILS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_context_platform_details_t              
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                
        _m00 enum win::switch_context_platform_id_t id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 struct nt::guid_t                      guid;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Guid
        _m02 uint16_t                               major;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Major
        _m03 uint16_t                               minor;  //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .Minor
        _m04 const wchar_t*                         name;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Name
                                                          
        SDK_MAGIC_PROPERTIES( "tagSWITCH_CONTEXT_PLATFORM_DETAILS.$", 0x20, true, 0x74790237b2d47532 );      
        SDK_FIXED_SIZE( switch_context_platform_details_t, 0x20 );      
    };                                                    
};
#include "magic/switch_context_platform_details_t.end.hpp"
SDK_VERIFY( struct tag::switch_context_platform_details_t, 0x20 );
