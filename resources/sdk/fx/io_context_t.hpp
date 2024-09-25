#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/request_completion_params_t.hpp"

namespace nt  { struct mdl_t;        }
namespace wdf { class i_fx_memory_t; }

#include "magic/io_context_t.start.hpp"
namespace fx
{
    struct driver_globals_t;

    // [struct FxIoContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_context_t                                                       
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                    
        _m00 struct wdf::request_completion_params_t m_completion_params;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_CompletionParams
        _m01 class wdf::i_fx_memory_t*               m_request_memory;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_RequestMemory
        _m02 uint8_t                                 m_request_type;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_RequestType
        _m03 void*                                   m_buffer_to_free;          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_BufferToFree
        _m04 void*                                   m_original_system_buffer;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_OriginalSystemBuffer
        _m05 void*                                   m_original_user_buffer;    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .m_OriginalUserBuffer
        _m06 struct nt::mdl_t*                       m_mdl_to_free;             //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_MdlToFree
        _m07 struct nt::mdl_t*                       m_original_mdl;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_OriginalMdl
        _m08 struct fx::driver_globals_t*            m_driver_globals;          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_DriverGlobals
        _m09 uint32_t                                m_original_flags;          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_OriginalFlags
        _m10 uint64_t                                m_buffer_to_free_length;   //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_BufferToFreeLength
        _m11 uint64_t                                m_mdl_to_free_size;        //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_MdlToFreeSize
        _m12 uint8_t                                 m_copy_back_to_buffer;     //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_CopyBackToBuffer
        _m13 uint8_t                                 m_unlock_pages;            //{ +0x00a1    +0x00a1    +0x00a1    +0x00a1    } | .m_UnlockPages
        _m14 uint8_t                                 m_restore_state;           //{ +0x00a2    +0x00a2    +0x00a2    +0x00a2    } | .m_RestoreState
        _m15 uint8_t                                 m_major_function;          //{ +0x00a3    +0x00a3    +0x00a3    +0x00a3    } | .m_MajorFunction
        _m16 class wdf::i_fx_memory_t*               m_other_memory;            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_OtherMemory
                                                                              
        SDK_MAGIC_PROPERTIES( "FxIoContext.$", 0xb0, true, 0x5c7d46ffaa0a25e5 );                         
        SDK_FIXED_SIZE( io_context_t, 0xb0 );                                 
    };                                                                        
};
#include "magic/io_context_t.end.hpp"
SDK_VERIFY( struct fx::io_context_t, 0xb0 );
