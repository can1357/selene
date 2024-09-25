#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "fileobject_class_t.hpp"
#include "fileobject_config_t.hpp"
#include "object_attributes_t.hpp"

#include "magic/file_object_init_t.start.hpp"
namespace wdf
{
    // [struct FileObjectInit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_object_init_t                                           
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m00 enum wdf::fileobject_class_t    _class;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Class
        _m01 struct wdf::object_attributes_t attributes;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Attributes
        _m02 struct wdf::fileobject_config_t callbacks;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Callbacks
        _m03 enum wdf::tri_state_t           auto_forward_cleanup_close;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .AutoForwardCleanupClose
        _m04 uint8_t                         set;                         //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .Set
                                                                        
        SDK_MAGIC_PROPERTIES( "FileObjectInit.$", 0x70, true, 0xb828756184af51c1 );                           
        SDK_FIXED_SIZE( file_object_init_t, 0x70 );                           
    };                                                                  
};
#include "magic/file_object_init_t.end.hpp"
SDK_VERIFY( struct wdf::file_object_init_t, 0x70 );
