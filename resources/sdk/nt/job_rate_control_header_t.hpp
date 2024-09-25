#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"

#include "magic/job_rate_control_header_t.start.hpp"
namespace nt
{
    // [struct _JOB_RATE_CONTROL_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_rate_control_header_t                           
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                     
        _m00 void*                rate_control_quota_reference;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RateControlQuotaReference
        _m01 struct rtl::bitmap_t over_quota_history;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OverQuotaHistory
        _m02 uint8_t*             bit_map_buffer;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BitMapBuffer
        _m03 uint64_t             bit_map_buffer_size;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BitMapBufferSize
                                                               
        SDK_MAGIC_PROPERTIES( "_JOB_RATE_CONTROL_HEADER.$", 0x28, true, 0xadb4f5716a488ef );                             
        SDK_FIXED_SIZE( job_rate_control_header_t, 0x28 );                             
    };                                                         
};
#include "magic/job_rate_control_header_t.end.hpp"
SDK_VERIFY( struct nt::job_rate_control_header_t, 0x28 );
