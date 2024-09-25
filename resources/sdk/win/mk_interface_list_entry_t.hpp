#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct interface_data_t; }

#include "magic/mk_interface_list_entry_t.start.hpp"
namespace win
{
    // [struct _MkInterfaceListEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mk_interface_list_entry_t                                     
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                               
        _m00 struct tag::interface_data_t* p_ifd;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pIFD
        _m01 int32_t                       f_registered_by_app_container;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fRegisteredByAppContainer
                                                                         
        SDK_MAGIC_PROPERTIES( "_MkInterfaceListEntry.$", 0x10, true, 0x8f409b4c9dba9413 );                              
        SDK_FIXED_SIZE( mk_interface_list_entry_t, 0x10 );                              
    };                                                                   
};
#include "magic/mk_interface_list_entry_t.end.hpp"
SDK_VERIFY( struct win::mk_interface_list_entry_t, 0x10 );
