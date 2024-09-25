#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/findfirstactivationcontextsection_t.start.hpp"
namespace win
{
    // [struct _FINDFIRSTACTIVATIONCONTEXTSECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct findfirstactivationcontextsection_t       
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint32_t                 size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                 flags;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 const struct nt::guid_t* extension_guid;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExtensionGuid
        _m03 uint32_t                 id;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Id
        _m04 uint32_t                 depth;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Depth
        _m05 uint32_t                 out_flags;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OutFlags
                                                     
        SDK_MAGIC_PROPERTIES( "_FINDFIRSTACTIVATIONCONTEXTSECTION.$", 0x20, true, 0xc64ab0fc66dee18 );               
        SDK_FIXED_SIZE( findfirstactivationcontextsection_t, 0x20 );               
    };                                               
};
#include "magic/findfirstactivationcontextsection_t.end.hpp"
SDK_VERIFY( struct win::findfirstactivationcontextsection_t, 0x20 );
