#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/midl_i_local_object_exporter_0001_t.start.hpp"
namespace win
{
    // [struct __MIDL_ILocalObjectExporter_0001]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_i_local_object_exporter_0001_t                                             
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                            
        //                                                                                 
        _m00 uint32_t          offsetof_channel_ptr_from_proxy_ptr;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .offsetofChannelPtrFromProxyPtr
        _m01 uint64_t          addressof_oid_list_head;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .addressofOIDListHead
        _m02 uint32_t          sizeof_ipid_entry;                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .sizeofIPIDEntry
        _m03 uint32_t          offsetof_next_ipid_pointer_in_ipid_entry;                     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .offsetofNextIPIDPointerInIPIDEntry
        _m04 uint32_t          offsetof_flags_in_ipid_entry;                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .offsetofFlagsInIPIDEntry
        _m05 uint32_t          offsetof_ipid_in_ipid_entry;                                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .offsetofIPIDInIPIDEntry
        _m06 uint32_t          offsetof_server_address_in_ipid_entry;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .offsetofServerAddressInIPIDEntry
        _m07 uint32_t          offsetof_oidf_link_in_ipid_entry;                             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .offsetofOIDFLinkInIPIDEntry
        _m08 uint32_t          server_ipid_entry_flag;                                       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .serverIPIDEntryFlag
        _m09 uint32_t          invalid_ipid_entry_flags;                                     //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .invalidIPIDEntryFlags
        _m10 uint32_t          sizeof_c_client_channel;                                      //{ +0x0030    +0x003c    +0x003c    +0x003c    } | .sizeofCClientChannel
        _m11 uint32_t          offsetof_canonical_i_rpc_channel_buffer_in_c_client_channel;  //{ +0x0034    +0x0040    +0x0040    +0x0040    } | .offsetofCanonicalIRpcChannelBufferInCClientChannel
        _m12 uint32_t          offsetof_ipid_entry_in_c_client_channel;                      //{ +0x0038    +0x0044    +0x0044    +0x0044    } | .offsetofIPIDEntryInCClientChannel
        _m13 uint32_t          offsetof_signature_in_c_client_channel;                       //{ +0x003c    +0x004c    +0x004c    +0x004c    } | .offsetofSignatureInCClientChannel
        _m14 struct nt::guid_t guid_signatureof_c_client_channel;                            //{ +0x0040    +0x0050    +0x0050    +0x0050    } | .guidSignatureofCClientChannel
                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                            
        //                                                                                 
        _m15 uint32_t          sizeof_oxid_entry;                                            //{ +0x0030    +0x0030    +0x0030    } | .sizeofOxidEntry
        _m16 uint32_t          offsetof_pid_in_oxid_entry;                                   //{ +0x0034    +0x0034    +0x0034    } | .offsetofPidInOxidEntry
        _m17 uint32_t          offsetof_tid_in_oxid_entry;                                   //{ +0x0038    +0x0038    +0x0038    } | .offsetofTidInOxidEntry
        _m18 uint32_t          offsetof_oxid_entry_in_c_client_channel;                      //{ +0x0048    +0x0048    +0x0048    } | .offsetofOxidEntryInCClientChannel
                                                                                           
        SDK_MAGIC_PROPERTIES( "__MIDL_ILocalObjectExporter_0001.$", 0x60, true, 0x1a17b508dca99622 );                                                            
        SDK_DYNAMIC_SIZE( midl_i_local_object_exporter_0001_t );                                                            
    };                                                                                     
};
#include "magic/midl_i_local_object_exporter_0001_t.end.hpp"
