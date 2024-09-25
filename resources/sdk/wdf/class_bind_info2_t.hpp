#pragma once
#include <sdkgen/support_library.hpp>
#include "class_bind_info_t.hpp"

#include "magic/class_bind_info2_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CLASS_BIND_INFO2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct class_bind_info2_t                                                   
    {                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                      
        _m00 struct wdf::class_bind_info_t v1;                                    //{ +0x0000    +0x0000    +0x0000    } | .V1
        _m01 uint32_t*                     minimum_version_required;              //{ +0x0050    +0x0050    +0x0050    } | .MinimumVersionRequired
        _m02 uint8_t*                      client_version_higher_than_framework;  //{ +0x0058    +0x0058    +0x0058    } | .ClientVersionHigherThanFramework
        _m03 uint32_t*                     func_count_ptr;                        //{ +0x0060    +0x0060    +0x0060    } | .FuncCountPtr
        _m04 uint32_t*                     struct_count_ptr;                      //{ +0x0068    +0x0068    +0x0068    } | .StructCountPtr
        _m05 uint64_t**                    struct_table;                          //{ +0x0070    +0x0070    +0x0070    } | .StructTable
                                                                                
        SDK_MAGIC_PROPERTIES( "_WDF_CLASS_BIND_INFO2.$", 0x78, true, 0x96d0bc694ee3e598 );                                     
        SDK_FIXED_SIZE( class_bind_info2_t, 0x78 );                                     
    };                                                                          
};
#include "magic/class_bind_info2_t.end.hpp"
SDK_VERIFY( struct wdf::class_bind_info2_t, 0x78 );
