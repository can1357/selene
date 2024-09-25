#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scmregkey_t.start.hpp"
namespace win
{
    // [struct _SCMREGKEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scmregkey_t             
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t dw_entry_loc;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwEntryLoc
        _m01 uint32_t dw_hash;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwHash
        _m02 uint32_t dw_scm_id;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwScmId
                                   
        SDK_MAGIC_PROPERTIES( "_SCMREGKEY.$", 0x10, true, 0x1ad8a7a25053023d );             
        SDK_FIXED_SIZE( scmregkey_t, 0x10 );             
    };                             
};
#include "magic/scmregkey_t.end.hpp"
SDK_VERIFY( struct win::scmregkey_t, 0x10 );
