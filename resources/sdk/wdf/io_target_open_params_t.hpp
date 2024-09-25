#pragma once
#include <sdkgen/support_library.hpp>
#include "io_target_open_type_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct file_object_t;   }

#include "magic/io_target_open_params_t.start.hpp"
namespace wdf
{
    struct wdfiotarget_t;

    // [struct _WDF_IO_TARGET_OPEN_PARAMS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct io_target_open_params_t                                                          
    {                                                                                       
        using pfn_wdf_io_target_query_remove_t = sdk::function<int32_t(struct wdf::wdfiotarget_t*)>*;                              
                                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                                  
        _m00 uint32_t                                         size;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum wdf::io_target_open_type_t                  type;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 pfn_wdf_io_target_query_remove_t                 evt_io_target_query_remove;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtIoTargetQueryRemove
        _m03 sdk::function<void(struct wdf::wdfiotarget_t*)>* evt_io_target_remove_canceled;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtIoTargetRemoveCanceled
        _m04 sdk::function<void(struct wdf::wdfiotarget_t*)>* evt_io_target_remove_complete;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EvtIoTargetRemoveComplete
        _m05 struct nt::device_object_t*                      target_device_object;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TargetDeviceObject
        _m06 struct nt::file_object_t*                        target_file_object;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .TargetFileObject
        _m07 nt::unicode_view                                 target_device_name;             //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .TargetDeviceName
        _m08 uint32_t                                         desired_access;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .DesiredAccess
        _m09 uint32_t                                         share_access;                   //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .ShareAccess
        _m10 uint32_t                                         file_attributes;                //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .FileAttributes
        _m11 uint32_t                                         create_disposition;             //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .CreateDisposition
        _m12 uint32_t                                         create_options;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .CreateOptions
        _m13 void*                                            ea_buffer;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .EaBuffer
        _m14 uint32_t                                         ea_buffer_length;               //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .EaBufferLength
        _m15 int64_t*                                         allocation_size;                //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .AllocationSize
        _m16 uint32_t                                         file_information;               //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .FileInformation
        _m17 nt::unicode_view                                 file_name;                      //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .FileName
                                                                                            
        SDK_NONVOL_PROPERTIES( "_WDF_IO_TARGET_OPEN_PARAMS.$", 0x88, true, 0x1d775ae136447169 );                              
        SDK_FIXED_SIZE( io_target_open_params_t, 0x88 );                                    
    };                                                                                      
};
#include "magic/io_target_open_params_t.end.hpp"
SDK_VERIFY( struct wdf::io_target_open_params_t, 0x88 );
