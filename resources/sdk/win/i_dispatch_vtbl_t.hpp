#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;       }
namespace tag { struct dispparams_t; }
namespace tag { struct excepinfo_t;  }
namespace tag { struct variant_t;    }

#include "magic/i_dispatch_vtbl_t.start.hpp"
namespace win
{
    struct i_dispatch_t;
    struct i_type_info_t;

    // [struct IDispatchVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_dispatch_vtbl_t                            
    {                                                   
        using query_interface_t =     sdk::function<sdk::hresult(struct win::i_dispatch_t*, const struct nt::guid_t&, void**)>*;                    
        using add_ref_t =             sdk::function<uint32_t(struct win::i_dispatch_t*)>*;                    
        using release_t =             sdk::function<uint32_t(struct win::i_dispatch_t*)>*;                    
        using get_type_info_count_t = sdk::function<sdk::hresult(struct win::i_dispatch_t*, uint32_t*)>*;                    
        using get_type_info_t =       sdk::function<sdk::hresult(struct win::i_dispatch_t*, uint32_t, uint32_t, struct win::i_type_info_t**)>*;                    
        using get_i_ds_of_names_t =   sdk::function<sdk::hresult(struct win::i_dispatch_t*, const struct nt::guid_t&, wchar_t**, uint32_t, uint32_t, int32_t*)>*;                    
        using invoke_t =              sdk::function<sdk::hresult(struct win::i_dispatch_t*, int32_t, const struct nt::guid_t&, uint32_t, uint16_t, struct tag::dispparams_t*, struct tag::variant_t*, struct tag::excepinfo_t*, uint32_t*)>*;                    
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 query_interface_t      query_interface;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t              add_ref;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t              release;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_type_info_count_t  get_type_info_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetTypeInfoCount
        _m04 get_type_info_t        get_type_info;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetTypeInfo
        _m05 get_i_ds_of_names_t    get_i_ds_of_names;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetIDsOfNames
        _m06 invoke_t               invoke;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Invoke
                                                        
        SDK_MAGIC_PROPERTIES( "IDispatchVtbl.$", 0x38, true, 0x987c87395b60219c );                    
        SDK_FIXED_SIZE( i_dispatch_vtbl_t, 0x38 );                    
    };                                                  
};
#include "magic/i_dispatch_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_dispatch_vtbl_t, 0x38 );
