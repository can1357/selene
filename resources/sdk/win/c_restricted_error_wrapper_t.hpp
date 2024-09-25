#pragma once
#include <sdkgen/support_library.hpp>
#include "process_t.hpp"
#include "../nt/guid_t.hpp"
#include "stowed_exception_information_v2_t.hpp"

namespace tp { struct timer_t; }

#include "magic/c_restricted_error_wrapper_t.start.hpp"
namespace win
{
    struct hpss_t;

    // [class CRestrictedErrorWrapper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_restricted_error_wrapper_t                                                    
    {                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                                
        _m000 wchar_t*                                      psz_description;                //{ +0x0040    +0x0050    +0x0050    +0x0050    } | ._pszDescription
        _m001 wchar_t*                                      psz_restricted_description;     //{ +0x0048    +0x0058    +0x0058    +0x0058    } | ._pszRestrictedDescription
        _m002 wchar_t*                                      psz_capability_sid;             //{ +0x0050    +0x0060    +0x0060    +0x0060    } | ._pszCapabilitySid
        _m003 sdk::hresult                                  hr_error;                       //{ +0x0058    +0x0068    +0x0068    +0x0068    } | ._hrError
        _m004 wchar_t*                                      psz_section_name;               //{ +0x0060    +0x0070    +0x0070    +0x0070    } | ._pszSectionName
        _m005 void*                                         h_section;                      //{ +0x0068    +0x0078    +0x0078    +0x0078    } | ._hSection
        _m006 uint32_t                                      dw_version;                     //{ +0x0070    +0x0080    +0x0080    +0x0080    } | ._dwVersion
        _m007 uint16_t                                      c_stack_back_trace;             //{ +0x0074    +0x0084    +0x0084    +0x0084    } | ._cStackBackTrace
        _m008 void**                                        ppv_stack_back_trace;           //{ +0x0078    +0x0088    +0x0088    +0x0088    } | ._ppvStackBackTrace
        _m009 uint16_t                                      stack_back_trace_pointer_size;  //{ +0x0080    +0x0090    +0x0090    +0x0090    } | ._stackBackTracePointerSize
        _m010 struct win::stowed_exception_information_v2_t stowed_exception_information;   //{ +0x0088    +0x0098    +0x0098    +0x0098    } | ._stowedExceptionInformation
        _m011 uint32_t                                      dw_originating_process_id;      //{ +0x00c8    +0x0618    +0x0618    +0x0618    } | ._dwOriginatingProcessId
        _m012 uint32_t                                      dw_destination_process_id;      //{ +0x00cc    +0x061c    +0x061c    +0x061c    } | ._dwDestinationProcessId
        _m013 bool                                          f_use_base_class_marshaling;    //{ +0x00d0    +0x0620    +0x0620    +0x0620    } | ._fUseBaseClassMarshaling
        _m014 class win::process_t                          sh_target_process;              //{ +0x00d8    +0x0628    +0x0628    +0x0628    } | ._shTargetProcess
                                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                
        _m015 struct nt::guid_t                             correlation_id;                 //{ +0x00d8    +0x00d8    +0x00d8    } | ._correlationId
        _m016 int32_t                                       b_is_transformed;               //{ +0x00f8    +0x00f8    +0x00f8    } | ._bIsTransformed
        _m017 int32_t                                       b_restrict_marshaling_data;     //{ +0x00fc    +0x00fc    +0x00fc    } | ._bRestrictMarshalingData
        _m018 uint16_t                                      num_propagations;               //{ +0x0100    +0x0100    +0x0100    } | ._numPropagations
        _m019 wchar_t*                                      psz_signature;                  //{ +0x0108    +0x0108    +0x0108    } | ._pszSignature
        _m020 wchar_t*                                      m_pof_process_name;             //{ +0x0110    +0x0110    +0x0110    } | .m_pofProcessName
        _m021 wchar_t*                                      m_pof_stack_text;               //{ +0x0118    +0x0118    +0x0118    } | .m_pofStackText
        _m022 struct win::hpss_t*                           snapshot_handle;                //{ +0x0128    +0x0128    +0x0128    } | ._snapshotHandle
        _m023 nt::context                                   snapshot_context;               //{ +0x0130    +0x0130    +0x0130    } | ._snapshotContext
        _m024 uint32_t                                      snashpot_thread_id;             //{ +0x0600    +0x0600    +0x0600    } | ._snashpotThreadId
        _m025 void*                                         snapshot_return_address;        //{ +0x0608    +0x0608    +0x0608    } | ._snapshotReturnAddress
        _m026 struct tp::timer_t*                           p_snapshot_cleanup_timer;       //{ +0x0610    +0x0610    +0x0610    } | ._pSnapshotCleanupTimer
                                                                                          
        SDK_MAGIC_PROPERTIES( "CRestrictedErrorWrapper.$", 0x640, true, 0xc17169cc5db5ccf );                              
        SDK_DYNAMIC_SIZE( c_restricted_error_wrapper_t );                                 
    };                                                                                    
};
#include "magic/c_restricted_error_wrapper_t.end.hpp"
