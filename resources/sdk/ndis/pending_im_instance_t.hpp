#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pending_im_instance_t.start.hpp"
namespace ndis
{
    struct pending_im_instance_t;

    // [struct _NDIS_PENDING_IM_INSTANCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pending_im_instance_t                         
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                               
        _m00 struct ndis::pending_im_instance_t* next;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 void*                               context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m02 nt::unicode_view                    name;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_PENDING_IM_INSTANCE.$", 0x20, true, 0x541955d93e83c5c6 );        
        SDK_FIXED_SIZE( pending_im_instance_t, 0x20 );        
    };                                                   
};
#include "magic/pending_im_instance_t.end.hpp"
SDK_VERIFY( struct ndis::pending_im_instance_t, 0x20 );
