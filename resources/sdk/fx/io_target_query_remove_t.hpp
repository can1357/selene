#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfiotarget_t; }

#include "magic/io_target_query_remove_t.start.hpp"
namespace fx
{
    // [struct FxIoTargetQueryRemove]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_target_query_remove_t                     
    {                                                   
        using pfn_wdf_io_target_query_remove_t = sdk::function<int32_t(struct wdf::wdfiotarget_t*)>*;         
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                              
        _m00 pfn_wdf_io_target_query_remove_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                        
        SDK_MAGIC_PROPERTIES( "FxIoTargetQueryRemove.$", 0x8, true, 0x240c6cd8ca112003 );         
        SDK_FIXED_SIZE( io_target_query_remove_t, 0x8 );         
    };                                                  
};
#include "magic/io_target_query_remove_t.end.hpp"
SDK_VERIFY( struct fx::io_target_query_remove_t, 0x8 );
