#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/ctxcommonhdr_t.start.hpp"
namespace tag
{
    // [struct tagCTXCOMMONHDR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctxcommonhdr_t                     
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 struct nt::guid_t context_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextId
        _m01 uint32_t          flags;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m02 uint32_t          dw_num_extents;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwNumExtents
        _m03 uint32_t          cb_extents;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .cbExtents
        _m04 uint32_t          mshl_flags;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MshlFlags
                                              
        SDK_MAGIC_PROPERTIES( "tagCTXCOMMONHDR.$", 0x24, true, 0x48b0e05a8fb7a580 );               
        SDK_FIXED_SIZE( ctxcommonhdr_t, 0x24 );               
    };                                        
};
#include "magic/ctxcommonhdr_t.end.hpp"
SDK_VERIFY( struct tag::ctxcommonhdr_t, 0x24 );
