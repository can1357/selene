#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_ui_policy_t.start.hpp"
namespace win
{
    // [struct __NCRYPT_UI_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_ui_policy_t                  
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                     
        _m00 uint32_t       dw_version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 uint32_t       dw_flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 const wchar_t* psz_creation_title;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszCreationTitle
        _m03 const wchar_t* psz_friendly_name;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pszFriendlyName
        _m04 const wchar_t* psz_description;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pszDescription
                                               
        SDK_MAGIC_PROPERTIES( "__NCRYPT_UI_POLICY.$", 0x20, true, 0x9668478e0fa673ac );                   
        SDK_FIXED_SIZE( ncrypt_ui_policy_t, 0x20 );                   
    };                                         
};
#include "magic/ncrypt_ui_policy_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_ui_policy_t, 0x20 );
