#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/unmarshal_for_query_interface_t.start.hpp"
namespace win
{
    class c_ole_tls_t;
    class c_std_marshal_t;
    class unmarshal_for_query_interface_t;

    // [class UnmarshalForQueryInterface]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class unmarshal_for_query_interface_t                                     
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                    
        _m00 class win::c_ole_tls_t&                     tls;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._tls
        _m01 class win::unmarshal_for_query_interface_t* p_next;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pNext
        _m02 class win::c_std_marshal_t*                 p_standard_marshaler;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pStandardMarshaler
        _m03 struct nt::guid_t                           iid;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._iid
                                                                              
        SDK_MAGIC_PROPERTIES( "UnmarshalForQueryInterface.$", 0x28, true, 0xfa89692c39246c49 );                     
        SDK_FIXED_SIZE( unmarshal_for_query_interface_t, 0x28 );                     
    };                                                                        
};
#include "magic/unmarshal_for_query_interface_t.end.hpp"
SDK_VERIFY( class win::unmarshal_for_query_interface_t, 0x28 );
