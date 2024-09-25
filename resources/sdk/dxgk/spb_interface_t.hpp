#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct status_block_t; }

#include "magic/spb_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SPB_INTERFACE]
    // => WDK 10 (NV)
    //
    struct spb_interface_t                                                 
    {                                                                      
        using open_spb_resource_t =       sdk::function<int32_t(void*, int64_t, nt::unicode_view*, uint32_t, uint32_t, uint32_t, void**)>*;                        
        using read_spb_resource_t =       sdk::function<int32_t(void*, void*, uint32_t, void*, int64_t*, void*, struct io::status_block_t*)>*;                        
        using write_spb_resource_t =      sdk::function<int32_t(void*, void*, uint32_t, void*, int64_t*, void*, struct io::status_block_t*)>*;                        
        using spb_resource_io_control_t = sdk::function<int32_t(void*, void*, uint32_t, uint32_t, void*, uint32_t, void*, void*, struct io::status_block_t*)>*;                        
                                                                           
        // WDK 10                                                          
        //                                                                 
        _m00 uint16_t                              size;                     //{ +0x0000    } | .Size
        _m01 uint16_t                              version;                  //{ +0x0002    } | .Version
        _m02 void*                                 context;                  //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*           interface_reference;      //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*           interface_dereference;    //{ +0x0018    } | .InterfaceDereference
        _m05 open_spb_resource_t                   open_spb_resource;        //{ +0x0020    } | .OpenSpbResource
        _m06 sdk::function<int32_t(void*, void*)>* close_spb_resource;       //{ +0x0028    } | .CloseSpbResource
        _m07 read_spb_resource_t                   read_spb_resource;        //{ +0x0030    } | .ReadSpbResource
        _m08 write_spb_resource_t                  write_spb_resource;       //{ +0x0038    } | .WriteSpbResource
        _m09 spb_resource_io_control_t             spb_resource_io_control;  //{ +0x0040    } | .SpbResourceIoControl
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_SPB_INTERFACE.$", 0x0, false, 0x2f8aad70e182c41 );                        
        SDK_FIXED_SIZE( spb_interface_t, 0x48 );                           
    };                                                                     
};
#include "magic/spb_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::spb_interface_t, 0x48 );
