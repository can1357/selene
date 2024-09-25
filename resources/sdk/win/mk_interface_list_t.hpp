#pragma once
#include <sdkgen/support_library.hpp>
#include "mk_interface_list_entry_t.hpp"

#include "magic/mk_interface_list_t.start.hpp"
namespace win
{
    // [struct _MkInterfaceList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mk_interface_list_t          
    {                                   
        using ap_ifd_list_t = sdk::array<struct win::mk_interface_list_entry_t, 1>;            
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                              
        _m00 uint32_t       dw_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 ap_ifd_list_t  ap_ifd_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .apIFDList
                                        
        SDK_MAGIC_PROPERTIES( "_MkInterfaceList.$", 0x18, true, 0x6b1e0244b67fb9d5 );            
        SDK_FIXED_SIZE( mk_interface_list_t, 0x18 );            
    };                                  
};
#include "magic/mk_interface_list_t.end.hpp"
SDK_VERIFY( struct win::mk_interface_list_t, 0x18 );
