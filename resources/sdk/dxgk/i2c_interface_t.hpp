#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i2c_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_I2C_INTERFACE]
    // => WDK 10 (NV)
    //
    struct i2c_interface_t                                                                   
    {                                                                                        
        using dxgkddi_i2c_transmit_data_to_display_t =  sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, const void*)>*;                                       
        using dxgkddi_i2c_receive_data_from_display_t = sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t, void*)>*;                                       
                                                                                             
        // WDK 10                                                                            
        //                                                                                   
        _m00 uint16_t                                 size;                                    //{ +0x0000    } | .Size
        _m01 uint16_t                                 version;                                 //{ +0x0002    } | .Version
        _m02 void*                                    context;                                 //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*              interface_reference;                     //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*              interface_dereference;                   //{ +0x0018    } | .InterfaceDereference
        _m05 dxgkddi_i2c_transmit_data_to_display_t   dxgk_ddi_i2c_transmit_data_to_display;   //{ +0x0020    } | .DxgkDdiI2CTransmitDataToDisplay
        _m06 dxgkddi_i2c_receive_data_from_display_t  dxgk_ddi_i2c_receive_data_from_display;  //{ +0x0028    } | .DxgkDdiI2CReceiveDataFromDisplay
                                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_I2C_INTERFACE.$", 0x0, false, 0x951335baa90d62a3 );                                       
        SDK_FIXED_SIZE( i2c_interface_t, 0x30 );                                             
    };                                                                                       
};
#include "magic/i2c_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::i2c_interface_t, 0x30 );
