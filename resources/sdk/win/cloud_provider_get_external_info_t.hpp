#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cloud_provider_get_external_info_t.start.hpp"
namespace win
{
    // [struct _CLOUD_PROVIDER_GET_EXTERNAL_INFO]
    // => Windows 10 v1607
    //
    struct cloud_provider_get_external_info_t 
    {                                         
        // Windows 10 v1607                        
        //                                    
        _m00 uint32_t version;                  //{ +0x0000    } | .Version
        _m01 uint32_t flags;                    //{ +0x0004    } | .Flags
        _m02 int64_t  bytes_locally_present;    //{ +0x0008    } | .BytesLocallyPresent
        _m03 int64_t  bytes_metadata;           //{ +0x0010    } | .BytesMetadata
        _m04 uint32_t service_identity_offset;  //{ +0x0018    } | .ServiceIdentityOffset
        _m05 uint32_t service_identity_length;  //{ +0x001c    } | .ServiceIdentityLength
        _m06 uint32_t file_identity_offset;     //{ +0x0020    } | .FileIdentityOffset
        _m07 uint32_t file_identity_length;     //{ +0x0024    } | .FileIdentityLength
                                              
        SDK_MAGIC_PROPERTIES( "_CLOUD_PROVIDER_GET_EXTERNAL_INFO.$", 0x0, false, 0x6cb269b69823129d );                        
        SDK_FIXED_SIZE( cloud_provider_get_external_info_t, 0x28 );                        
    };                                        
};
#include "magic/cloud_provider_get_external_info_t.end.hpp"
SDK_VERIFY( struct win::cloud_provider_get_external_info_t, 0x28 );
