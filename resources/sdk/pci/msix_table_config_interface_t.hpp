#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msix_table_config_interface_t.start.hpp"
namespace pci
{
    // [struct _PCI_MSIX_TABLE_CONFIG_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct msix_table_config_interface_t                                     
    {                                                                        
        using ppci_msix_set_entry_t = sdk::function<int32_t(void*, uint32_t, uint32_t)>*;                      
        using ppci_msix_get_entry_t = sdk::function<int32_t(void*, uint32_t, uint32_t*, uint8_t*)>*;                      
                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 uint16_t                                  size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                  version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                     context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*               interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*               interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 ppci_msix_set_entry_t                     set_table_entry;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SetTableEntry
        _m06 sdk::function<int32_t(void*, uint32_t)>*  mask_table_entry;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .MaskTableEntry
        _m07 sdk::function<int32_t(void*, uint32_t)>*  unmask_table_entry;     //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .UnmaskTableEntry
        _m08 ppci_msix_get_entry_t                     get_table_entry;        //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .GetTableEntry
        _m09 sdk::function<int32_t(void*, uint32_t*)>* get_table_size;         //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .GetTableSize
                                                                             
        SDK_NONVOL_PROPERTIES( "_PCI_MSIX_TABLE_CONFIG_INTERFACE.$", 0x48, true, 0xaa880570b24c1375 );                      
        SDK_FIXED_SIZE( msix_table_config_interface_t, 0x48 );                      
    };                                                                       
};
#include "magic/msix_table_config_interface_t.end.hpp"
SDK_VERIFY( struct pci::msix_table_config_interface_t, 0x48 );
