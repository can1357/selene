#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_logotype_image_info_t.start.hpp"
namespace win
{
    // [struct _CERT_LOGOTYPE_IMAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_logotype_image_info_t                     
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                
        _m00 uint32_t dw_logotype_image_info_choice;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwLogotypeImageInfoChoice
        _m01 uint32_t dw_file_size;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFileSize
        _m02 uint32_t dw_x_size;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwXSize
        _m03 uint32_t dw_y_size;                            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwYSize
        _m04 uint32_t dw_logotype_image_resolution_choice;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwLogotypeImageResolutionChoice
        _m05 uint32_t dw_num_bits;                          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwNumBits
        _m06 uint32_t dw_table_size;                        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwTableSize
        _m07 wchar_t* pwsz_language;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pwszLanguage
                                                          
        SDK_MAGIC_PROPERTIES( "_CERT_LOGOTYPE_IMAGE_INFO.$", 0x20, true, 0xd0b5bbbab1fa5e4c );                                    
        SDK_FIXED_SIZE( cert_logotype_image_info_t, 0x20 );                                    
    };                                                    
};
#include "magic/cert_logotype_image_info_t.end.hpp"
SDK_VERIFY( struct win::cert_logotype_image_info_t, 0x20 );
