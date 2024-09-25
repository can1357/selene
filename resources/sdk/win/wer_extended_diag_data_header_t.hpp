#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wer_extended_diag_data_header_t.start.hpp"
namespace win
{
    // [struct _WER_EXTENDED_DIAG_DATA_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wer_extended_diag_data_header_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t signature;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Signature
                                          
        SDK_MAGIC_PROPERTIES( "_WER_EXTENDED_DIAG_DATA_HEADER.$", 0x8, true, 0x4642e5681b2c5611 );          
        SDK_FIXED_SIZE( wer_extended_diag_data_header_t, 0x8 );          
    };                                    
};
#include "magic/wer_extended_diag_data_header_t.end.hpp"
SDK_VERIFY( struct win::wer_extended_diag_data_header_t, 0x8 );
