#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cmc_tagged_other_msg_t.start.hpp"
namespace win
{
    // [struct _CMC_TAGGED_OTHER_MSG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_tagged_other_msg_t                         
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 uint32_t                     dw_body_part_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwBodyPartID
        _m01 char*                        psz_obj_id;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszObjId
        _m02 struct win::cryptoapi_blob_t value;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Value
                                                          
        SDK_MAGIC_PROPERTIES( "_CMC_TAGGED_OTHER_MSG.$", 0x20, true, 0x70a7a6e122314b78 );                
        SDK_FIXED_SIZE( cmc_tagged_other_msg_t, 0x20 );                
    };                                                    
};
#include "magic/cmc_tagged_other_msg_t.end.hpp"
SDK_VERIFY( struct win::cmc_tagged_other_msg_t, 0x20 );
