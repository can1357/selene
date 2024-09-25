#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_root_port_interface_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_ROOT_PORT_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_root_port_interface_t                       
    {                                                          
        using read_config_space_t =  sdk::function<uint32_t(void*, void*, uint32_t, uint32_t)>*;                      
        using write_config_space_t = sdk::function<uint32_t(void*, void*, uint32_t, uint32_t)>*;                      
                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                     
        _m00 uint16_t                    size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                    version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                       context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 read_config_space_t         read_config_space;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ReadConfigSpace
        _m06 write_config_space_t        write_config_space;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .WriteConfigSpace
                                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_ROOT_PORT_INTERFACE.$", 0x30, true, 0x8607c1d135e26d97 );                      
        SDK_FIXED_SIZE( express_root_port_interface_t, 0x30 );                      
    };                                                         
};
#include "magic/express_root_port_interface_t.end.hpp"
SDK_VERIFY( struct pci::express_root_port_interface_t, 0x30 );
