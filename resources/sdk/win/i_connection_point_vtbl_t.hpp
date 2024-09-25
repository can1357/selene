#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_connection_point_vtbl_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_connection_point_t;
    struct i_enum_connections_t;
    struct i_connection_point_container_t;

    // [struct IConnectionPointVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_connection_point_vtbl_t                                          
    {                                                                         
        using query_interface_t =                sdk::function<sdk::hresult(struct win::i_connection_point_t*, const struct nt::guid_t*, void**)>*;                               
        using add_ref_t =                        sdk::function<uint32_t(struct win::i_connection_point_t*)>*;                               
        using release_t =                        sdk::function<uint32_t(struct win::i_connection_point_t*)>*;                               
        using get_connection_interface_t =       sdk::function<sdk::hresult(struct win::i_connection_point_t*, struct nt::guid_t*)>*;                               
        using get_connection_point_container_t = sdk::function<sdk::hresult(struct win::i_connection_point_t*, struct win::i_connection_point_container_t**)>*;                               
        using advise_t =                         sdk::function<sdk::hresult(struct win::i_connection_point_t*, struct win::i_unknown_t*, uint32_t*)>*;                               
        using unadvise_t =                       sdk::function<sdk::hresult(struct win::i_connection_point_t*, uint32_t)>*;                               
        using enum_connections_t =               sdk::function<sdk::hresult(struct win::i_connection_point_t*, struct win::i_enum_connections_t**)>*;                               
                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                    
        _m00 query_interface_t                 query_interface;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                         add_ref;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                         release;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_connection_interface_t        get_connection_interface;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetConnectionInterface
        _m04 get_connection_point_container_t  get_connection_point_container;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetConnectionPointContainer
        _m05 advise_t                          advise;                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Advise
        _m06 unadvise_t                        unadvise;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Unadvise
        _m07 enum_connections_t                enum_connections;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EnumConnections
                                                                              
        SDK_MAGIC_PROPERTIES( "IConnectionPointVtbl.$", 0x40, true, 0x43809eed7feb351a );                               
        SDK_FIXED_SIZE( i_connection_point_vtbl_t, 0x40 );                               
    };                                                                        
};
#include "magic/i_connection_point_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_connection_point_vtbl_t, 0x40 );
