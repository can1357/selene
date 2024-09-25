#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/custom_header_t.start.hpp"
namespace tag
{
    struct custom_opaque_data_t;

    // [struct tagCustomHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct custom_header_t                                      
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                      
        _m00 uint32_t                          total_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .totalSize
        _m01 uint32_t                          header_size;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .headerSize
        _m02 uint32_t                          c_opaque_data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cOpaqueData
        _m03 uint32_t                          dest_ctx;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .destCtx
        _m04 uint32_t                          c_ifs;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cIfs
        _m05 struct nt::guid_t                 class_info_clsid;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .classInfoClsid
        _m06 struct nt::guid_t*                pclsid;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pclsid
        _m07 uint32_t*                         p_sizes;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pSizes
        _m08 struct tag::custom_opaque_data_t* opaque_data;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .opaqueData
                                                                
        SDK_MAGIC_PROPERTIES( "tagCustomHeader.$", 0x40, true, 0xeb4989dc7517ad88 );                 
        SDK_FIXED_SIZE( custom_header_t, 0x40 );                 
    };                                                          
};
#include "magic/custom_header_t.end.hpp"
SDK_VERIFY( struct tag::custom_header_t, 0x40 );
