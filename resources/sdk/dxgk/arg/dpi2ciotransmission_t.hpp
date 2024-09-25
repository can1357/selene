#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpi2ciotransmission_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_DPI2CIOTRANSMISSION]
    // => WDK 10 (NV)
    //
    struct dpi2ciotransmission_t                         
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint1_t                read;                  //{ +0x0000@0  } | .Read
        _m01 uint1_t                write;                 //{ +0x0000@1  } | .Write
        _m02 uint1_t                eddc_mode;             //{ +0x0000@2  } | .EDDCMode
        _m03 uint3_t                offset_size_in_bytes;  //{ +0x0000@3  } | .OffsetSizeInBytes
        _m04 uint1_t                can_use_cached_data;   //{ +0x0000@6  } | .CanUseCachedData
        _m05 uint32_t               root_port_index;       //{ +0x0004    } | .RootPortIndex
        _m06 uint32_t               i2c_address;           //{ +0x0008    } | .I2CAddress
        _m07 uint8_t                word_offset;           //{ +0x000c@0  } | .WordOffset
        _m08 uint7_t                segment_pointer;       //{ +0x000c@8  } | .SegmentPointer
        _m09 uint32_t               offset;                //{ +0x000c    } | .Offset
        _m10 uint32_t               buffer_size_supplied;  //{ +0x0010    } | .BufferSizeSupplied
        _m11 uint32_t               bytes_to_write;        //{ +0x0014    } | .BytesToWrite
        _m12 uint32_t               bytes_to_read;         //{ +0x0018    } | .BytesToRead
        _m13 uint32_t               dp_native_error;       //{ +0x001c    } | .DPNativeError
        _m14 uint32_t               bytes_written;         //{ +0x0020    } | .BytesWritten
        _m15 uint32_t               bytes_read;            //{ +0x0024    } | .BytesRead
        _m16 sdk::array<uint8_t, 1> data;                  //{ +0x0028    } | .Data
                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARG_DPI2CIOTRANSMISSION.$", 0x0, false, 0x9c0be0d736ed0c53 );                     
        SDK_FIXED_SIZE( dpi2ciotransmission_t, 0x2c );                     
    };                                                   
};
#include "magic/dpi2ciotransmission_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::dpi2ciotransmission_t, 0x2c );
