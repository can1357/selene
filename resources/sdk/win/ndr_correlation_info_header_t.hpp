#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_correlation_info_header_t.start.hpp"
namespace win
{
    struct ndr_correlation_info_t;

    // [struct _NDR_CORRELATION_INFO_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_correlation_info_header_t                   
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                 
        _m00 struct win::ndr_correlation_info_t* p_cache;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pCache
        _m01 struct win::ndr_correlation_info_t* p_info;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pInfo
        _m02 int32_t                             data_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataSize
        _m03 int32_t                             data_len;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DataLen
                                                           
        SDK_MAGIC_PROPERTIES( "_NDR_CORRELATION_INFO_HEADER.$", 0x18, true, 0x272da633d6cc57fa );          
        SDK_FIXED_SIZE( ndr_correlation_info_header_t, 0x18 );          
    };                                                     
};
#include "magic/ndr_correlation_info_header_t.end.hpp"
SDK_VERIFY( struct win::ndr_correlation_info_header_t, 0x18 );
