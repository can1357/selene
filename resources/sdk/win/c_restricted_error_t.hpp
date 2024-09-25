#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "stowed_exception_information_v2_t.hpp"

namespace tp { struct timer_t; }

#include "magic/c_restricted_error_t.start.hpp"
namespace win
{
    struct hpss_t;

    // [class CRestrictedError]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_restricted_error_t                                                           
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                               
        _m00 wchar_t*                                      psz_description;                //{ +0x0040    +0x0050    +0x0050    +0x0050    } | ._pszDescription
        _m01 wchar_t*                                      psz_restricted_description;     //{ +0x0048    +0x0058    +0x0058    +0x0058    } | ._pszRestrictedDescription
        _m02 wchar_t*                                      psz_capability_sid;             //{ +0x0050    +0x0060    +0x0060    +0x0060    } | ._pszCapabilitySid
        _m03 sdk::hresult                                  hr_error;                       //{ +0x0058    +0x0068    +0x0068    +0x0068    } | ._hrError
        _m04 wchar_t*                                      psz_section_name;               //{ +0x0060    +0x0070    +0x0070    +0x0070    } | ._pszSectionName
        _m05 void*                                         h_section;                      //{ +0x0068    +0x0078    +0x0078    +0x0078    } | ._hSection
        _m06 uint32_t                                      dw_version;                     //{ +0x0070    +0x0080    +0x0080    +0x0080    } | ._dwVersion
        _m07 uint16_t                                      c_stack_back_trace;             //{ +0x0074    +0x0084    +0x0084    +0x0084    } | ._cStackBackTrace
        _m08 void**                                        ppv_stack_back_trace;           //{ +0x0078    +0x0088    +0x0088    +0x0088    } | ._ppvStackBackTrace
        _m09 uint16_t                                      stack_back_trace_pointer_size;  //{ +0x0080    +0x0090    +0x0090    +0x0090    } | ._stackBackTracePointerSize
        _m10 struct win::stowed_exception_information_v2_t stowed_exception_information;   //{ +0x0088    +0x0098    +0x0098    +0x0098    } | ._stowedExceptionInformation
        _m11 uint32_t                                      dw_originating_process_id;      //{ +0x00c8    +0x0618    +0x0618    +0x0618    } | ._dwOriginatingProcessId
        _m12 uint32_t                                      dw_destination_process_id;      //{ +0x00cc    +0x061c    +0x061c    +0x061c    } | ._dwDestinationProcessId
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                               
        _m13 struct nt::guid_t                             correlation_id;                 //{ +0x00d8    +0x00d8    +0x00d8    } | ._correlationId
        _m14 int32_t                                       b_is_transformed;               //{ +0x00f8    +0x00f8    +0x00f8    } | ._bIsTransformed
        _m15 int32_t                                       b_restrict_marshaling_data;     //{ +0x00fc    +0x00fc    +0x00fc    } | ._bRestrictMarshalingData
        _m16 uint16_t                                      num_propagations;               //{ +0x0100    +0x0100    +0x0100    } | ._numPropagations
        _m17 wchar_t*                                      psz_signature;                  //{ +0x0108    +0x0108    +0x0108    } | ._pszSignature
        _m18 wchar_t*                                      m_pof_process_name;             //{ +0x0110    +0x0110    +0x0110    } | .m_pofProcessName
        _m19 wchar_t*                                      m_pof_stack_text;               //{ +0x0118    +0x0118    +0x0118    } | .m_pofStackText
        _m20 struct win::hpss_t*                           snapshot_handle;                //{ +0x0128    +0x0128    +0x0128    } | ._snapshotHandle
        _m21 nt::context                                   snapshot_context;               //{ +0x0130    +0x0130    +0x0130    } | ._snapshotContext
        _m22 uint32_t                                      snashpot_thread_id;             //{ +0x0600    +0x0600    +0x0600    } | ._snashpotThreadId
        _m23 void*                                         snapshot_return_address;        //{ +0x0608    +0x0608    +0x0608    } | ._snapshotReturnAddress
        _m24 struct tp::timer_t*                           p_snapshot_cleanup_timer;       //{ +0x0610    +0x0610    +0x0610    } | ._pSnapshotCleanupTimer
                                                                                         
        SDK_MAGIC_PROPERTIES( "CRestrictedError.$", 0x620, true, 0xa2cacca6f744c31c );                              
        SDK_DYNAMIC_SIZE( c_restricted_error_t );                                        
    };                                                                                   
};
#include "magic/c_restricted_error_t.end.hpp"
