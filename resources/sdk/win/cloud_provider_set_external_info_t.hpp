#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cloud_provider_set_external_info_t.start.hpp"
namespace win
{
    // [struct _CLOUD_PROVIDER_SET_EXTERNAL_INFO]
    // => Windows 10 v1607
    //
    struct cloud_provider_set_external_info_t
    {                                        
        // Windows 10 v1607                     
        //                                 
        _m00 uint32_t version;                 //{ +0x0000    } | .Version
        _m01 uint32_t flags;                   //{ +0x0004    } | .Flags
        _m02 int64_t  file_size;               //{ +0x0008    } | .FileSize
        _m03 int64_t  creation_time;           //{ +0x0010    } | .CreationTime
        _m04 int64_t  modified_time;           //{ +0x0018    } | .ModifiedTime
        _m05 int64_t  accessed_time;           //{ +0x0020    } | .AccessedTime
        _m06 uint32_t file_attributes;         //{ +0x0028    } | .FileAttributes
        _m07 uint32_t file_identity_offset;    //{ +0x0030    } | .FileIdentityOffset
        _m08 uint32_t file_identity_length;    //{ +0x0034    } | .FileIdentityLength
                                             
        SDK_MAGIC_PROPERTIES( "_CLOUD_PROVIDER_SET_EXTERNAL_INFO.$", 0x0, false, 0xdb619a8da07eef5b );                     
        SDK_FIXED_SIZE( cloud_provider_set_external_info_t, 0x38 );                     
    };                                       
};
#include "magic/cloud_provider_set_external_info_t.end.hpp"
SDK_VERIFY( struct win::cloud_provider_set_external_info_t, 0x38 );
