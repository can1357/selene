#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/guid_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GUID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct guid_t                     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                            
        _m00 struct nt::guid_t guid;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Guid
        _m01 uint32_t          oid;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Oid
        _m02 int32_t           status;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Status
        _m03 uint32_t          size;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Size
        _m04 uint32_t          flags;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_GUID.$", 0x1c, true, 0xfba63c712736242c );       
        SDK_FIXED_SIZE( guid_t, 0x1c );       
    };                                
};
#include "magic/guid_t.end.hpp"
SDK_VERIFY( struct ndis::guid_t, 0x1c );
