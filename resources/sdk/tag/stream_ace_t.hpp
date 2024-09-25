#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/access_mode_t.hpp"
#include "../win/trustee_form_t.hpp"
#include "../win/trustee_type_t.hpp"

#include "magic/stream_ace_t.start.hpp"
namespace tag
{
    struct stream_sid_t;

    // [struct tagSTREAM_ACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stream_ace_t                                       
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                    
        _m00 uint32_t                  grf_access_permissions;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .grfAccessPermissions
        _m01 enum win::access_mode_t   grf_access_mode;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .grfAccessMode
        _m02 enum win::trustee_type_t  trustee_type;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TrusteeType
        _m03 enum win::trustee_form_t  trustee_form;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TrusteeForm
        _m04 wchar_t*                  p_trustee_name;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pTrusteeName
        _m05 struct tag::stream_sid_t* p_sid;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pSID
                                                              
        SDK_MAGIC_PROPERTIES( "tagSTREAM_ACE.$", 0x20, true, 0xc751e4d344b50d64 );                       
        SDK_FIXED_SIZE( stream_ace_t, 0x20 );                       
    };                                                        
};
#include "magic/stream_ace_t.end.hpp"
SDK_VERIFY( struct tag::stream_ace_t, 0x20 );
