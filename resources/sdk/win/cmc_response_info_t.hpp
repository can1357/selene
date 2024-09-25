#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmc_response_info_t.start.hpp"
namespace win
{
    struct cmc_tagged_attribute_t;
    struct cmc_tagged_other_msg_t;
    struct cmc_tagged_content_info_t;

    // [struct _CMC_RESPONSE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_response_info_t                                             
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m00 uint32_t                               c_tagged_attribute;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cTaggedAttribute
        _m01 struct win::cmc_tagged_attribute_t*    rg_tagged_attribute;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgTaggedAttribute
        _m02 uint32_t                               c_tagged_content_info;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cTaggedContentInfo
        _m03 struct win::cmc_tagged_content_info_t* rg_tagged_content_info;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgTaggedContentInfo
        _m04 uint32_t                               c_tagged_other_msg;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cTaggedOtherMsg
        _m05 struct win::cmc_tagged_other_msg_t*    rg_tagged_other_msg;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgTaggedOtherMsg
                                                                           
        SDK_MAGIC_PROPERTIES( "_CMC_RESPONSE_INFO.$", 0x30, true, 0x742193436585d7be );                       
        SDK_FIXED_SIZE( cmc_response_info_t, 0x30 );                       
    };                                                                     
};
#include "magic/cmc_response_info_t.end.hpp"
SDK_VERIFY( struct win::cmc_response_info_t, 0x30 );
