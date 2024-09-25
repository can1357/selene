#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_logotype_audio_info_t.start.hpp"
namespace win
{
    // [struct _CERT_LOGOTYPE_AUDIO_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_logotype_audio_info_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t dw_file_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFileSize
        _m01 uint32_t dw_play_time;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwPlayTime
        _m02 uint32_t dw_channels;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwChannels
        _m03 uint32_t dw_sample_rate;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwSampleRate
        _m04 wchar_t* pwsz_language;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pwszLanguage
                                     
        SDK_MAGIC_PROPERTIES( "_CERT_LOGOTYPE_AUDIO_INFO.$", 0x18, true, 0x6fe1413ab95e9bc5 );               
        SDK_FIXED_SIZE( cert_logotype_audio_info_t, 0x18 );               
    };                               
};
#include "magic/cert_logotype_audio_info_t.end.hpp"
SDK_VERIFY( struct win::cert_logotype_audio_info_t, 0x18 );
