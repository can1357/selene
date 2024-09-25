#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_correlation_info_data_t.start.hpp"
namespace win
{
    // [struct _NDR_CORRELATION_INFO_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_correlation_info_data_t      
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                  
        _m00 uint8_t*       p_memory_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pMemoryObject
        _m01 const uint8_t* p_corr_desc;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCorrDesc
        _m02 int64_t        value;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Value
        _m03 int32_t        check_kind;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CheckKind
        _m04 int32_t        reserve64;        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Reserve64
                                            
        SDK_MAGIC_PROPERTIES( "_NDR_CORRELATION_INFO_DATA.$", 0x20, true, 0xd93c76686d49723b );                
        SDK_FIXED_SIZE( ndr_correlation_info_data_t, 0x20 );                
    };                                      
};
#include "magic/ndr_correlation_info_data_t.end.hpp"
SDK_VERIFY( struct win::ndr_correlation_info_data_t, 0x20 );
