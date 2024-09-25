#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_timestamp_context_t.start.hpp"
namespace win
{
    struct crypt_timestamp_info_t;

    // [struct _CRYPT_TIMESTAMP_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_timestamp_context_t                          
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                    
        _m00 uint32_t                            cb_encoded;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbEncoded
        _m01 uint8_t*                            pb_encoded;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbEncoded
        _m02 struct win::crypt_timestamp_info_t* p_time_stamp;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pTimeStamp
                                                              
        SDK_MAGIC_PROPERTIES( "_CRYPT_TIMESTAMP_CONTEXT.$", 0x18, true, 0x5b847676b1cd09a5 );             
        SDK_FIXED_SIZE( crypt_timestamp_context_t, 0x18 );             
    };                                                        
};
#include "magic/crypt_timestamp_context_t.end.hpp"
SDK_VERIFY( struct win::crypt_timestamp_context_t, 0x18 );
