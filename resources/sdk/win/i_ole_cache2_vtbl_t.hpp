#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;      }
namespace tag { struct formatetc_t; }
namespace tag { struct stgmedium_t; }

#include "magic/i_ole_cache2_vtbl_t.start.hpp"
namespace win
{
    struct i_ole_cache2_t;
    struct i_data_object_t;
    struct i_enum_statdata_t;

    // [struct IOleCache2Vtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_cache2_vtbl_t                  
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_ole_cache2_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_ole_cache2_t*)>*;                
        using cache_t =           sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct tag::formatetc_t*, uint32_t, uint32_t*)>*;                
        using uncache_t =         sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, uint32_t)>*;                
        using enum_cache_t =      sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct win::i_enum_statdata_t**)>*;                
        using init_cache_t =      sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct win::i_data_object_t*)>*;                
        using set_data_t =        sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*, int32_t)>*;                
        using update_cache_t =    sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, struct win::i_data_object_t*, uint32_t, void*)>*;                
        using discard_cache_t =   sdk::function<sdk::hresult(struct win::i_ole_cache2_t*, uint32_t)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 cache_t            cache;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Cache
        _m04 uncache_t          uncache;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Uncache
        _m05 enum_cache_t       enum_cache;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EnumCache
        _m06 init_cache_t       init_cache;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InitCache
        _m07 set_data_t         set_data;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SetData
        _m08 update_cache_t     update_cache;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .UpdateCache
        _m09 discard_cache_t    discard_cache;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DiscardCache
                                                
        SDK_MAGIC_PROPERTIES( "IOleCache2Vtbl.$", 0x50, true, 0xd3b1b8149604a5c4 );                
        SDK_FIXED_SIZE( i_ole_cache2_vtbl_t, 0x50 );                
    };                                          
};
#include "magic/i_ole_cache2_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_ole_cache2_vtbl_t, 0x50 );
