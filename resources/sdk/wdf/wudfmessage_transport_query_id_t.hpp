#pragma once
#include <sdkgen/support_library.hpp>
#include "wudfmessage_header_t.hpp"

#include "magic/wudfmessage_transport_query_id_t.start.hpp"
namespace wdf
{
    struct wudf_devnode_context_t;

    // [struct _WUDFMESSAGE_TRANSPORT_QUERY_ID]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_transport_query_id_t                      
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                       
        _m00 struct wdf::wudfmessage_header_t    header;           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wdf::wudf_devnode_context_t* devnode_context;  //{ +0x0008    +0x0008    +0x0008    } | .DevnodeContext
        _m02 uint32_t                            id;               //{ +0x0010    +0x0010    +0x0010    } | .Id
        _m03 uint32_t                            buffer_size;      //{ +0x0014    +0x0014    +0x0014    } | .BufferSize
                                                                 
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_TRANSPORT_QUERY_ID.$", 0x18, true, 0x4d9d9bbd12e9d02 );                
        SDK_FIXED_SIZE( wudfmessage_transport_query_id_t, 0x18 );                
    };                                                           
};
#include "magic/wudfmessage_transport_query_id_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_transport_query_id_t, 0x18 );
