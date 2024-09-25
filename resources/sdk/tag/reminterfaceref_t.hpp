#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/reminterfaceref_t.start.hpp"
namespace tag
{
    // [struct tagREMINTERFACEREF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reminterfaceref_t                  
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 struct nt::guid_t ipid;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ipid
        _m01 uint32_t          c_public_refs;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cPublicRefs
        _m02 uint32_t          c_private_refs;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cPrivateRefs
                                              
        SDK_MAGIC_PROPERTIES( "tagREMINTERFACEREF.$", 0x18, true, 0x3703bf8d2e72936e );               
        SDK_FIXED_SIZE( reminterfaceref_t, 0x18 );               
    };                                        
};
#include "magic/reminterfaceref_t.end.hpp"
SDK_VERIFY( struct tag::reminterfaceref_t, 0x18 );
