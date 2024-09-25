#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace tag { struct proxy_file_info_t; }

#include "magic/c_per_interface_ps_factory_t.start.hpp"
namespace win
{
    // [class CPerInterfacePSFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_per_interface_ps_factory_t                                  
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                              
        _m00 const struct nt::guid_t                    iid;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._iid
        _m01 const struct tag::proxy_file_info_t const* p_file_info;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pFileInfo
        _m02 const int32_t                              interface_index;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._interfaceIndex
                                                                        
        SDK_MAGIC_PROPERTIES( "CPerInterfacePSFactory.$", 0x38, true, 0x24cdf9b2eae2864b );                
        SDK_FIXED_SIZE( c_per_interface_ps_factory_t, 0x38 );                
    };                                                                  
};
#include "magic/c_per_interface_ps_factory_t.end.hpp"
SDK_VERIFY( class win::c_per_interface_ps_factory_t, 0x38 );
