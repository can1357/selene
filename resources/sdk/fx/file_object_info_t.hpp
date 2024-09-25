#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/tri_state_t.hpp"
#include "file_object_file_close_t.hpp"
#include "../wdf/fileobject_class_t.hpp"
#include "file_object_file_create_t.hpp"
#include "../wdf/object_attributes_t.hpp"
#include "file_object_file_cleanup_t.hpp"
#include "cx_file_object_file_create_t.hpp"

#include "magic/file_object_info_t.start.hpp"
namespace fx
{
    struct cx_device_info_t;

    // [struct FxFileObjectInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_object_info_t                                                  
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                     
        _m00 nt::list_entry_t                       list_entry;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 class fx::file_object_file_create_t    evt_file_create;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtFileCreate
        _m02 class fx::cx_file_object_file_create_t evt_cx_file_create;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EvtCxFileCreate
        _m03 class fx::file_object_file_cleanup_t   evt_file_cleanup;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EvtFileCleanup
        _m04 class fx::file_object_file_close_t     evt_file_close;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EvtFileClose
        _m05 enum wdf::fileobject_class_t           file_object_class;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FileObjectClass
        _m06 struct wdf::object_attributes_t        attributes;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Attributes
        _m07 enum wdf::tri_state_t                  auto_forward_cleanup_close;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .AutoForwardCleanupClose
        _m08 uint8_t                                class_extension;             //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .ClassExtension
        _m09 struct fx::cx_device_info_t*           cx_device_info;              //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .CxDeviceInfo
                                                                               
        SDK_MAGIC_PROPERTIES( "FxFileObjectInfo.$", 0xa0, true, 0x6c2133167d7a23b6 );                           
        SDK_FIXED_SIZE( file_object_info_t, 0xa0 );                            
    };                                                                         
};
#include "magic/file_object_info_t.end.hpp"
SDK_VERIFY( struct fx::file_object_info_t, 0xa0 );
