#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "net_luid_lh_t.hpp"
#include "object_header_t.hpp"
#include "if_counted_string_lh_t.hpp"
#include "nsi_compartment_type_t.hpp"

#include "magic/nsi_compartment_rw_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NSI_COMPARTMENT_RW]
    // => Windows 10 v1607
    //
    struct nsi_compartment_rw_t                                             
    {                                                                       
        // Windows 10 v1607                                                 
        //                                                                  
        _m00 struct ndis::object_header_t        header;                      //{ +0x0000    } | .Header
        _m01 union ndis::net_luid_lh_t           loopback_if_luid;            //{ +0x0008    } | .LoopbackIfLuid
        _m02 struct nt::guid_t                   loopback_if_network_guid;    //{ +0x0010    } | .LoopbackIfNetworkGuid
        _m03 struct nt::guid_t                   loopback_if_interface_guid;  //{ +0x0020    } | .LoopbackIfInterfaceGuid
        _m04 struct ndis::if_counted_string_lh_t loopback_if_descr;           //{ +0x0030    } | .LoopbackIfDescr
        _m05 struct ndis::if_counted_string_lh_t loopback_if_alias;           //{ +0x0234    } | .LoopbackIfAlias
        _m06 struct nt::guid_t                   compartment_guid;            //{ +0x0438    } | .CompartmentGuid
        _m07 struct ndis::if_counted_string_lh_t compartment_descr;           //{ +0x0448    } | .CompartmentDescr
        _m08 enum ndis::nsi_compartment_type_t   compartment_type;            //{ +0x064c    } | .CompartmentType
        _m09 uint32_t                            flags;                       //{ +0x0650    } | .Flags
        _m10 struct nt::guid_t                   namespace_guid;              //{ +0x0654    } | .NamespaceGuid
                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_NSI_COMPARTMENT_RW.$", 0x0, false, 0xaa2ea0cc5715800c );                           
        SDK_FIXED_SIZE( nsi_compartment_rw_t, 0x668 );                           
    };                                                                      
};
#include "magic/nsi_compartment_rw_t.end.hpp"
SDK_VERIFY( struct ndis::nsi_compartment_rw_t, 0x668 );
