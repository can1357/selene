#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/error_object_data_t.start.hpp"
namespace win
{
    // [struct ErrorObjectData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_object_data_t                 
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                     
        _m00 uint32_t          dw_version;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t          dw_help_context;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwHelpContext
        _m02 struct nt::guid_t iid;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iid
                                               
        SDK_MAGIC_PROPERTIES( "ErrorObjectData.$", 0x18, true, 0x2cf932c3d13de060 );                
        SDK_FIXED_SIZE( error_object_data_t, 0x18 );                
    };                                         
};
#include "magic/error_object_data_t.end.hpp"
SDK_VERIFY( struct win::error_object_data_t, 0x18 );
