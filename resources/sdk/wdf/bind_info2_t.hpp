#pragma once
#include <sdkgen/support_library.hpp>
#include "bind_info_t.hpp"

#include "magic/bind_info2_t.start.hpp"
namespace wdf
{
    // [struct _WDF_BIND_INFO2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_info2_t                                                   
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                
        _m00 struct wdf::bind_info_t v1;                                    //{ +0x0000    +0x0000    +0x0000    } | .V1
        _m01 uint32_t*               minimum_version_required;              //{ +0x0030    +0x0030    +0x0030    } | .MinimumVersionRequired
        _m02 uint8_t*                client_version_higher_than_framework;  //{ +0x0038    +0x0038    +0x0038    } | .ClientVersionHigherThanFramework
        _m03 uint32_t*               func_count_ptr;                        //{ +0x0040    +0x0040    +0x0040    } | .FuncCountPtr
        _m04 uint32_t*               struct_count_ptr;                      //{ +0x0048    +0x0048    +0x0048    } | .StructCountPtr
        _m05 uint64_t**              struct_table;                          //{ +0x0050    +0x0050    +0x0050    } | .StructTable
                                                                          
        SDK_MAGIC_PROPERTIES( "_WDF_BIND_INFO2.$", 0x58, true, 0x4cda87cda5bc66a8 );                                     
        SDK_FIXED_SIZE( bind_info2_t, 0x58 );                                     
    };                                                                    
};
#include "magic/bind_info2_t.end.hpp"
SDK_VERIFY( struct wdf::bind_info2_t, 0x58 );
