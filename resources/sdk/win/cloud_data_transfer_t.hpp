#pragma once
#include <sdkgen/support_library.hpp>
#include "file_id_128_t.hpp"

#include "magic/cloud_data_transfer_t.start.hpp"
namespace win
{
    // [struct _CLOUD_DATA_TRANSFER]
    // => Windows 10 v1607
    //
    struct cloud_data_transfer_t                       
    {                                                  
        // Windows 10 v1607                            
        //                                             
        _m00 struct win::file_id_128_t target_file_id;   //{ +0x0000    } | .TargetFileId
        _m01 int64_t                   required_offset;  //{ +0x0010    } | .RequiredOffset
        _m02 int64_t                   byte_offset;      //{ +0x0018    } | .ByteOffset
        _m03 uint32_t                  required_length;  //{ +0x0020    } | .RequiredLength
        _m04 uint32_t                  length;           //{ +0x0024    } | .Length
        _m05 uint32_t                  flags;            //{ +0x0028    } | .Flags
        _m06 int32_t                   service_status;   //{ +0x002c    } | .ServiceStatus
                                                       
        SDK_MAGIC_PROPERTIES( "_CLOUD_DATA_TRANSFER.$", 0x0, false, 0xefac9767fd3d0bae );                
        SDK_FIXED_SIZE( cloud_data_transfer_t, 0x30 );                
    };                                                 
};
#include "magic/cloud_data_transfer_t.end.hpp"
SDK_VERIFY( struct win::cloud_data_transfer_t, 0x30 );
