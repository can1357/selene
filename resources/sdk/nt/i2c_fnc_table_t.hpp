#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/i2c_fnc_table_t.start.hpp"
namespace nt
{
    // [struct _I2C_FNC_TABLE]
    // => WDK 10 (NV)
    //
    struct i2c_fnc_table_t                                         
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                             size;              //{ +0x0000    } | .Size
        _m01 sdk::function<void(void*, uint8_t)>* write_clock_line;  //{ +0x0008    } | .WriteClockLine
        _m02 sdk::function<void(void*, uint8_t)>* write_data_line;   //{ +0x0010    } | .WriteDataLine
        _m03 sdk::function<uint8_t(void*)>*       read_clock_line;   //{ +0x0018    } | .ReadClockLine
        _m04 sdk::function<uint8_t(void*)>*       read_data_line;    //{ +0x0020    } | .ReadDataLine
        _m05 sdk::function<void(void*)>*          wait_vsync;        //{ +0x0028    } | .WaitVsync
                                                                   
        SDK_NONVOL_PROPERTIES( "_I2C_FNC_TABLE.$", 0x0, false, 0x55ce177a9c0b0895 );                 
        SDK_FIXED_SIZE( i2c_fnc_table_t, 0x38 );                   
    };                                                             
};
#include "magic/i2c_fnc_table_t.end.hpp"
SDK_VERIFY( struct nt::i2c_fnc_table_t, 0x38 );
