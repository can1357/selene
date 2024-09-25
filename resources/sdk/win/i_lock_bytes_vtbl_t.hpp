#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;    }
namespace tag { struct statstg_t; }

#include "magic/i_lock_bytes_vtbl_t.start.hpp"
namespace win
{
    struct i_lock_bytes_t;

    // [struct ILockBytesVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_lock_bytes_vtbl_t                  
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_lock_bytes_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_lock_bytes_t*)>*;                
        using read_at_t =         sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t, void*, uint32_t, uint32_t*)>*;                
        using write_at_t =        sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t, const void*, uint32_t, uint32_t*)>*;                
        using flush_t =           sdk::function<sdk::hresult(struct win::i_lock_bytes_t*)>*;                
        using set_size_t =        sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t)>*;                
        using lock_region_t =     sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t, uint64_t, uint32_t)>*;                
        using unlock_region_t =   sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, uint64_t, uint64_t, uint32_t)>*;                
        using stat_t =            sdk::function<sdk::hresult(struct win::i_lock_bytes_t*, struct tag::statstg_t*, uint32_t)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 read_at_t          read_at;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReadAt
        _m04 write_at_t         write_at;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WriteAt
        _m05 flush_t            flush;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Flush
        _m06 set_size_t         set_size;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SetSize
        _m07 lock_region_t      lock_region;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LockRegion
        _m08 unlock_region_t    unlock_region;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .UnlockRegion
        _m09 stat_t             stat;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Stat
                                                
        SDK_MAGIC_PROPERTIES( "ILockBytesVtbl.$", 0x50, true, 0xc60a1fe1d0a208a7 );                
        SDK_FIXED_SIZE( i_lock_bytes_vtbl_t, 0x50 );                
    };                                          
};
#include "magic/i_lock_bytes_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_lock_bytes_vtbl_t, 0x50 );
