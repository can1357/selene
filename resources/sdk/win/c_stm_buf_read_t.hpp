#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_stm_buf_read_t.start.hpp"
namespace win
{
    struct i_stream_t;

    // [class CStmBufRead]
    // => Windows 10 v1607
    //
    class c_stm_buf_read_t                       
    {                                            
        // Windows 10 v1607                      
        //                                       
        _m00 struct win::i_stream_t*  m_p_stm;     //{ +0x0000    } | .m_pStm
        _m01 sdk::array<uint8_t, 256> m_a_buffer;  //{ +0x0008    } | .m_aBuffer
        _m02 uint8_t*                 m_p_buffer;  //{ +0x0108    } | .m_pBuffer
        _m03 uint32_t                 m_c_buffer;  //{ +0x0110    } | .m_cBuffer
                                                 
        SDK_MAGIC_PROPERTIES( "CStmBufRead.$", 0x0, false, 0xd7fe3fc82a49626d );           
        SDK_FIXED_SIZE( c_stm_buf_read_t, 0x118 );           
    };                                           
};
#include "magic/c_stm_buf_read_t.end.hpp"
SDK_VERIFY( class win::c_stm_buf_read_t, 0x118 );
