#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/stdobjref_t.start.hpp"
namespace tag
{
    // [struct tagSTDOBJREF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stdobjref_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 uint32_t          flags;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .flags
        _m01 uint32_t          c_public_refs;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cPublicRefs
        _m02 uint64_t          oxid;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .oxid
        _m03 uint64_t          oid;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .oid
        _m04 struct nt::guid_t ipid;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ipid
                                             
        SDK_MAGIC_PROPERTIES( "tagSTDOBJREF.$", 0x28, true, 0xf9a917cd0241d013 );              
        SDK_FIXED_SIZE( stdobjref_t, 0x28 );              
    };                                       
};
#include "magic/stdobjref_t.end.hpp"
SDK_VERIFY( struct tag::stdobjref_t, 0x28 );
