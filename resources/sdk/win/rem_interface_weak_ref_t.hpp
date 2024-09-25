#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/rem_interface_weak_ref_t.start.hpp"
namespace win
{
    // [struct RemInterfaceWeakRef]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rem_interface_weak_ref_t           
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 struct nt::guid_t ipid;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ipid
        _m01 uint32_t          c_public_refs;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cPublicRefs
        _m02 uint32_t          c_private_refs;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cPrivateRefs
                                              
        SDK_MAGIC_PROPERTIES( "RemInterfaceWeakRef.$", 0x18, true, 0xfa79b4c73c26128e );               
        SDK_FIXED_SIZE( rem_interface_weak_ref_t, 0x18 );               
    };                                        
};
#include "magic/rem_interface_weak_ref_t.end.hpp"
SDK_VERIFY( struct win::rem_interface_weak_ref_t, 0x18 );
