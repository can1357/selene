#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_i2c_interface_2_t.start.hpp"
namespace video
{
    struct i2c_control_t;

    // [struct _VIDEO_PORT_I2C_INTERFACE_2]
    // => WDK 10 (NV)
    //
    struct port_i2c_interface_2_t                              
    {                                                          
        using i2c_start_t =    sdk::function<uint8_t(void*, struct video::i2c_control_t*)>*;                      
        using i2c_stop_t =     sdk::function<uint8_t(void*, struct video::i2c_control_t*)>*;                      
        using pi2c_write_2_t = sdk::function<uint8_t(void*, struct video::i2c_control_t*, uint8_t*, uint32_t)>*;                      
        using pi2c_read_2_t =  sdk::function<uint8_t(void*, struct video::i2c_control_t*, uint8_t*, uint32_t, uint8_t)>*;                      
                                                               
        // WDK 10                                              
        //                                                     
        _m00 uint16_t                    size;                   //{ +0x0000    } | .Size
        _m01 uint16_t                    version;                //{ +0x0002    } | .Version
        _m02 void*                       context;                //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;    //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;  //{ +0x0018    } | .InterfaceDereference
        _m05 i2c_start_t                 i2c_start;              //{ +0x0020    } | .I2CStart
        _m06 i2c_stop_t                  i2c_stop;               //{ +0x0028    } | .I2CStop
        _m07 pi2c_write_2_t              i2c_write;              //{ +0x0030    } | .I2CWrite
        _m08 pi2c_read_2_t               i2c_read;               //{ +0x0038    } | .I2CRead
                                                               
        SDK_NONVOL_PROPERTIES( "_VIDEO_PORT_I2C_INTERFACE_2.$", 0x0, false, 0xbeb58c04447199c1 );                      
        SDK_FIXED_SIZE( port_i2c_interface_2_t, 0x40 );                      
    };                                                         
};
#include "magic/port_i2c_interface_2_t.end.hpp"
SDK_VERIFY( struct video::port_i2c_interface_2_t, 0x40 );
