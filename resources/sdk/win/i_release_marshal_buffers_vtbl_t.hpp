#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;          }
namespace tag { struct rpcolemessage_t; }

#include "magic/i_release_marshal_buffers_vtbl_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_release_marshal_buffers_t;

    // [struct IReleaseMarshalBuffersVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_release_marshal_buffers_vtbl_t                   
    {                                                         
        using query_interface_t =        sdk::function<sdk::hresult(struct win::i_release_marshal_buffers_t*, const struct nt::guid_t&, void**)>*;                       
        using add_ref_t =                sdk::function<uint32_t(struct win::i_release_marshal_buffers_t*)>*;                       
        using release_t =                sdk::function<uint32_t(struct win::i_release_marshal_buffers_t*)>*;                       
        using release_marshal_buffer_t = sdk::function<sdk::hresult(struct win::i_release_marshal_buffers_t*, struct tag::rpcolemessage_t*, uint32_t, struct win::i_unknown_t*)>*;                       
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                    
        _m00 query_interface_t         query_interface;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                 add_ref;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                 release;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 release_marshal_buffer_t  release_marshal_buffer;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReleaseMarshalBuffer
                                                              
        SDK_MAGIC_PROPERTIES( "IReleaseMarshalBuffersVtbl.$", 0x20, true, 0x3f13505aec82dadd );                       
        SDK_FIXED_SIZE( i_release_marshal_buffers_vtbl_t, 0x20 );                       
    };                                                        
};
#include "magic/i_release_marshal_buffers_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_release_marshal_buffers_vtbl_t, 0x20 );
