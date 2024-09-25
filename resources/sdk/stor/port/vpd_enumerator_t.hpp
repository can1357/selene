#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_enumerator_t.start.hpp"
namespace stor::port
{
    struct vpd_identification_page_t;
    struct vpd_identification_descriptor_t;

    // [struct _VPD_ENUMERATOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vpd_enumerator_t                                                     
    {                                                                           
        using p_current_descriptor_t = struct stor::port::vpd_identification_descriptor_t*;                     
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                      
        _m00 struct stor::port::vpd_identification_page_t* p_vpd_id_page;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pVPDIdPage
        _m01 p_current_descriptor_t                        p_current_descriptor;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pCurrentDescriptor
        _m02 uint32_t                                      real_page_length;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RealPageLength
                                                                                
        SDK_MAGIC_PROPERTIES( "_VPD_ENUMERATOR.$", 0x18, true, 0xc4f8ab2d187f839c );                     
        SDK_FIXED_SIZE( vpd_enumerator_t, 0x18 );                               
    };                                                                          
};
#include "magic/vpd_enumerator_t.end.hpp"
SDK_VERIFY( struct stor::port::vpd_enumerator_t, 0x18 );
