#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/firmware_table_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_FIRMWARE_TABLE_INTERFACE]
    // => WDK 10 (NV)
    //
    struct firmware_table_interface_t                                   
    {                                                                   
        using enum_system_firmware_tables_t = sdk::function<int32_t(void*, uint32_t, uint32_t, void*, uint32_t*)>*;                            
        using read_system_firmware_table_t =  sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, void*, uint32_t*)>*;                            
                                                                        
        // WDK 10                                                       
        //                                                              
        _m00 uint16_t                       size;                         //{ +0x0000    } | .Size
        _m01 uint16_t                       version;                      //{ +0x0002    } | .Version
        _m02 void*                          context;                      //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*    interface_reference;          //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*    interface_dereference;        //{ +0x0018    } | .InterfaceDereference
        _m05 enum_system_firmware_tables_t  enum_system_firmware_tables;  //{ +0x0020    } | .EnumSystemFirmwareTables
        _m06 read_system_firmware_table_t   read_system_firmware_table;   //{ +0x0028    } | .ReadSystemFirmwareTable
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_FIRMWARE_TABLE_INTERFACE.$", 0x0, false, 0x5f928825c6bf5a7 );                            
        SDK_FIXED_SIZE( firmware_table_interface_t, 0x30 );                            
    };                                                                  
};
#include "magic/firmware_table_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::firmware_table_interface_t, 0x30 );
