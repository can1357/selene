#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_logotype_data_t.start.hpp"
namespace win
{
    struct cert_logotype_audio_t;
    struct cert_logotype_image_t;

    // [struct _CERT_LOGOTYPE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_logotype_data_t                                   
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                        
        _m00 uint32_t                           c_logotype_image;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cLogotypeImage
        _m01 struct win::cert_logotype_image_t* rg_logotype_image;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgLogotypeImage
        _m02 uint32_t                           c_logotype_audio;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cLogotypeAudio
        _m03 struct win::cert_logotype_audio_t* rg_logotype_audio;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgLogotypeAudio
                                                                  
        SDK_MAGIC_PROPERTIES( "_CERT_LOGOTYPE_DATA.$", 0x20, true, 0xfc2371f90f879bc5 );                  
        SDK_FIXED_SIZE( cert_logotype_data_t, 0x20 );                  
    };                                                            
};
#include "magic/cert_logotype_data_t.end.hpp"
SDK_VERIFY( struct win::cert_logotype_data_t, 0x20 );
