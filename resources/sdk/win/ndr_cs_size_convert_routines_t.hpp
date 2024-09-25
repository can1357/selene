#pragma once
#include <sdkgen/support_library.hpp>
#include "idl_cs_convert_t.hpp"

#include "magic/ndr_cs_size_convert_routines_t.start.hpp"
namespace win
{
    // [struct _NDR_CS_SIZE_CONVERT_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_cs_size_convert_routines_t                  
    {                                                      
        using pfn_net_size_t =               sdk::function<void(void*, uint32_t, uint32_t, enum win::idl_cs_convert_t*, uint32_t*, uint32_t*)>*;                
        using cs_type_to_netcs_routine_t =   sdk::function<void(void*, uint32_t, void*, uint32_t, uint8_t*, uint32_t*, uint32_t*)>*;                
        using pfn_local_size_t =             sdk::function<void(void*, uint32_t, uint32_t, enum win::idl_cs_convert_t*, uint32_t*, uint32_t*)>*;                
        using cs_type_from_netcs_routine_t = sdk::function<void(void*, uint32_t, uint8_t*, uint32_t, uint32_t, void*, uint32_t*, uint32_t*)>*;                
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                 
        _m00 pfn_net_size_t                pfn_net_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnNetSize
        _m01 cs_type_to_netcs_routine_t    pfn_to_net_cs;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnToNetCs
        _m02 pfn_local_size_t              pfn_local_size;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnLocalSize
        _m03 cs_type_from_netcs_routine_t  pfn_from_net_cs;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnFromNetCs
                                                           
        SDK_MAGIC_PROPERTIES( "_NDR_CS_SIZE_CONVERT_ROUTINES.$", 0x20, true, 0xcbb43a3c1a914f52 );                
        SDK_FIXED_SIZE( ndr_cs_size_convert_routines_t, 0x20 );                
    };                                                     
};
#include "magic/ndr_cs_size_convert_routines_t.end.hpp"
SDK_VERIFY( struct win::ndr_cs_size_convert_routines_t, 0x20 );
