#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cmc_tagged_content_info_t.start.hpp"
namespace win
{
    // [struct _CMC_TAGGED_CONTENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_tagged_content_info_t                           
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 uint32_t                     dw_body_part_id;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwBodyPartID
        _m01 struct win::cryptoapi_blob_t encoded_content_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EncodedContentInfo
                                                               
        SDK_MAGIC_PROPERTIES( "_CMC_TAGGED_CONTENT_INFO.$", 0x18, true, 0x43c3f3ec7816796d );                     
        SDK_FIXED_SIZE( cmc_tagged_content_info_t, 0x18 );                     
    };                                                         
};
#include "magic/cmc_tagged_content_info_t.end.hpp"
SDK_VERIFY( struct win::cmc_tagged_content_info_t, 0x18 );
