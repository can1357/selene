#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_connection_point_container_vtbl_t.start.hpp"
namespace win
{
    struct i_connection_point_t;
    struct i_enum_connection_points_t;
    struct i_connection_point_container_t;

    // [struct IConnectionPointContainerVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_connection_point_container_vtbl_t                
    {                                                         
        using query_interface_t =        sdk::function<sdk::hresult(struct win::i_connection_point_container_t*, const struct nt::guid_t*, void**)>*;                       
        using add_ref_t =                sdk::function<uint32_t(struct win::i_connection_point_container_t*)>*;                       
        using release_t =                sdk::function<uint32_t(struct win::i_connection_point_container_t*)>*;                       
        using enum_connection_points_t = sdk::function<sdk::hresult(struct win::i_connection_point_container_t*, struct win::i_enum_connection_points_t**)>*;                       
        using find_connection_point_t =  sdk::function<sdk::hresult(struct win::i_connection_point_container_t*, const struct nt::guid_t*, struct win::i_connection_point_t**)>*;                       
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                    
        _m00 query_interface_t         query_interface;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                 add_ref;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                 release;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 enum_connection_points_t  enum_connection_points;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EnumConnectionPoints
        _m04 find_connection_point_t   find_connection_point;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FindConnectionPoint
                                                              
        SDK_MAGIC_PROPERTIES( "IConnectionPointContainerVtbl.$", 0x28, true, 0x8da82d43bc959991 );                       
        SDK_FIXED_SIZE( i_connection_point_container_vtbl_t, 0x28 );                       
    };                                                        
};
#include "magic/i_connection_point_container_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_connection_point_container_vtbl_t, 0x28 );
