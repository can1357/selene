#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_fill_lock_bytes_vtbl_t.start.hpp"
namespace win
{
    struct i_fill_lock_bytes_t;

    // [struct IFillLockBytesVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_fill_lock_bytes_vtbl_t             
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_fill_lock_bytes_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_fill_lock_bytes_t*)>*;                
        using fill_append_t =     sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, const void*, uint32_t, uint32_t*)>*;                
        using fill_at_t =         sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, uint64_t, const void*, uint32_t, uint32_t*)>*;                
        using set_fill_size_t =   sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, uint64_t)>*;                
        using terminate_t =       sdk::function<sdk::hresult(struct win::i_fill_lock_bytes_t*, int32_t)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 fill_append_t      fill_append;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FillAppend
        _m04 fill_at_t          fill_at;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FillAt
        _m05 set_fill_size_t    set_fill_size;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SetFillSize
        _m06 terminate_t        terminate;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Terminate
                                                
        SDK_MAGIC_PROPERTIES( "IFillLockBytesVtbl.$", 0x38, true, 0xbb93cc59d48f4756 );                
        SDK_FIXED_SIZE( i_fill_lock_bytes_vtbl_t, 0x38 );                
    };                                          
};
#include "magic/i_fill_lock_bytes_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_fill_lock_bytes_vtbl_t, 0x38 );
