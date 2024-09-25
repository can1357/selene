#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;    }
namespace tag { struct statstg_t; }

#include "magic/i_stream_vtbl_t.start.hpp"
namespace win
{
    struct i_stream_t;

    // [struct IStreamVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_stream_vtbl_t                               
    {                                                    
        using query_interface_t =          sdk::function<sdk::hresult(struct win::i_stream_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =                  sdk::function<uint32_t(struct win::i_stream_t*)>*;                
        using release_t =                  sdk::function<uint32_t(struct win::i_stream_t*)>*;                
        using read_t =                     sdk::function<sdk::hresult(struct win::i_stream_t*, void*, uint32_t, uint32_t*)>*;                
        using write_t =                    sdk::function<sdk::hresult(struct win::i_stream_t*, const void*, uint32_t, uint32_t*)>*;                
        using seek_t =                     sdk::function<sdk::hresult(struct win::i_stream_t*, int64_t, uint32_t, uint64_t*)>*;                
        using set_size_t =                 sdk::function<sdk::hresult(struct win::i_stream_t*, uint64_t)>*;                
        using copy_to_t =                  sdk::function<sdk::hresult(struct win::i_stream_t*, struct win::i_stream_t*, uint64_t, uint64_t*, uint64_t*)>*;                
        using commit_t =                   sdk::function<sdk::hresult(struct win::i_stream_t*, uint32_t)>*;                
        using pfn_coreleasemarshaldata_t = sdk::function<sdk::hresult(struct win::i_stream_t*)>*;                
        using lock_region_t =              sdk::function<sdk::hresult(struct win::i_stream_t*, uint64_t, uint64_t, uint32_t)>*;                
        using unlock_region_t =            sdk::function<sdk::hresult(struct win::i_stream_t*, uint64_t, uint64_t, uint32_t)>*;                
        using stat_t =                     sdk::function<sdk::hresult(struct win::i_stream_t*, struct tag::statstg_t*, uint32_t)>*;                
        using clone_t =                    sdk::function<sdk::hresult(struct win::i_stream_t*, struct win::i_stream_t**)>*;                
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 query_interface_t           query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                   add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                   release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 read_t                      read;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Read
        _m04 write_t                     write;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Write
        _m05 seek_t                      seek;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Seek
        _m06 set_size_t                  set_size;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SetSize
        _m07 copy_to_t                   copy_to;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CopyTo
        _m08 commit_t                    commit;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Commit
        _m09 pfn_coreleasemarshaldata_t  revert;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Revert
        _m10 lock_region_t               lock_region;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LockRegion
        _m11 unlock_region_t             unlock_region;    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .UnlockRegion
        _m12 stat_t                      stat;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Stat
        _m13 clone_t                     clone;            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Clone
                                                         
        SDK_MAGIC_PROPERTIES( "IStreamVtbl.$", 0x70, true, 0xc3581dfd8da65b44 );                
        SDK_FIXED_SIZE( i_stream_vtbl_t, 0x70 );                
    };                                                   
};
#include "magic/i_stream_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_stream_vtbl_t, 0x70 );
