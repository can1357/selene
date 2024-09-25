#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i2c_control_t.start.hpp"
namespace video
{
    // [struct _VIDEO_I2C_CONTROL]
    // => WDK 10 (NV)
    //
    struct i2c_control_t                                           
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 sdk::function<void(void*, uint8_t)>* write_clock_line;  //{ +0x0000    } | .WriteClockLine
        _m01 sdk::function<void(void*, uint8_t)>* write_data_line;   //{ +0x0008    } | .WriteDataLine
        _m02 sdk::function<uint8_t(void*)>*       read_clock_line;   //{ +0x0010    } | .ReadClockLine
        _m03 sdk::function<uint8_t(void*)>*       read_data_line;    //{ +0x0018    } | .ReadDataLine
        _m04 uint32_t                             i2c_delay;         //{ +0x0020    } | .I2CDelay
                                                                   
        SDK_NONVOL_PROPERTIES( "_VIDEO_I2C_CONTROL.$", 0x0, false, 0x9a14364709817bd4 );                 
        SDK_FIXED_SIZE( i2c_control_t, 0x28 );                     
    };                                                             
};
#include "magic/i2c_control_t.end.hpp"
SDK_VERIFY( struct video::i2c_control_t, 0x28 );
