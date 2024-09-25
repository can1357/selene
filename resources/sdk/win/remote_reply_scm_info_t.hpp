#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../tag/comversion_t.hpp"

namespace tag { struct dualstringarray_t; }

#include "magic/remote_reply_scm_info_t.start.hpp"
namespace win
{
    // [struct _REMOTE_REPLY_SCM_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct remote_reply_scm_info_t                             
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 uint64_t                       oxid;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Oxid
        _m01 struct tag::dualstringarray_t* pdsa_oxid_bindings;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdsaOxidBindings
        _m02 struct nt::guid_t              ipid_rem_unknown;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ipidRemUnknown
        _m03 uint32_t                       authn_hint;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .authnHint
        _m04 struct tag::comversion_t       server_version;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .serverVersion
                                                               
        SDK_MAGIC_PROPERTIES( "_REMOTE_REPLY_SCM_INFO.$", 0x28, true, 0xaaa723727dd08432 );                   
        SDK_FIXED_SIZE( remote_reply_scm_info_t, 0x28 );                   
    };                                                         
};
#include "magic/remote_reply_scm_info_t.end.hpp"
SDK_VERIFY( struct win::remote_reply_scm_info_t, 0x28 );
