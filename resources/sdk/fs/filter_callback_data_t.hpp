#pragma once
#include <sdkgen/support_library.hpp>
#include "filter_parameters_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct file_object_t;   }

#include "magic/filter_callback_data_t.start.hpp"
namespace fs
{
    // [struct _FS_FILTER_CALLBACK_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct filter_callback_data_t                                          
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                 
        _m00 uint32_t                      size_of_fs_filter_callback_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SizeOfFsFilterCallbackData
        _m01 uint8_t                       operation;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Operation
        _m02 struct nt::device_object_t*   device_object;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m03 struct nt::file_object_t*     file_object;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileObject
        _m04 union fs::filter_parameters_t parameters;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameters
                                                                           
        SDK_NONVOL_PROPERTIES( "_FS_FILTER_CALLBACK_DATA.$", 0x40, true, 0x1d0c4e51e70f0f88 );                                
        SDK_FIXED_SIZE( filter_callback_data_t, 0x40 );                                
    };                                                                     
};
#include "magic/filter_callback_data_t.end.hpp"
SDK_VERIFY( struct fs::filter_callback_data_t, 0x40 );
