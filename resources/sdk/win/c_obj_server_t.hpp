#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/c_obj_server_t.start.hpp"
namespace win
{
    class c_std_identity_t;

    // [class CObjServer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_obj_server_t                           
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 class win::c_std_identity_t* p_std_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pStdID
        _m01 struct nt::guid_t            ipid;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._ipid
        _m02 uint64_t                     oxid;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._oxid
        _m03 int32_t                      c_refs;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._cRefs
                                                   
        SDK_MAGIC_PROPERTIES( "CObjServer.$", 0x30, true, 0x17daf89963d845be );         
        SDK_FIXED_SIZE( c_obj_server_t, 0x30 );         
    };                                             
};
#include "magic/c_obj_server_t.end.hpp"
SDK_VERIFY( class win::c_obj_server_t, 0x30 );
