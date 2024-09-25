#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"

#include "magic/cloud_provider_message_t.start.hpp"
namespace win
{
    // [struct _CLOUD_PROVIDER_MESSAGE]
    // => Windows 10 v1607
    //
    struct cloud_provider_message_t                                             
    {                                                                           
        struct u0_fetch_data_t                                                  
        {                                                                       
            // Windows 10 v1607                                                 
            //                                                                  
            _m02 struct win::file_id_128_t file_id;                               //{ +0x0000    } | .FileId
            _m03 int64_t                   containing_offset;                     //{ +0x0010    } | .ContainingOffset
            _m04 int64_t                   containing_length;                     //{ +0x0018    } | .ContainingLength
            _m05 int64_t                   required_offset;                       //{ +0x0020    } | .RequiredOffset
            _m06 uint32_t                  required_length;                       //{ +0x0028    } | .RequiredLength
            _m07 uint32_t                  flags;                                 //{ +0x002c    } | .Flags
            _m08 uint32_t                  alignment;                             //{ +0x0030    } | .Alignment
            _m09 uint32_t                  file_identity_offset;                  //{ +0x0034    } | .FileIdentityOffset
            _m10 uint32_t                  file_identity_length;                  //{ +0x0038    } | .FileIdentityLength
            _m11 uint32_t                  service_identity_offset;               //{ +0x003c    } | .ServiceIdentityOffset
            _m12 uint32_t                  service_identity_length;               //{ +0x0040    } | .ServiceIdentityLength
                                                                                
            SDK_MAGIC_PROPERTIES( "_CLOUD_PROVIDER_MESSAGE.FetchData.$", 0x0, false, 0x5bfcee9f56ccb1d5 );                                     
            SDK_FIXED_SIZE( u0_fetch_data_t, 0x48 );                                     
        };                                                                      
                                                                                
        // Windows 10 v1607                                                     
        //                                                                      
        _m00 uint32_t                                              version;       //{ +0x0000    } | .Version
        _m01 uint32_t                                              message_code;  //{ +0x0004    } | .MessageCode
        _m13 u0_fetch_data_t                                       fetch_data;    //{ +0x0008    } | .FetchData
                                                                                
        SDK_MAGIC_PROPERTIES( "_CLOUD_PROVIDER_MESSAGE.$", 0x0, false, 0x34c363f2af7d3619 );             
        SDK_FIXED_SIZE( cloud_provider_message_t, 0x50 );                       
    };                                                                          
};
#include "magic/cloud_provider_message_t.end.hpp"
SDK_VERIFY( struct win::cloud_provider_message_t::u0_fetch_data_t, 0x48 );
SDK_VERIFY( struct win::cloud_provider_message_t, 0x50 );
