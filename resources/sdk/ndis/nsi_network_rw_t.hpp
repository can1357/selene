#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "if_counted_string_lh_t.hpp"

#include "magic/nsi_network_rw_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NSI_NETWORK_RW]
    // => Windows 10 v1607
    //
    struct nsi_network_rw_t                                     
    {                                                           
        // Windows 10 v1607                                     
        //                                                      
        _m00 struct ndis::object_header_t        header;          //{ +0x0000    } | .Header
        _m01 uint32_t                            compartment_id;  //{ +0x0004    } | .CompartmentId
        _m02 uint32_t                            site_id;         //{ +0x0008    } | .SiteId
        _m03 struct ndis::if_counted_string_lh_t network_name;    //{ +0x000c    } | .NetworkName
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_NSI_NETWORK_RW.$", 0x0, false, 0x6d539bbf800c2d45 );               
        SDK_FIXED_SIZE( nsi_network_rw_t, 0x210 );               
    };                                                          
};
#include "magic/nsi_network_rw_t.end.hpp"
SDK_VERIFY( struct ndis::nsi_network_rw_t, 0x210 );
