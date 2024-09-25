#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsrtl_common_fcb_header_t.start.hpp"
namespace nt
{
    struct eresource_t;

    // [struct _FSRTL_COMMON_FCB_HEADER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsrtl_common_fcb_header_t                     
    {                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 int16_t                 node_type_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                 node_byte_size;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NodeByteSize
        _m02 uint8_t                 flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m03 uint8_t                 is_fast_io_possible;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .IsFastIoPossible
        _m04 uint8_t                 flags2;               //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Flags2
        _m05 uint4_t                 version;              //{ +0x0007@4  +0x0007@4  +0x0007@4  +0x0007@4  } | .Version
        _m06 struct nt::eresource_t* resource;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Resource
        _m07 struct nt::eresource_t* paging_io_resource;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PagingIoResource
        _m08 int64_t                 allocation_size;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllocationSize
        _m09 int64_t                 file_size;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FileSize
        _m10 int64_t                 valid_data_length;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ValidDataLength
                                                         
        SDK_NONVOL_PROPERTIES( "_FSRTL_COMMON_FCB_HEADER.$", 0x30, true, 0xaba76d5aff3656e0 );                    
        SDK_FIXED_SIZE( fsrtl_common_fcb_header_t, 0x30 );                    
    };                                                   
};
#include "magic/fsrtl_common_fcb_header_t.end.hpp"
SDK_VERIFY( struct nt::fsrtl_common_fcb_header_t, 0x30 );
