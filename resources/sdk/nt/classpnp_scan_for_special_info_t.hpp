#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/classpnp_scan_for_special_info_t.start.hpp"
namespace nt
{
    // [struct _CLASSPNP_SCAN_FOR_SPECIAL_INFO]
    // => WDK 10 (NV)
    //
    struct classpnp_scan_for_special_info_t
    {                                      
        // WDK 10                      
        //                             
        _m00 char*    vendor_id;             //{ +0x0000    } | .VendorId
        _m01 char*    product_id;            //{ +0x0008    } | .ProductId
        _m02 char*    product_revision;      //{ +0x0010    } | .ProductRevision
        _m03 uint64_t data;                  //{ +0x0018    } | .Data
                                           
        SDK_NONVOL_PROPERTIES( "_CLASSPNP_SCAN_FOR_SPECIAL_INFO.$", 0x0, false, 0xa037d74ca67f673d );                 
        SDK_FIXED_SIZE( classpnp_scan_for_special_info_t, 0x20 );                 
    };                                     
};
#include "magic/classpnp_scan_for_special_info_t.end.hpp"
SDK_VERIFY( struct nt::classpnp_scan_for_special_info_t, 0x20 );
