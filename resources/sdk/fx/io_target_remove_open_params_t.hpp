#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/io_target_open_type_t.hpp"

#include "magic/io_target_remove_open_params_t.start.hpp"
namespace fx
{
    // [struct FxIoTargetRemoveOpenParams]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_target_remove_open_params_t                            
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                           
        _m00 nt::unicode_view                target_device_name;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetDeviceName
        _m01 enum wdf::io_target_open_type_t open_type;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OpenType
        _m02 uint32_t                        desired_access;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DesiredAccess
        _m03 uint32_t                        share_access;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ShareAccess
        _m04 uint32_t                        file_attributes;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .FileAttributes
        _m05 uint32_t                        create_disposition;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CreateDisposition
        _m06 uint32_t                        create_options;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .CreateOptions
        _m07 void*                           ea_buffer;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EaBuffer
        _m08 uint32_t                        ea_buffer_length;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EaBufferLength
        _m09 int64_t                         allocation_size;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AllocationSize
        _m10 int64_t*                        allocation_size_pointer;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AllocationSizePointer
                                                                     
        SDK_MAGIC_PROPERTIES( "FxIoTargetRemoveOpenParams.$", 0x48, true, 0x3138d2cd63e297b7 );                        
        SDK_FIXED_SIZE( io_target_remove_open_params_t, 0x48 );                        
    };                                                               
};
#include "magic/io_target_remove_open_params_t.end.hpp"
SDK_VERIFY( struct fx::io_target_remove_open_params_t, 0x48 );
