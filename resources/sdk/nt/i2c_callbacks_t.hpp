#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i2c_callbacks_t.start.hpp"
namespace nt
{
    // [struct _I2C_CALLBACKS]
    // => WDK 10 (NV)
    //
    struct i2c_callbacks_t                                         
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 sdk::function<void(void*, uint8_t)>* write_clock_line;  //{ +0x0000    } | .WriteClockLine
        _m01 sdk::function<void(void*, uint8_t)>* write_data_line;   //{ +0x0008    } | .WriteDataLine
        _m02 sdk::function<uint8_t(void*)>*       read_clock_line;   //{ +0x0010    } | .ReadClockLine
        _m03 sdk::function<uint8_t(void*)>*       read_data_line;    //{ +0x0018    } | .ReadDataLine
                                                                   
        SDK_NONVOL_PROPERTIES( "_I2C_CALLBACKS.$", 0x0, false, 0x1dd6b5d3c4edc61a );                 
        SDK_FIXED_SIZE( i2c_callbacks_t, 0x20 );                   
    };                                                             
};
#include "magic/i2c_callbacks_t.end.hpp"
SDK_VERIFY( struct nt::i2c_callbacks_t, 0x20 );
