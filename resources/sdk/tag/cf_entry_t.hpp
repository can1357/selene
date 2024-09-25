#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;      }
namespace win { struct i_unknown_t; }

#include "magic/cf_entry_t.start.hpp"
namespace tag
{
    // [struct tagCFEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cf_entry_t                          
    {                                          
        using pfn_ci_t = sdk::function<sdk::hresult(struct win::i_unknown_t*, const struct nt::guid_t&, void**)>*;         
                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                     
        _m00 const struct nt::guid_t* pclsid;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pclsid
        _m01 pfn_ci_t                 pfn_ci;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnCI
        _m02 uint32_t                 dw_flags;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwFlags
                                               
        SDK_MAGIC_PROPERTIES( "tagCFEntry.$", 0x18, true, 0x4f840de156e043f9 );         
        SDK_FIXED_SIZE( cf_entry_t, 0x18 );         
    };                                         
};
#include "magic/cf_entry_t.end.hpp"
SDK_VERIFY( struct tag::cf_entry_t, 0x18 );
