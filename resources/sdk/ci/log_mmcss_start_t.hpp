#pragma once
#include <sdkgen/support_library.hpp>
#include "../etwi/header_t.hpp"

#include "magic/log_mmcss_start_t.start.hpp"
namespace ci
{
    // [struct _CI_LOG_MMCSS_START]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct log_mmcss_start_t              
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                
        _m00 struct etwi::header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                          
        SDK_MAGIC_PROPERTIES( "_CI_LOG_MMCSS_START.$", 0x30, true, 0xa7f136549e25e00f );       
        SDK_FIXED_SIZE( log_mmcss_start_t, 0x30 );       
    };                                    
};
#include "magic/log_mmcss_start_t.end.hpp"
SDK_VERIFY( struct ci::log_mmcss_start_t, 0x30 );
