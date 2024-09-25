#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_imageload_in_pagefile_info_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_imageload_in_pagefile_info_t                       
    {                                                                  
        union u0_flags_t                                               
        {                                                              
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                         
            _m03 uint16_t flags;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
            _m04 uint1_t  active_data_reference;                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ActiveDataReference
            _m05 uint1_t  device_ejectable;                              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DeviceEjectable
            _m06 uint1_t  writable_handles;                              //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .WritableHandles
                                                                       
            SDK_MAGIC_PROPERTIES( "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.Flags.$", 0x2, true, 0x646bdfc94594b65b );                                             
            SDK_FIXED_SIZE( u0_flags_t, 0x2 );                                             
        };                                                             
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                             
        _m00 void*                              file_object;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileObject
        _m01 uint32_t                           device_characteristics;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceCharacteristics
        _m02 uint16_t                           file_characteristics;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FileCharacteristics
        _m07 u0_flags_t                         flags;                   //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Flags
                                                                       
        SDK_MAGIC_PROPERTIES( "_PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO.$", 0x10, true, 0x6fafc67b794319d3 );                       
        SDK_FIXED_SIZE( perfinfo_imageload_in_pagefile_info_t, 0x10 );                       
    };                                                                 
};
#include "magic/perfinfo_imageload_in_pagefile_info_t.end.hpp"
SDK_VERIFY( union win::perfinfo_imageload_in_pagefile_info_t::u0_flags_t, 0x2 );
SDK_VERIFY( struct win::perfinfo_imageload_in_pagefile_info_t, 0x10 );
