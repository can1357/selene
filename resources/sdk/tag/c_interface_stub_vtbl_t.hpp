#pragma once
#include <sdkgen/support_library.hpp>
#include "c_interface_stub_header_t.hpp"
#include "../win/i_rpc_stub_buffer_vtbl_t.hpp"

#include "magic/c_interface_stub_vtbl_t.start.hpp"
namespace tag
{
    // [struct tagCInterfaceStubVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_interface_stub_vtbl_t                        
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                
        _m00 struct tag::c_interface_stub_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .header
        _m01 struct win::i_rpc_stub_buffer_vtbl_t  vtbl;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Vtbl
                                                          
        SDK_MAGIC_PROPERTIES( "tagCInterfaceStubVtbl.$", 0x70, true, 0x32c13497b2e806d0 );       
        SDK_FIXED_SIZE( c_interface_stub_vtbl_t, 0x70 );       
    };                                                    
};
#include "magic/c_interface_stub_vtbl_t.end.hpp"
SDK_VERIFY( struct tag::c_interface_stub_vtbl_t, 0x70 );
