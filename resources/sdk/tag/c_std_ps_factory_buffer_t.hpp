#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct ips_factory_buffer_vtbl_t; }

#include "magic/c_std_ps_factory_buffer_t.start.hpp"
namespace tag
{
    struct proxy_file_info_t;

    // [struct tagCStdPSFactoryBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_std_ps_factory_buffer_t                                        
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                  
        _m00 const struct win::ips_factory_buffer_vtbl_t* lp_vtbl;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpVtbl
        _m01 int32_t                                      ref_count;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefCount
        _m02 const struct tag::proxy_file_info_t**        p_proxy_file_list;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pProxyFileList
        _m03 int32_t                                      filler1;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Filler1
                                                                            
        SDK_MAGIC_PROPERTIES( "tagCStdPSFactoryBuffer.$", 0x20, true, 0x5e5e4a675e9b2c56 );                  
        SDK_FIXED_SIZE( c_std_ps_factory_buffer_t, 0x20 );                  
    };                                                                      
};
#include "magic/c_std_ps_factory_buffer_t.end.hpp"
SDK_VERIFY( struct tag::c_std_ps_factory_buffer_t, 0x20 );
