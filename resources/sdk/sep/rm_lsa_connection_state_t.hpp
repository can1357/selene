#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rm_lsa_connection_state_t.start.hpp"
namespace sep
{
    // [struct _SEP_RM_LSA_CONNECTION_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rm_lsa_connection_state_t                 
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                           
        _m00 void*   lsa_process_handle;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LsaProcessHandle
        _m01 void*   lsa_command_port_handle;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LsaCommandPortHandle
        _m02 void*   sep_rm_thread_handle;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SepRmThreadHandle
        _m03 void*   rm_command_port_handle;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RmCommandPortHandle
        _m04 void*   rm_command_server_port_handle;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RmCommandServerPortHandle
        _m05 void*   lsa_command_port_section_handle;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LsaCommandPortSectionHandle
        _m06 int64_t lsa_command_port_section_size;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LsaCommandPortSectionSize
        _m07 void*   lsa_view_port_memory;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LsaViewPortMemory
        _m08 void*   rm_view_port_memory;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RmViewPortMemory
        _m09 int32_t lsa_command_port_memory_delta;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LsaCommandPortMemoryDelta
        _m10 uint8_t lsa_command_port_active;          //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .LsaCommandPortActive
                                                     
        SDK_MAGIC_PROPERTIES( "_SEP_RM_LSA_CONNECTION_STATE.$", 0x50, true, 0x8a104fe567894b6d );                                
        SDK_FIXED_SIZE( rm_lsa_connection_state_t, 0x50 );                                
    };                                               
};
#include "magic/rm_lsa_connection_state_t.end.hpp"
SDK_VERIFY( struct sep::rm_lsa_connection_state_t, 0x50 );
