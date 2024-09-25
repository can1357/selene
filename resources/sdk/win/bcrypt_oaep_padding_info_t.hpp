#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_oaep_padding_info_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_OAEP_PADDING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_oaep_padding_info_t  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                             
        _m00 const wchar_t* psz_alg_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszAlgId
        _m01 uint8_t*       pb_label;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbLabel
        _m02 uint32_t       cb_label;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbLabel
                                       
        SDK_MAGIC_PROPERTIES( "_BCRYPT_OAEP_PADDING_INFO.$", 0x18, true, 0x66dc3da76bca4cbe );           
        SDK_FIXED_SIZE( bcrypt_oaep_padding_info_t, 0x18 );           
    };                                 
};
#include "magic/bcrypt_oaep_padding_info_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_oaep_padding_info_t, 0x18 );
