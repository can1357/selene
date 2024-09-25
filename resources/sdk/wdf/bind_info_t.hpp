#pragma once
#include <sdkgen/support_library.hpp>
#include "version_t.hpp"

#include "magic/bind_info_t.start.hpp"
namespace wdf
{
    struct library_module_t;

    // [struct _WDF_BIND_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bind_info_t                                
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                            
        _m00 uint32_t                      size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 wchar_t*                      component;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Component
        _m02 struct wdf::version_t         version;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Version
        _m03 uint32_t                      func_count;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .FuncCount
        _m04 sdk::function<void()>**       func_table;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FuncTable
        _m05 struct wdf::library_module_t* module;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Module
                                                      
        SDK_NONVOL_PROPERTIES( "_WDF_BIND_INFO.$", 0x30, true, 0x3d535f397ce1521b );           
        SDK_FIXED_SIZE( bind_info_t, 0x30 );           
    };                                                
};
#include "magic/bind_info_t.end.hpp"
SDK_VERIFY( struct wdf::bind_info_t, 0x30 );
