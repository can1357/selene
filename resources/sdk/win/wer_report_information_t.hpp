#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wer_report_information_t.start.hpp"
namespace win
{
    struct hwnd_t;

    // [struct _WER_REPORT_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wer_report_information_t                          
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                   
        _m00 uint32_t                 dw_size;                 //{ +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 void*                    h_process;               //{ +0x0008    +0x0008    +0x0008    } | .hProcess
        _m02 sdk::array<wchar_t, 64>  wz_consent_key;          //{ +0x0010    +0x0010    +0x0010    } | .wzConsentKey
        _m03 sdk::array<wchar_t, 128> wz_friendly_event_name;  //{ +0x0090    +0x0090    +0x0090    } | .wzFriendlyEventName
        _m04 sdk::array<wchar_t, 128> wz_application_name;     //{ +0x0190    +0x0190    +0x0190    } | .wzApplicationName
        _m05 sdk::array<wchar_t, 260> wz_application_path;     //{ +0x0290    +0x0290    +0x0290    } | .wzApplicationPath
        _m06 sdk::array<wchar_t, 512> wz_description;          //{ +0x0498    +0x0498    +0x0498    } | .wzDescription
        _m07 struct win::hwnd_t*      hwnd_parent;             //{ +0x0898    +0x0898    +0x0898    } | .hwndParent
                                                             
        SDK_MAGIC_PROPERTIES( "_WER_REPORT_INFORMATION.$", 0x8a0, true, 0x170075f458e9861 );                       
        SDK_FIXED_SIZE( wer_report_information_t, 0x8a0 );                       
    };                                                       
};
#include "magic/wer_report_information_t.end.hpp"
SDK_VERIFY( struct win::wer_report_information_t, 0x8a0 );
