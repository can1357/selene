#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stream_data_reader_writer_t.start.hpp"
namespace win
{
    // [class StreamDataReaderWriter]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class stream_data_reader_writer_t                
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                           
        _m00 const uint32_t m_destination_context;     //{ +0x0040    +0x0040    +0x0040    } | .m_destinationContext
        _m01 const uint32_t m_marshal_flags;           //{ +0x0044    +0x0044    +0x0044    } | .m_marshalFlags
        _m02 const bool     m_can_marshal;             //{ +0x0048    +0x0048    +0x0048    } | .m_canMarshal
        _m03 void*          m_pv_destination_context;  //{ +0x0050    +0x0050    +0x0050    } | .m_pvDestinationContext
                                                     
        SDK_MAGIC_PROPERTIES( "StreamDataReaderWriter.$", 0x58, true, 0x57639fc086e3181a );                         
        SDK_FIXED_SIZE( stream_data_reader_writer_t, 0x58 );                         
    };                                               
};
#include "magic/stream_data_reader_writer_t.end.hpp"
SDK_VERIFY( class win::stream_data_reader_writer_t, 0x58 );
