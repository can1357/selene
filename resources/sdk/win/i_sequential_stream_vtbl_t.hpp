#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_sequential_stream_vtbl_t.start.hpp"
namespace win
{
    struct i_sequential_stream_t;

    // [struct ISequentialStreamVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_sequential_stream_vtbl_t           
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_sequential_stream_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_sequential_stream_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_sequential_stream_t*)>*;                
        using read_t =            sdk::function<sdk::hresult(struct win::i_sequential_stream_t*, void*, uint32_t, uint32_t*)>*;                
        using write_t =           sdk::function<sdk::hresult(struct win::i_sequential_stream_t*, const void*, uint32_t, uint32_t*)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 read_t             read;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Read
        _m04 write_t            write;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Write
                                                
        SDK_MAGIC_PROPERTIES( "ISequentialStreamVtbl.$", 0x28, true, 0x51b5bd1ba4464e6f );                
        SDK_FIXED_SIZE( i_sequential_stream_vtbl_t, 0x28 );                
    };                                          
};
#include "magic/i_sequential_stream_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_sequential_stream_vtbl_t, 0x28 );
