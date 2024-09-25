#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_class_factory_vtbl_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_class_factory_t;

    // [struct IClassFactoryVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_class_factory_vtbl_t               
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_class_factory_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_class_factory_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_class_factory_t*)>*;                
        using create_instance_t = sdk::function<sdk::hresult(struct win::i_class_factory_t*, struct win::i_unknown_t*, const struct nt::guid_t*, void**)>*;                
        using lock_server_t =     sdk::function<sdk::hresult(struct win::i_class_factory_t*, int32_t)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 create_instance_t  create_instance;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreateInstance
        _m04 lock_server_t      lock_server;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LockServer
                                                
        SDK_MAGIC_PROPERTIES( "IClassFactoryVtbl.$", 0x28, true, 0xa48abf4bd3550735 );                
        SDK_FIXED_SIZE( i_class_factory_vtbl_t, 0x28 );                
    };                                          
};
#include "magic/i_class_factory_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_class_factory_vtbl_t, 0x28 );
