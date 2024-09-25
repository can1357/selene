#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_malloc_vtbl_t.start.hpp"
namespace win
{
    struct i_malloc_t;

    // [struct IMallocVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_malloc_vtbl_t                                                 
    {                                                                      
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_malloc_t*, const struct nt::guid_t&, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_malloc_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_malloc_t*)>*;                
        using alloc_t =           sdk::function<void*(struct win::i_malloc_t*, uint64_t)>*;                
        using realloc_t =         sdk::function<void*(struct win::i_malloc_t*, void*, uint64_t)>*;                
        using free_t =            sdk::function<void(struct win::i_malloc_t*, void*)>*;                
        using get_size_t =        sdk::function<uint64_t(struct win::i_malloc_t*, void*)>*;                
        using did_alloc_t =       sdk::function<int32_t(struct win::i_malloc_t*, void*)>*;                
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                 
        _m00 query_interface_t                             query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                                     add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                                     release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 alloc_t                                       alloc;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Alloc
        _m04 realloc_t                                     realloc;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Realloc
        _m05 free_t                                        free;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Free
        _m06 get_size_t                                    get_size;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GetSize
        _m07 did_alloc_t                                   did_alloc;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DidAlloc
        _m08 sdk::function<void(struct win::i_malloc_t*)>* heap_minimize;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HeapMinimize
                                                                           
        SDK_MAGIC_PROPERTIES( "IMallocVtbl.$", 0x48, true, 0xc0b0b1ab4e61bfc4 );                
        SDK_FIXED_SIZE( i_malloc_vtbl_t, 0x48 );                           
    };                                                                     
};
#include "magic/i_malloc_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_malloc_vtbl_t, 0x48 );
