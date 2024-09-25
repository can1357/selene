#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "cryptoapi_blob_t.hpp"

#include "magic/cmc_pend_info_t.start.hpp"
namespace win
{
    // [struct _CMC_PEND_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_pend_info_t                           
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 struct win::cryptoapi_blob_t pend_token;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PendToken
        _m01 struct win::filetime_t       pend_time;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PendTime
                                                     
        SDK_MAGIC_PROPERTIES( "_CMC_PEND_INFO.$", 0x18, true, 0x24f2f7ecf2179ee6 );           
        SDK_FIXED_SIZE( cmc_pend_info_t, 0x18 );           
    };                                               
};
#include "magic/cmc_pend_info_t.end.hpp"
SDK_VERIFY( struct win::cmc_pend_info_t, 0x18 );
