#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmc_data_info_t.start.hpp"
namespace win
{
    struct cmc_tagged_request_t;
    struct cmc_tagged_attribute_t;
    struct cmc_tagged_other_msg_t;
    struct cmc_tagged_content_info_t;

    // [struct _CMC_DATA_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_data_info_t                                                 
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m00 uint32_t                               c_tagged_attribute;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cTaggedAttribute
        _m01 struct win::cmc_tagged_attribute_t*    rg_tagged_attribute;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgTaggedAttribute
        _m02 uint32_t                               c_tagged_request;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cTaggedRequest
        _m03 struct win::cmc_tagged_request_t*      rg_tagged_request;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgTaggedRequest
        _m04 uint32_t                               c_tagged_content_info;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cTaggedContentInfo
        _m05 struct win::cmc_tagged_content_info_t* rg_tagged_content_info;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgTaggedContentInfo
        _m06 uint32_t                               c_tagged_other_msg;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cTaggedOtherMsg
        _m07 struct win::cmc_tagged_other_msg_t*    rg_tagged_other_msg;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .rgTaggedOtherMsg
                                                                           
        SDK_MAGIC_PROPERTIES( "_CMC_DATA_INFO.$", 0x40, true, 0x402a05882ad7e2c8 );                       
        SDK_FIXED_SIZE( cmc_data_info_t, 0x40 );                           
    };                                                                     
};
#include "magic/cmc_data_info_t.end.hpp"
SDK_VERIFY( struct win::cmc_data_info_t, 0x40 );
