#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_correlation_info_data_t.hpp"
#include "ndr_correlation_info_header_t.hpp"

#include "magic/ndr_correlation_info_t.start.hpp"
namespace win
{
    // [struct _NDR_CORRELATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_correlation_info_t                             
    {                                                         
        using data_t = sdk::array<struct win::ndr_correlation_info_data_t, 1>;       
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                    
        _m00 struct win::ndr_correlation_info_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 data_t                                    data;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Data
                                                              
        SDK_MAGIC_PROPERTIES( "_NDR_CORRELATION_INFO.$", 0x38, true, 0x4c3d2b39418d4e81 );       
        SDK_FIXED_SIZE( ndr_correlation_info_t, 0x38 );       
    };                                                        
};
#include "magic/ndr_correlation_info_t.end.hpp"
SDK_VERIFY( struct win::ndr_correlation_info_t, 0x38 );
