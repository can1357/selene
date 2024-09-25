#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_block_t.start.hpp"
namespace ndis
{
    struct pd_config_t;
    struct miniport_block_t;
    struct pd_bm_domain_member_handle_t;

    // [struct _NDIS_PD_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_block_t                                                                 
    {                                                                                 
        // Windows 10 v1607                                                           
        //                                                                            
        _m00 struct ndis::miniport_block_t*             miniport;                       //{ +0x0000    } | .Miniport
        _m01 uint32_t                                   diagnostic_code;                //{ +0x0008    } | .DiagnosticCode
        _m02 uint8_t                                    pd_enabled_registry_value;      //{ +0x000c    } | .PDEnabledRegistryValue
        _m03 uint8_t                                    pd_buffers_managed_by_driver;   //{ +0x000d    } | .PDBuffersManagedByDriver
        _m04 uint8_t                                    pd_non_dma_adapter;             //{ +0x000e    } | .PDNonDmaAdapter
        _m05 uint32_t                                   pd_domain_id;                   //{ +0x0010    } | .PDDomainId
        _m06 uint32_t                                   pd_dma_address_width;           //{ +0x0014    } | .PDDmaAddressWidth
        _m07 struct ndis::pd_config_t*                  pd_current_config;              //{ +0x0018    } | .PDCurrentConfig
        _m08 uint32_t                                   pd_current_config_size;         //{ +0x0020    } | .PDCurrentConfigSize
        _m09 uint32_t                                   pd_current_config_buffer_size;  //{ +0x0024    } | .PDCurrentConfigBufferSize
        _m10 nt::list_entry_t                           pd_client_list;                 //{ +0x0028    } | .PDClientList
        _m11 nt::list_entry_t                           pd_block_list_link;             //{ +0x0038    } | .PDBlockListLink
        _m12 void*                                      pdbm_domain;                    //{ +0x0048    } | .PDBMDomain
        _m13 struct ndis::pd_bm_domain_member_handle_t* pdbm_domain_member_handle;      //{ +0x0050    } | .PDBMDomainMemberHandle
                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_BLOCK.$", 0x0, true, 0xa8cceac496efc18 );                              
        SDK_DYNAMIC_SIZE( pd_block_t );                                               
    };                                                                                
};
#include "magic/pd_block_t.end.hpp"
