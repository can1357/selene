#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_mem_stm_t.start.hpp"
namespace win
{
    struct memstm_t;
    class c_ref_mutex_sem_t;

    // [class CMemStm]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_mem_stm_t                               
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                          
        _m00 uint32_t                      m_dw_sig;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_dwSig
        _m01 uint32_t                      m_refs;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_refs
        _m02 uint32_t                      m_pos;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_pos
        _m03 void*                         m_h_mem;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_hMem
        _m04 struct win::memstm_t*         m_p_data;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_pData
        _m05 class win::c_ref_mutex_sem_t* m_pmxs;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_pmxs
                                                    
        SDK_MAGIC_PROPERTIES( "CMemStm.$", 0x30, true, 0xdaba8d346b23cfc4 );         
        SDK_FIXED_SIZE( c_mem_stm_t, 0x30 );         
    };                                              
};
#include "magic/c_mem_stm_t.end.hpp"
SDK_VERIFY( class win::c_mem_stm_t, 0x30 );
